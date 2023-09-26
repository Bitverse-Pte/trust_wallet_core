part of trust_wallet_core_ffi;

abstract class TWAsnParser {
  /// Parses the given ECDSA signature from ASN.1 DER encoded bytes.
  ///
  /// \param encoded The ASN.1 DER encoded signature.
  /// \return The ECDSA signature standard binary representation: RS, where R - 32 byte array, S - 32 byte array.
  static Pointer<Void> TWAsnParserEcdsaSignatureFromDer(
      Pointer<Void> encoded,
      ) {
    return _TWAsnParserEcdsaSignatureFromDer(
      encoded,
    );
  }

  static late final _TWAsnParserEcdsaSignatureFromDerPtr = _lookup<
      NativeFunction<
          Pointer<Void> Function(
              Pointer<Void>)>>('TWAsnParserEcdsaSignatureFromDer');
  static late final _TWAsnParserEcdsaSignatureFromDer =
  _TWAsnParserEcdsaSignatureFromDerPtr.asFunction<
      Pointer<Void> Function(Pointer<Void>)>();
}