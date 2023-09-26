part of trust_wallet_core_ffi;

abstract class TWWebAuthn {
  /// Converts attestation object to the public key on P256 curve
  ///
  /// \param attestationObject Attestation object retrieved from webuthn.get method
  /// \return Public key.
  static Pointer<Void> TWWebAuthnGetPublicKey(
      Pointer<Void> attestationObject,
      ) {
    return _TWWebAuthnGetPublicKey(
      attestationObject,
    );
  }

  static late final _TWWebAuthnGetPublicKeyPtr = _lookup<
      NativeFunction<
          Pointer<Void> Function(
              Pointer<Void>)>>('TWWebAuthnGetPublicKey');
  static late final _TWWebAuthnGetPublicKey = _TWWebAuthnGetPublicKeyPtr.asFunction<
      Pointer<Void> Function(Pointer<Void>)>();

  /// Uses ASN parser to extract r and s values from a webauthn signature
  ///
  /// \param signature ASN encoded webauthn signature: https://www.w3.org/TR/webauthn-2/#sctn-signature-attestation-types
  /// \return Concatenated r and s values.
  static Pointer<Void> TWWebAuthnGetRSValues(
      Pointer<Void> signature,
      ) {
    return _TWWebAuthnGetRSValues(
      signature,
    );
  }

  static late final _TWWebAuthnGetRSValuesPtr = _lookup<
      NativeFunction<
          Pointer<Void> Function(
              Pointer<Void>)>>('TWWebAuthnGetRSValues');
  static late final _TWWebAuthnGetRSValues = _TWWebAuthnGetRSValuesPtr.asFunction<
      Pointer<Void> Function(Pointer<Void>)>();

  /// Reconstructs the original message that was signed via P256 curve. Can be used for signature validation.
  ///
  /// \param authenticatorData Authenticator Data: https://www.w3.org/TR/webauthn-2/#authenticator-data
  /// \param clientDataJSON clientDataJSON: https://www.w3.org/TR/webauthn-2/#dom-authenticatorresponse-clientdatajson
  /// \return original messages.
  static Pointer<Void> TWWebAuthnReconstructOriginalMessage(
      Pointer<Void> authenticatorData,
      Pointer<Void> clientDataJSON,
      ) {
    return _TWWebAuthnReconstructOriginalMessage(
      authenticatorData,
      clientDataJSON,
    );
  }

  static late final _TWWebAuthnReconstructOriginalMessagePtr = _lookup<
      NativeFunction<
          Pointer<Void> Function(Pointer<Void>,
              Pointer<Void>)>>('TWWebAuthnReconstructOriginalMessage');
  static late final _TWWebAuthnReconstructOriginalMessage =
  _TWWebAuthnReconstructOriginalMessagePtr.asFunction<
      Pointer<Void> Function(
          Pointer<Void>, Pointer<Void>)>();
}