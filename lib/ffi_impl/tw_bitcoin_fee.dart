part of trust_wallet_core_ffi;

abstract class TWBitcoinFee {
  /// Calculates the fee of any Bitcoin transaction.
  ///
  /// \param data: the signed transaction in its final form.
  /// \param satVb: the satoshis per vbyte amount. The passed on string is interpreted as a unit64_t.
  /// \returns the fee denominated in satoshis or nullptr if the transaction failed to be decoded.
  Pointer<Utf8> TWBitcoinFeeCalculateFee(
      Pointer<Void> data,
      Pointer<Utf8> satVb,
      ) {
    return _TWBitcoinFeeCalculateFee(
      data,
      satVb,
    );
  }

  late final _TWBitcoinFeeCalculateFeePtr = _lookup<
      NativeFunction<
          Pointer<Utf8> Function(Pointer<Void>,
              Pointer<Utf8>)>>('TWBitcoinFeeCalculateFee');
  late final _TWBitcoinFeeCalculateFee =
  _TWBitcoinFeeCalculateFeePtr.asFunction<
      Pointer<Utf8> Function(
          Pointer<Void>, Pointer<Utf8>)>();
}