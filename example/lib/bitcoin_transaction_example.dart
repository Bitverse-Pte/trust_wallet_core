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
    BitcoinScript script = BitcoinScript.lockScriptForAddress(addressBtc, coin);
    print("2: ${script.isPayToScriptHash()}");
    print("3: ${script.isPayToWitnessScriptHash()}");
    print("4: ${script.isWitnessProgram()}");
    final signingInput = Bitcoin.SigningInput(
      amount: $fixnum.Int64.parseInt('38000'),
      hashType: BitcoinScript.hashTypeForCoin(coin),
      toAddress: toAddress,
      changeAddress: changeAddress,
      byteFee: $fixnum.Int64.parseInt('10'),
      coinType: coin,
      utxo: [
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
      ],
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

    String planJson = transactionPlan.writeToJson();
    logger.d(planJson);
    List<Bitcoin.UnspentTransaction> newUtxos = transactionPlan.utxos;
    for(int i=0; i<newUtxos.length; i++){
      logger.d(newUtxos[i]);
    }

    final sign = AnySigner.sign(signingInput.writeToBuffer(), coin);
    final signingOutput = Bitcoin.SigningOutput.fromBuffer(sign);
    print(hex.encode(signingOutput.encoded));
    logger.d(hex.encode(signingOutput.encoded));
  }
}
