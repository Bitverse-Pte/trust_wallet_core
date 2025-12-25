import 'dart:typed_data';

import 'package:convert/convert.dart';
import 'package:flutter/material.dart';
import 'package:flutter_trust_wallet_core/flutter_trust_wallet_core.dart';
import 'package:flutter_trust_wallet_core/trust_wallet_core_ffi.dart';
import 'package:flutter_trust_wallet_core_example/base_example.dart';

class PharosExample extends BaseExample {
  final HDWallet wallet;

  const PharosExample(this.wallet, {Key? key}) : super('Pharos', key: key);

  @override
  _PharosExampleState createState() => _PharosExampleState();
}

class _PharosExampleState extends BaseExampleState<PharosExample> {

  @override
  void initState() {
    super.initState();
    int coinId = TWCoinType.TWCoinTypePharos;

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
    logger.d("address ${widget.wallet.getAddressForCoin(10001672)}");

    privateKey.delete();
    publicKey.delete();

    test();
  }

  void test(){
    logger.d("address ${widget.wallet.getAddressForCoin(10001672)}");
    logger.d("mnemonic = ${widget.wallet.mnemonic()}");
    print(widget.wallet.mnemonic());

    String privateKeyHex = hex.encode(widget.wallet.getKeyForCoin(10001672).data());
    logger.d("privateKeyHex = $privateKeyHex");
    logger.d("seed = ${hex.encode(widget.wallet.seed())}");
    final a = StoredKey.importPrivateKey(widget.wallet.getKeyForCoin(10001672).data(), "", "123", 10001672);
    logger.d("keystore a = ${a?.exportJson()}");

    final publicKey = widget.wallet.getKeyForCoin(10001672).getPublicKeySecp256k1(false);
    final anyAddress = AnyAddress.createWithPublicKey(publicKey, 10001672);

    final privateKey = widget.wallet.getKey(10001672, "m/40'/60'/0'/0/0");
    final publicKey1 = privateKey.getPublicKeySecp256k1(true);
    final address = AnyAddress.createWithPublicKey(publicKey1, 0);

    logger.d("keystore a = ${address.description()}");
  }
}