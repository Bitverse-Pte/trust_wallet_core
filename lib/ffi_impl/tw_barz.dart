part of trust_wallet_core_ffi;

abstract class TWBarz {

  /// Calculate a counterfactual address for the smart contract wallet
  ///
  /// \param input The serialized data of ContractAddressInput.
  /// \return The address.
  static Pointer<Utf8> TWBarzGetCounterfactualAddress(
      Pointer<Void> input,
      ) {
    return _TWBarzGetCounterfactualAddress(
      input,
    );
  }

  static late final _TWBarzGetCounterfactualAddressPtr = _lookup<
      NativeFunction<
          Pointer<Utf8> Function(
              Pointer<Void>)>>('TWBarzGetCounterfactualAddress');
  static late final _TWBarzGetCounterfactualAddress =
  _TWBarzGetCounterfactualAddressPtr.asFunction<
      Pointer<Utf8> Function(Pointer<Void>)>();

  /// Returns the init code parameter of ERC-4337 User Operation
  ///
  /// \param factory Wallet factory address (BarzFactory)
  /// \param publicKey Public key for the verification facet
  /// \param verificationFacet Verification facet address
  /// \return The address.
  static Pointer<Void> TWBarzGetInitCode(
      Pointer<Utf8> factory1,
      Pointer<Void> publicKey,
      Pointer<Utf8> verificationFacet,
      int salt,
      ) {
    return _TWBarzGetInitCode(
      factory1,
      publicKey,
      verificationFacet,
      salt,
    );
  }

  static late final _TWBarzGetInitCodePtr = _lookup<
      NativeFunction<
          Pointer<Void> Function(
              Pointer<Utf8>,
              Pointer<Void>,
              Pointer<Utf8>,
              Uint32)>>('TWBarzGetInitCode');
  static late final _TWBarzGetInitCode = _TWBarzGetInitCodePtr.asFunction<
      Pointer<Void> Function(Pointer<Utf8>,
          Pointer<Void>, Pointer<Utf8>, int)>();

  /// Converts the original ASN-encoded signature from webauthn to the format accepted by Barz
  ///
  /// \param signature Original signature
  /// \param challenge The original challenge that was signed
  /// \param authenticatorData Returned from Webauthn API
  /// \param clientDataJSON Returned from Webauthn API
  /// \return Bytes of the formatted signature
  static Pointer<Void> TWBarzGetFormattedSignature(
      Pointer<Void> signature,
      Pointer<Void> challenge,
      Pointer<Void> authenticatorData,
      Pointer<Utf8> clientDataJSON,
      ) {
    return _TWBarzGetFormattedSignature(
      signature,
      challenge,
      authenticatorData,
      clientDataJSON,
    );
  }

  static late final _TWBarzGetFormattedSignaturePtr = _lookup<
      NativeFunction<
          Pointer<Void> Function(
              Pointer<Void>,
              Pointer<Void>,
              Pointer<Void>,
              Pointer<Utf8>)>>('TWBarzGetFormattedSignature');
  static late final _TWBarzGetFormattedSignature =
  _TWBarzGetFormattedSignaturePtr.asFunction<
      Pointer<Void> Function(Pointer<Void>, Pointer<Void>,
          Pointer<Void>, Pointer<Utf8>)>();
}