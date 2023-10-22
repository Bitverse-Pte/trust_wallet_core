part of trust_wallet_core_ffi;

class TWTransactionCompilerImpl extends TWTransactionCompiler{

  /// Builds a coin-specific SigningInput (proto object) from a simple transaction.
  ///
  /// \param coin coin type.
  /// \param from sender of the transaction.
  /// \param to receiver of the transaction.
  /// \param amount transaction amount in string
  /// \param asset optional asset name, like "BNB"
  /// \param memo optional memo
  /// \param chainId optional chainId to override default
  /// \return serialized data of the SigningInput proto object.
  static Uint8List buildInput(int coinType,
      Pointer<Utf8> from,
      Pointer<Utf8> to,
      Pointer<Utf8> amount,
      Pointer<Utf8> asset,
      Pointer<Utf8> memo,
      Pointer<Utf8> chainId) {
    final _out = TWTransactionCompiler.TWTransactionCompilerBuildInput(coinType, from, to, amount, asset, memo, chainId);
    Uint8List dataOut = TWData.TWDataBytes(_out).asTypedList(TWData.TWDataSize(_out));
    TWData.TWDataDelete(_out);
    return dataOut;
  }

  /// Obtains pre-signing hashes of a transaction.
  ///
  /// We provide a default `PreSigningOutput` in TransactionCompiler.proto.
  /// For some special coins, such as bitcoin, we will create a custom `PreSigningOutput` object in its proto file.
  /// \param coin coin type.
  /// \param txInputData The serialized data of a signing input
  /// \return serialized data of a proto object `PreSigningOutput` includes hash.
  static Uint8List preImageHashes(int coinType, Uint8List txInput) {
    final _data = TWData.TWDataCreateWithBytes(txInput.toPointerUint8(), txInput.length);
    final _out = TWTransactionCompiler.TWTransactionCompilerPreImageHashes(coinType, _data);
    Uint8List dataOut = TWData.TWDataBytes(_out).asTypedList(TWData.TWDataSize(_out));
    TWData.TWDataDelete(_data);
    return dataOut;
  }

  /// Compiles a complete transation with one or more external signatures.
  ///
  /// Puts together from transaction input and provided public keys and signatures. The signatures must match the hashes
  /// returned by TWTransactionCompilerPreImageHashes, in the same order. The publicKeyHash attached
  /// to the hashes enable identifying the private key needed for signing the hash.
  /// \param coin coin type.
  /// \param txInputData The serialized data of a signing input.
  /// \param signatures signatures to compile, using TWDataVector.
  /// \param publicKeys public keys for signers to match private keys, using TWDataVector.
  /// \return serialized data of a proto object `SigningOutput`.
  static Uint8List compileWithSignatures(int coinType,
      Uint8List txInputData,
      List<Uint8List> signatures,
      List<Uint8List> publicKeys) {
    final inputData = TWData.TWDataCreateWithBytes(txInputData.toPointerUint8(), txInputData.length);

    Pointer<Void> signaturesDataVector = TWDataVector.TWDataVectorCreate();
    for(Uint8List sig in signatures){
      TWDataVector.TWDataVectorAdd(signaturesDataVector, TWData.TWDataCreateWithBytes(sig.toPointerUint8(), sig.length));
    }

    Pointer<Void> publicKeysDataVector = TWDataVector.TWDataVectorCreate();
    for(Uint8List key in publicKeys){
      TWDataVector.TWDataVectorAdd(publicKeysDataVector, TWData.TWDataCreateWithBytes(key.toPointerUint8(), key.length));
    }

    final _out = TWTransactionCompiler.TWTransactionCompilerCompileWithSignatures(coinType, inputData, signaturesDataVector, publicKeysDataVector);
    Uint8List dataOut = TWData.TWDataBytes(_out).asTypedList(TWData.TWDataSize(_out));

    TWDataVector.TWDataVectorDelete(signaturesDataVector);
    TWDataVector.TWDataVectorDelete(publicKeysDataVector);
    TWData.TWDataDelete(inputData);
    return dataOut;
  }


  /// Compiles a complete transation with one or more external signatures.
  ///
  /// Puts together from transaction input and provided public keys and signatures. The signatures must match the hashes
  /// returned by TWTransactionCompilerPreImageHashes, in the same order. The publicKeyHash attached
  /// to the hashes enable identifying the private key needed for signing the hash.
  /// \param coin coin type.
  /// \param txInputData The serialized data of a signing input.
  /// \param signatures signatures to compile, using TWDataVector.
  /// \param publicKeys public keys for signers to match private keys, using TWDataVector.
  /// \param pubkeyType pubkeyType of the given private key
  /// \return serialized data of a proto object `SigningOutput`.
  static Uint8List compileWithSignaturesAndPubKeyType(int coinType,
      Pointer<Void> txInputData,
      Pointer<Void> signatures,
      Pointer<Void> publicKeys,
      int pubKeyType) {

    final _out = TWTransactionCompiler.TWTransactionCompilerCompileWithSignaturesAndPubKeyType(coinType, txInputData, signatures, publicKeys, pubKeyType);

    return TWData.TWDataBytes(_out).asTypedList(TWData.TWDataSize(_out));
  }


}