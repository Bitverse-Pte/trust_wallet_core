part of flutter_trust_wallet_core;

class CoinType extends TWCoinType {

  static String deriveAddress(int coin, PrivateKey privateKey){
    Pointer<Utf8> addr = TWCoinType.TWCoinTypeDeriveAddress(coin, privateKey._nativehandle);
    return TWString.TWStringUTF8Bytes(addr).toDartString();
  }

  static String deriveAddressFromPublicKey(int coin, PublicKey publicKey){
    Pointer<Utf8> addr = TWCoinType.TWCoinTypeDeriveAddressFromPublicKey(coin, publicKey._nativehandle);
    return TWString.TWStringUTF8Bytes(addr).toDartString();
  }
}