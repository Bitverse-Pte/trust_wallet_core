import 'dart:typed_data';

import 'package:convert/convert.dart';
import 'package:flutter/material.dart';
import 'package:flutter_trust_wallet_core/flutter_trust_wallet_core.dart';
import 'package:flutter_trust_wallet_core/trust_wallet_core_ffi.dart';
import 'package:flutter_trust_wallet_core_example/WIF.dart';
import 'package:flutter_trust_wallet_core_example/base_example.dart';

class TonAddressExample extends BaseExample {
  final HDWallet wallet;

  const TonAddressExample(this.wallet, {Key? key}) : super('TON Address', key: key);

  @override
  _TonAddressExampleState createState() => _TonAddressExampleState();
}

class _TonAddressExampleState extends BaseExampleState<TonAddressExample> {
  @override
  void initState() {
    super.initState();
    int coin = TWCoinType.TWCoinTypeTON;
    logger.d("mnemonic = ${widget.wallet.mnemonic()}");

    logger.d("address ${widget.wallet.getAddressForCoin(coin)}");

    print(widget.wallet.mnemonic());
    String privateKeyHex = hex.encode(widget.wallet.getKeyForCoin(coin).data());
    print(privateKeyHex);



    // logger.d(widget.wallet.getExtendedPublicKey(TWPurpose.TWPurposeBIP44, coin, TWHDVersion.TWHDVersionXPUB));
    // final bitcoinAddress = BitcoinAddress.createWithPublicKey(publicKey2, 0);
    // logger.d(bitcoinAddress.description());
    //
    // final segwitAddress = SegwitAddress.createWithPublicKey(TWCoinType.TWCoinTypeHRP(TWCoinType.TWCoinTypeBitcoin), publicKey2);
    // logger.d(segwitAddress.description());
    //
    // final privatekeytestnet = widget.wallet.getKey(coin, "m/84'/1'/0'/0/0");
    // final publicKeyTestnet = privatekeytestnet.getPublicKeySecp256k1(true);
    // final segwitAddressTestnet = SegwitAddress.createWithPublicKey(TWCoinType.TWCoinTypeHRP(TWCoinType.TWCoinTypeBitcoinTestnet), publicKeyTestnet);
    //
    // logger.d('testnet: '+segwitAddressTestnet.description());
    // final address2 = AnyAddress.createWithPublicKey(publicKey2, 0);
    //
    // final pubKeyHash = Hash.hashSHA256RIPEMD(publicKey2.data());
    // final bitcoinScript = BitcoinScript.buildPayToWitnessPubkeyHash(pubKeyHash);
    //
    // final scriptHash = Hash.hashSHA256RIPEMD(bitcoinScript.data());
    // final data = Uint8List.fromList([5]..addAll(scriptHash.toList()));
    // final bitcoinAddress2 = BitcoinAddress.createWithData(data);
    // logger.d(bitcoinAddress2.description());
    //
    // final bip84Privakey = widget.wallet.getKeyForCoin(TWCoinType.TWCoinTypeBitcoin);
    // final publicKeyBip84 = bip84Privakey.getPublicKeySecp256k1(true);
    // final segwitAddressBip84 = SegwitAddress.createWithPublicKey(HRP.Bitcoin, publicKeyBip84);
    // logger.d(segwitAddressBip84.description());
    //
    // final wif = WIF.encode(hex.encode(bip84Privakey.data()), TWCoinType.TWCoinTypeBitcoin);
    // logger.d("bip84 origin privakey = ${hex.encode(bip84Privakey.data())}");
    // logger.d("bip84 wif privakey = $wif");
    //
    //
    // final keystore = StoredKey.importHDWallet(widget.wallet.mnemonic(), "wtf", "123", TWCoinType.TWCoinTypeBitcoin);
    // logger.d("keystore json = ${keystore?.exportJson()}");
  }
}