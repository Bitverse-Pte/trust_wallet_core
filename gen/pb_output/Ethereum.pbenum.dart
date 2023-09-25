//
//  Generated code. Do not modify.
//  source: Ethereum.proto
//
// @dart = 2.12

// ignore_for_file: annotate_overrides, camel_case_types, comment_references
// ignore_for_file: constant_identifier_names, library_prefixes
// ignore_for_file: non_constant_identifier_names, prefer_final_fields
// ignore_for_file: unnecessary_import, unnecessary_this, unused_import

import 'dart:core' as $core;

import 'package:protobuf/protobuf.dart' as $pb;

/// Transaction type
class TransactionMode extends $pb.ProtobufEnum {
  static const TransactionMode Legacy = TransactionMode._(0, _omitEnumNames ? '' : 'Legacy');
  static const TransactionMode Enveloped = TransactionMode._(1, _omitEnumNames ? '' : 'Enveloped');
  static const TransactionMode UserOp = TransactionMode._(2, _omitEnumNames ? '' : 'UserOp');

  static const $core.List<TransactionMode> values = <TransactionMode> [
    Legacy,
    Enveloped,
    UserOp,
  ];

  static final $core.Map<$core.int, TransactionMode> _byValue = $pb.ProtobufEnum.initByValue(values);
  static TransactionMode? valueOf($core.int value) => _byValue[value];

  const TransactionMode._($core.int v, $core.String n) : super(v, n);
}


const _omitEnumNames = $core.bool.fromEnvironment('protobuf.omit_enum_names');
