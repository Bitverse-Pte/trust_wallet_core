import 'package:convert/convert.dart';
import 'package:flutter/material.dart';
import 'package:flutter_trust_wallet_core/flutter_trust_wallet_core.dart';
import 'package:flutter_trust_wallet_core/trust_wallet_core_ffi.dart';
import 'package:flutter_trust_wallet_core_example/base_example.dart';
import 'package:flutter_trust_wallet_core/protobuf/bitcoin.pb.dart' as Bitcoin;
import 'package:fixnum/fixnum.dart' as $fixnum;

class BitcoinTransactionExample extends BaseExample {
  final HDWallet wallet;

  const BitcoinTransactionExample(this.wallet, {Key? key}) : super('Bitcoin Transaction', key: key);

  @override
  _BitcoinTransactionExampleState createState() => _BitcoinTransactionExampleState();
}

class _BitcoinTransactionExampleState extends BaseExampleState<BitcoinTransactionExample> {
  @override
  void initState() {
    super.initState();
    int coin = TWCoinType.TWCoinTypeBitcoinTestnet;
    final addressBtc = widget.wallet.getAddressForCoin(coin);
    final toAddress = "tb1qpe908rcwfwgvaw4taey8gm5jefwzw5kvqhulah";
    final changeAddress = "tb1qghgse35j7d3hmu5j9eplhhdw9ts90747s50mfx";
    final secretPrivateKeyBtc = widget.wallet.getKeyForCoin(coin);
    final signingInput = Bitcoin.SigningInput(
      amount: $fixnum.Int64.parseInt('37000'),
      hashType: BitcoinScript.hashTypeForCoin(coin),
      toAddress: toAddress,
      changeAddress: changeAddress,
      byteFee: $fixnum.Int64.parseInt('10'),
      coinType: coin,
      utxo: [
        Bitcoin.UnspentTransaction(
          amount: $fixnum.Int64.parseInt('1625420'),
          outPoint: Bitcoin.OutPoint(
            hash: hex.decode('0000000000002962091d1fed512cd5d51ae4b10e8261cdfa2abf004ce94fe9f1').reversed.toList(),
            index: 0,
            sequence: 4294967295,
          ),
          script: BitcoinScript.lockScriptForAddress(addressBtc, coin).data().toList(),
        ),
        Bitcoin.UnspentTransaction(
          amount: $fixnum.Int64.parseInt('1192500'),
          outPoint: Bitcoin.OutPoint(
            hash: hex.decode('00000000000000798d0d5f4a96d6074b9b9550782c24cc4c2c25d37da2558908').reversed.toList(),
            index: 0,
            sequence: 4294967295,
          ),
          script: BitcoinScript.lockScriptForAddress(addressBtc, coin).data().toList(),
        ),
      ],
      privateKey: [
        secretPrivateKeyBtc.data().toList(),
      ],
    );
    final transactionPlan = Bitcoin.TransactionPlan.fromBuffer(AnySigner.signerPlan(signingInput.writeToBuffer(), coin).toList());
    logger.d('availableAmount: ${transactionPlan.availableAmount} amount: ${transactionPlan.amount} fee: ${transactionPlan.fee} change: ${transactionPlan.change}');
    print('availableAmount: ${transactionPlan.availableAmount} amount: ${transactionPlan.amount} fee: ${transactionPlan.fee} change: ${transactionPlan.change}');
    signingInput.plan = transactionPlan;
    signingInput.amount = transactionPlan.amount;
    final sign = AnySigner.sign(signingInput.writeToBuffer(), coin);
    final signingOutput = Bitcoin.SigningOutput.fromBuffer(sign);
    print(hex.encode(signingOutput.encoded));
    logger.d(hex.encode(signingOutput.encoded));
  }
}