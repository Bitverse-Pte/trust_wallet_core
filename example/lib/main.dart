import 'package:flutter/material.dart';
import 'package:flutter_trust_wallet_core/flutter_trust_wallet_core.dart';
import 'package:flutter_trust_wallet_core_example/avax_fuji_testnet_example.dart';
import 'package:flutter_trust_wallet_core_example/bitcoin_address_example.dart';
import 'package:flutter_trust_wallet_core_example/bitcoin_transaction_example.dart';
import 'package:flutter_trust_wallet_core_example/cosmos_example.dart';
import 'package:flutter_trust_wallet_core_example/ethereum_example.dart';
import 'package:flutter_trust_wallet_core_example/mantle_sepolia_testnet_example.dart';
import 'package:flutter_trust_wallet_core_example/private_key_is_valid_example.dart';
import 'package:flutter_trust_wallet_core_example/sepolia_testnet_example.dart';
import 'package:flutter_trust_wallet_core_example/tron_example.dart';
import 'package:flutter_trust_wallet_core_example/yymm_devnet_example.dart';
import 'package:flutter_trust_wallet_core_example/yymm_mainnet_example.dart';
import 'package:flutter_trust_wallet_core_example/yymm_testnet_example.dart';

List<String> logs = [];

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Example(),
    );
  }
}

class Example extends StatefulWidget {
  @override
  _ExampleState createState() => _ExampleState();
}

class _ExampleState extends State<Example> {
  late HDWallet wallet;
  //String mnemonic = "rent craft script crucial item someone dream federal notice page shrug pipe young hover duty"; // 有测试币的 tron地址
  String mnemonic = "across father winter fox pony erosion dinner venture search brown destroy good";
  //String mnemonic = "lens merge apology vast reunion someone dutch pond entire gather swear time";

  @override
  void initState() {
    FlutterTrustWalletCore.init();
    super.initState();
    wallet = HDWallet.createWithMnemonic(mnemonic);
  }

  Widget _exampleItem({
    required String name,
    required WidgetBuilder builder,
  }) {
    return ElevatedButton(
      onPressed: () {
        Navigator.of(context).push(MaterialPageRoute(builder: builder));
      },
      child: Text(name),
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('wallet core example app'),
      ),
      body: SafeArea(
        child: Column(
          children: [
            Text(wallet.mnemonic()),
            Expanded(
              child: ListView(
                padding: EdgeInsets.zero,
                children: [
                  _exampleItem(
                    name: 'Ethereum',
                    builder: (_) {
                      return EthereumExample(wallet);
                    },
                  ),
                  _exampleItem(
                    name: 'Bitcoin Address',
                    builder: (_) {
                      return BitcoinAddressExample(wallet);
                    },
                  ),
                  _exampleItem(
                    name: 'Bitcoin Transaction',
                    builder: (_) {
                      return BitcoinTransactionExample(wallet);
                    },
                  ),
                  _exampleItem(
                    name: 'Cosmos',
                    builder: (_) {
                      return CosmosExample(wallet);
                    },
                  ),
                  _exampleItem(
                    name: 'YymmTestnet',
                    builder: (_) {
                      return YymmTestnetExample(wallet);
                    },
                  ),
                  _exampleItem(
                    name: 'Yymm',
                    builder: (_) {
                      return YymmMainnetExample(wallet);
                    },
                  ),
                  _exampleItem(
                    name: 'YymmDevnet',
                    builder: (_) {
                      return YymmDevnetExample(wallet);
                    },
                  ),
                  _exampleItem(
                    name: 'AvaxFujiTestnet',
                    builder: (_) {
                      return AvaxFujiTestnetExample(wallet);
                    },
                  ),
                  _exampleItem(
                    name: 'MantleSepoliaTestnet',
                    builder: (_) {
                      return MantleSepoliaTestnetExample(wallet);
                    },
                  ),
                  _exampleItem(
                    name: 'SepoliaTestnet',
                    builder: (_) {
                      return SepoliaTestnetExample(wallet);
                    },
                  ),
                  _exampleItem(
                    name: 'Tron',
                    builder: (_) {
                      return TronExample(wallet);
                    },
                  ),
                  _exampleItem(
                    name: 'PrivateKey.isValid(a,b)',
                    builder: (_) {
                      return PrivateKeyIsValidExample(wallet);
                    },
                  ),
                ],
              ),
            ),
            ElevatedButton(
              onPressed: () async {
                wallet.delete();
                //wallet = HDWallet();
                wallet = HDWallet.createWithMnemonic(mnemonic);
                setState(() {});
              },
              child: Text("gen"),
            ),
          ],
        ),
      ),
    );
  }
}
