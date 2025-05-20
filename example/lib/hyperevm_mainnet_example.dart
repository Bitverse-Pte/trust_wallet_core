import 'dart:typed_data';

import 'package:convert/convert.dart';
import 'package:flutter/material.dart';
import 'package:flutter_trust_wallet_core/flutter_trust_wallet_core.dart';
import 'package:flutter_trust_wallet_core/trust_wallet_core_ffi.dart';
import 'package:flutter_trust_wallet_core_example/base_example.dart';

class HyperEvmMainnetExample extends BaseExample {
  final HDWallet wallet;

  const HyperEvmMainnetExample(this.wallet, {Key? key}) : super('HyperEVM', key: key);

  @override
  _HyperEvmMainnetExampleState createState() => _HyperEvmMainnetExampleState();
}

class _HyperEvmMainnetExampleState extends BaseExampleState<HyperEvmMainnetExample> {

  @override
  void initState() {
    super.initState();
    int coinId = TWCoinType.TWCoinTypeHyperEVM;

    /// 可以指定派生路径
    /// String derivationPath = "m/44'/60'/0'/0/0";
    /// final privateKey = widget.wallet.getKey(coinId, derivationPath);
    /// 也可以不指定派生路径，直接使用底层库默认的
    final privateKey = widget.wallet.getKeyForCoin(coinId);

    /// 通过私钥直接派生
    String address1 = CoinType.deriveAddress(coinId, privateKey);
    logger.d("1: $address1");

    /// 通过私钥生成公钥后再派生
    int pkType = TWCoinType.TWCoinTypePublicKeyType(coinId);
    PublicKey? publicKey = privateKey.getPublicKeyByType(pkType);
    String address2 = CoinType.deriveAddressFromPublicKey(coinId, publicKey);
    logger.d("2: $address2");

    /// 也可以通过coinId直接获取地址
    logger.d("address ${widget.wallet.getAddressForCoin(10000999)}");

    privateKey.delete();
    publicKey.delete();

    test();
  }

  void test(){
    logger.d("address ${widget.wallet.getAddressForCoin(10000999)}");
    logger.d("mnemonic = ${widget.wallet.mnemonic()}");
    print(widget.wallet.mnemonic());

    String privateKeyhex = hex.encode(widget.wallet.getKeyForCoin(10000999).data());
    // String privateKey0 = hex.encode(widget.wallet.getDerivedKey(60,0,0,0).data());
    // String privateKey1 = hex.encode(widget.wallet.getDerivedKey(60,0,0,1).data());
    logger.d("privateKeyhex = $privateKeyhex");
    // logger.d("privateKeyhex0 = $privateKey0");
    // logger.d("privateKeyhex1 = $privateKey1");
    logger.d("seed = ${hex.encode(widget.wallet.seed())}");
    final a = StoredKey.importPrivateKey(widget.wallet.getKeyForCoin(10000999).data(), "", "123", 10000999);
    logger.d("keystore a = ${a?.exportJson()}");

    final publicKey = widget.wallet.getKeyForCoin(10000999).getPublicKeySecp256k1(false);
    final anyAddress = AnyAddress.createWithPublicKey(publicKey, 10000999);

    // logger.d("1 = ${AnyAddress.isValid("0xfaC5482fffe86d33c3b8ADB24F839F5e60aF99d4", DartTWCoinType.TWCoinTypeEthereum)}");
    // logger.d("2 = ${AnyAddress.isValid("0xfaC5482fffe86d33c3b8ADB24F839F5e60af99d4", DartTWCoinType.TWCoinTypeEthereum)}");
    // logger.d("3 = ${AnyAddress.isValid("faC5482fffe86d33c3b8ADB24F839F5e60af99d4", DartTWCoinType.TWCoinTypeEthereum)}");
    final privatekey = widget.wallet.getKey(10000999, "m/40'/60'/0'/0/0");
    final publicKey1 = privatekey.getPublicKeySecp256k1(true);
    final address = AnyAddress.createWithPublicKey(publicKey1, 0);

    logger.d("keystore a = ${address.description()}");
  }
}