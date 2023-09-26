import 'dart:typed_data';

import 'package:convert/convert.dart';
import 'package:flutter/material.dart';
import 'package:flutter_trust_wallet_core/flutter_trust_wallet_core.dart';
import 'package:flutter_trust_wallet_core/trust_wallet_core_ffi.dart';
import 'package:flutter_trust_wallet_core_example/base_example.dart';
import 'package:flutter_trust_wallet_core/protobuf/bitcoin.pb.dart' as Bitcoin;
import 'package:fixnum/fixnum.dart' as $fixnum;

class BitcoinTransactionExample extends BaseExample {
  final HDWallet wallet;

  const BitcoinTransactionExample(this.wallet, {Key? key})
      : super('Bitcoin Transaction', key: key);

  @override
  _BitcoinTransactionExampleState createState() =>
      _BitcoinTransactionExampleState();
}

class _BitcoinTransactionExampleState
    extends BaseExampleState<BitcoinTransactionExample> {
  @override
  void initState() {
    super.initState();
    int coin = TWCoinType.TWCoinTypeBitcoinTestnet;
    final addressBtc = widget.wallet.getAddressForCoin(coin);
    final toAddress = "tb1qpe908rcwfwgvaw4taey8gm5jefwzw5kvqhulah";
    final changeAddress = "tb1qghgse35j7d3hmu5j9eplhhdw9ts90747s50mfx";
    final secretPrivateKeyBtc = widget.wallet.getKeyForCoin(coin);
    final String amount = '2868256';
    /// 自定义签名
    customSign(coin, addressBtc, toAddress, amount, changeAddress, secretPrivateKeyBtc);
    /// 底层库签名
    sign(coin, addressBtc, toAddress, amount, changeAddress, secretPrivateKeyBtc);
  }

  /// 自定义签名，支持MPC签名
  void customSign(int coin, String addressBtc, String toAddress, String amount, String changeAddress, PrivateKey secretPrivateKeyBtc){
    BitcoinScript script = BitcoinScript.lockScriptForAddress(addressBtc, coin);
    final signingInput = Bitcoin.SigningInput(
      amount: $fixnum.Int64.parseInt(amount),
      hashType: BitcoinScript.hashTypeForCoin(coin),
      toAddress: toAddress,
      changeAddress: changeAddress,
      byteFee: $fixnum.Int64.parseInt('10'),
      coinType: coin,
      utxo: creatUtxos(script)
    );

    final transactionPlan = Bitcoin.TransactionPlan.fromBuffer(
        AnySigner.signerPlan(signingInput.writeToBuffer(), coin).toList());
    logger.d(
        'availableAmount: ${transactionPlan.availableAmount} amount: ${transactionPlan.amount} fee: ${transactionPlan.fee} change: ${transactionPlan.change}');
    print(
        'availableAmount: ${transactionPlan.availableAmount} amount: ${transactionPlan.amount} fee: ${transactionPlan.fee} change: ${transactionPlan.change}');
    signingInput.plan = transactionPlan;
    signingInput.amount = transactionPlan.amount;

    // double fee = transactionPlan.fee.toInt() / 100000000;
    // print(fee);

    Uint8List txInput = signingInput.writeToBuffer();
    Uint8List outputHash = TWTransactionCompilerImpl.preImageHashes(coin, txInput);
    final signingOutputHash = Bitcoin.PreSigningOutput.fromBuffer(outputHash);

    /// 自定义签名，这里的secretPrivateKeyBtc.signAsDER 换成MPC签名
    Uint8List signKey0 = secretPrivateKeyBtc.signAsDER(Uint8List.fromList(signingOutputHash.hashPublicKeys[0].dataHash));
    Uint8List signKey1 = secretPrivateKeyBtc.signAsDER(Uint8List.fromList(signingOutputHash.hashPublicKeys[1].dataHash));
    /// end 自定义签名

    PublicKey publicKey = secretPrivateKeyBtc.getPublicKey(coin);
    Uint8List trans = TWTransactionCompilerImpl.compileWithSignatures(coin, txInput, [signKey0, signKey1], [publicKey.data(), publicKey.data()]);

    final signingOutputPre = Bitcoin.SigningOutput.fromBuffer(trans);
    print("MPC: ${hex.encode(signingOutputPre.encoded)}");
    logger.d(hex.encode(signingOutputPre.encoded));
  }

  /// 底层库私钥签名
  void sign(int coin, String addressBtc, String toAddress, String amount, String changeAddress, PrivateKey secretPrivateKeyBtc){
    BitcoinScript script = BitcoinScript.lockScriptForAddress(addressBtc, coin);
    final signingInput = Bitcoin.SigningInput(
      amount: $fixnum.Int64.parseInt(amount),
      hashType: BitcoinScript.hashTypeForCoin(coin),
      toAddress: toAddress,
      changeAddress: changeAddress,
      byteFee: $fixnum.Int64.parseInt('10'),
      coinType: coin,
      utxo: creatUtxos(script),
      privateKey: [
        secretPrivateKeyBtc.data().toList(),
      ],
    );

    final transactionPlan = Bitcoin.TransactionPlan.fromBuffer(
        AnySigner.signerPlan(signingInput.writeToBuffer(), coin).toList());
    logger.d(
        'availableAmount: ${transactionPlan.availableAmount} amount: ${transactionPlan.amount} fee: ${transactionPlan.fee} change: ${transactionPlan.change}');
    print(
        'availableAmount: ${transactionPlan.availableAmount} amount: ${transactionPlan.amount} fee: ${transactionPlan.fee} change: ${transactionPlan.change}');
    signingInput.plan = transactionPlan;
    signingInput.amount = transactionPlan.amount;

    /// 单签
    Uint8List txInput = signingInput.writeToBuffer();
    final sign = AnySigner.sign(txInput, coin);
    final signingOutput = Bitcoin.SigningOutput.fromBuffer(sign);
    print("Private: ${hex.encode(signingOutput.encoded)}");
    logger.d(hex.encode(signingOutput.encoded));
  }

  List<Bitcoin.UnspentTransaction> creatUtxos(BitcoinScript script) {
    return [
      Bitcoin.UnspentTransaction(
        amount: $fixnum.Int64.parseInt('1868256'),
        outPoint: Bitcoin.OutPoint(
          hash: hex
              .decode(
              'a35d7c65ce94fe66f50a2e4882c7a8f09179956675fd37fecd07315f2c8097a0')
              .reversed
              .toList(),
          index: 0,
          //sequence: 4294967295,
        ),
        script: script.data()
            .toList(),
      ),
      Bitcoin.UnspentTransaction(
        amount: $fixnum.Int64.parseInt('1559792'),
        outPoint: Bitcoin.OutPoint(
          hash: hex
              .decode(
              'f267993be8f88b031f41bf726b0dd414acd0727abc620ed688886e902073cffc')
              .reversed
              .toList(),
          index: 1,
          //sequence: 4294967295,
        ),
        script: script.data()
            .toList(),
      ),
      Bitcoin.UnspentTransaction(
        amount: $fixnum.Int64.parseInt('1596091'),
        outPoint: Bitcoin.OutPoint(
          hash: hex
              .decode(
              'dc85cd4e0519cbcd136a19c277b3cd3364b6bd389e25d58a150956a570ad7627')
              .reversed
              .toList(),
          index: 1,
          //sequence: 4294967295,
        ),
        script: script.data()
            .toList(),
      ),
    ];
  }
}
