// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Aion.proto

#include "Aion.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace TW {
namespace Aion {
namespace Proto {
constexpr SigningInput::SigningInput(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : nonce_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , gas_price_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , gas_limit_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , to_address_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , amount_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , payload_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , private_key_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , timestamp_(uint64_t{0u}){}
struct SigningInputDefaultTypeInternal {
  constexpr SigningInputDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SigningInputDefaultTypeInternal() {}
  union {
    SigningInput _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SigningInputDefaultTypeInternal _SigningInput_default_instance_;
constexpr SigningOutput::SigningOutput(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : encoded_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , signature_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , error_message_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , error_(0)
{}
struct SigningOutputDefaultTypeInternal {
  constexpr SigningOutputDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SigningOutputDefaultTypeInternal() {}
  union {
    SigningOutput _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SigningOutputDefaultTypeInternal _SigningOutput_default_instance_;
}  // namespace Proto
}  // namespace Aion
}  // namespace TW
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Aion_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Aion_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Aion_2eproto = nullptr;

const uint32_t TableStruct_Aion_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningInput, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningInput, nonce_),
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningInput, gas_price_),
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningInput, gas_limit_),
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningInput, to_address_),
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningInput, amount_),
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningInput, payload_),
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningInput, private_key_),
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningInput, timestamp_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningOutput, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningOutput, encoded_),
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningOutput, signature_),
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningOutput, error_),
  PROTOBUF_FIELD_OFFSET(::TW::Aion::Proto::SigningOutput, error_message_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::TW::Aion::Proto::SigningInput)},
  { 14, -1, -1, sizeof(::TW::Aion::Proto::SigningOutput)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TW::Aion::Proto::_SigningInput_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TW::Aion::Proto::_SigningOutput_default_instance_),
};

const char descriptor_table_protodef_Aion_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nAion.proto\022\rTW.Aion.Proto\032\014Common.prot"
  "o\"\240\001\n\014SigningInput\022\r\n\005nonce\030\001 \001(\014\022\021\n\tgas"
  "_price\030\002 \001(\014\022\021\n\tgas_limit\030\003 \001(\014\022\022\n\nto_ad"
  "dress\030\004 \001(\t\022\016\n\006amount\030\005 \001(\014\022\017\n\007payload\030\006"
  " \001(\014\022\023\n\013private_key\030\007 \001(\014\022\021\n\ttimestamp\030\010"
  " \001(\004\"x\n\rSigningOutput\022\017\n\007encoded\030\001 \001(\014\022\021"
  "\n\tsignature\030\002 \001(\014\022,\n\005error\030\003 \001(\0162\035.TW.Co"
  "mmon.Proto.SigningError\022\025\n\rerror_message"
  "\030\004 \001(\tB\027\n\025wallet.core.jni.protob\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Aion_2eproto_deps[1] = {
  &::descriptor_table_Common_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Aion_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Aion_2eproto = {
  false, false, 359, descriptor_table_protodef_Aion_2eproto, "Aion.proto", 
  &descriptor_table_Aion_2eproto_once, descriptor_table_Aion_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_Aion_2eproto::offsets,
  file_level_metadata_Aion_2eproto, file_level_enum_descriptors_Aion_2eproto, file_level_service_descriptors_Aion_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_Aion_2eproto_getter() {
  return &descriptor_table_Aion_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_Aion_2eproto(&descriptor_table_Aion_2eproto);
namespace TW {
namespace Aion {
namespace Proto {

// ===================================================================

class SigningInput::_Internal {
 public:
};

SigningInput::SigningInput(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:TW.Aion.Proto.SigningInput)
}
SigningInput::SigningInput(const SigningInput& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  nonce_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    nonce_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_nonce().empty()) {
    nonce_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_nonce(), 
      GetArenaForAllocation());
  }
  gas_price_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    gas_price_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_gas_price().empty()) {
    gas_price_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_gas_price(), 
      GetArenaForAllocation());
  }
  gas_limit_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    gas_limit_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_gas_limit().empty()) {
    gas_limit_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_gas_limit(), 
      GetArenaForAllocation());
  }
  to_address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    to_address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_to_address().empty()) {
    to_address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_to_address(), 
      GetArenaForAllocation());
  }
  amount_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    amount_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_amount().empty()) {
    amount_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_amount(), 
      GetArenaForAllocation());
  }
  payload_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_payload().empty()) {
    payload_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_payload(), 
      GetArenaForAllocation());
  }
  private_key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    private_key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_private_key().empty()) {
    private_key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_private_key(), 
      GetArenaForAllocation());
  }
  timestamp_ = from.timestamp_;
  // @@protoc_insertion_point(copy_constructor:TW.Aion.Proto.SigningInput)
}

inline void SigningInput::SharedCtor() {
nonce_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  nonce_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
gas_price_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  gas_price_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
gas_limit_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  gas_limit_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
to_address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  to_address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
amount_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  amount_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
payload_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
private_key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  private_key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
timestamp_ = uint64_t{0u};
}

SigningInput::~SigningInput() {
  // @@protoc_insertion_point(destructor:TW.Aion.Proto.SigningInput)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SigningInput::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  nonce_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  gas_price_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  gas_limit_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  to_address_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  amount_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  payload_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  private_key_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SigningInput::ArenaDtor(void* object) {
  SigningInput* _this = reinterpret_cast< SigningInput* >(object);
  (void)_this;
}
void SigningInput::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SigningInput::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SigningInput::Clear() {
// @@protoc_insertion_point(message_clear_start:TW.Aion.Proto.SigningInput)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  nonce_.ClearToEmpty();
  gas_price_.ClearToEmpty();
  gas_limit_.ClearToEmpty();
  to_address_.ClearToEmpty();
  amount_.ClearToEmpty();
  payload_.ClearToEmpty();
  private_key_.ClearToEmpty();
  timestamp_ = uint64_t{0u};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SigningInput::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes nonce = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_nonce();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes gas_price = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_gas_price();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes gas_limit = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_gas_limit();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string to_address = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_to_address();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TW.Aion.Proto.SigningInput.to_address"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes amount = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_amount();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes payload = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_payload();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes private_key = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_private_key();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 timestamp = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SigningInput::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TW.Aion.Proto.SigningInput)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes nonce = 1;
  if (!this->_internal_nonce().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_nonce(), target);
  }

  // bytes gas_price = 2;
  if (!this->_internal_gas_price().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_gas_price(), target);
  }

  // bytes gas_limit = 3;
  if (!this->_internal_gas_limit().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_gas_limit(), target);
  }

  // string to_address = 4;
  if (!this->_internal_to_address().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_to_address().data(), static_cast<int>(this->_internal_to_address().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TW.Aion.Proto.SigningInput.to_address");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_to_address(), target);
  }

  // bytes amount = 5;
  if (!this->_internal_amount().empty()) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_amount(), target);
  }

  // bytes payload = 6;
  if (!this->_internal_payload().empty()) {
    target = stream->WriteBytesMaybeAliased(
        6, this->_internal_payload(), target);
  }

  // bytes private_key = 7;
  if (!this->_internal_private_key().empty()) {
    target = stream->WriteBytesMaybeAliased(
        7, this->_internal_private_key(), target);
  }

  // uint64 timestamp = 8;
  if (this->_internal_timestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(8, this->_internal_timestamp(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TW.Aion.Proto.SigningInput)
  return target;
}

size_t SigningInput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TW.Aion.Proto.SigningInput)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes nonce = 1;
  if (!this->_internal_nonce().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_nonce());
  }

  // bytes gas_price = 2;
  if (!this->_internal_gas_price().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_gas_price());
  }

  // bytes gas_limit = 3;
  if (!this->_internal_gas_limit().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_gas_limit());
  }

  // string to_address = 4;
  if (!this->_internal_to_address().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_to_address());
  }

  // bytes amount = 5;
  if (!this->_internal_amount().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_amount());
  }

  // bytes payload = 6;
  if (!this->_internal_payload().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_payload());
  }

  // bytes private_key = 7;
  if (!this->_internal_private_key().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_private_key());
  }

  // uint64 timestamp = 8;
  if (this->_internal_timestamp() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64SizePlusOne(this->_internal_timestamp());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SigningInput::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SigningInput::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SigningInput::GetClassData() const { return &_class_data_; }

void SigningInput::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SigningInput *>(to)->MergeFrom(
      static_cast<const SigningInput &>(from));
}


void SigningInput::MergeFrom(const SigningInput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TW.Aion.Proto.SigningInput)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_nonce().empty()) {
    _internal_set_nonce(from._internal_nonce());
  }
  if (!from._internal_gas_price().empty()) {
    _internal_set_gas_price(from._internal_gas_price());
  }
  if (!from._internal_gas_limit().empty()) {
    _internal_set_gas_limit(from._internal_gas_limit());
  }
  if (!from._internal_to_address().empty()) {
    _internal_set_to_address(from._internal_to_address());
  }
  if (!from._internal_amount().empty()) {
    _internal_set_amount(from._internal_amount());
  }
  if (!from._internal_payload().empty()) {
    _internal_set_payload(from._internal_payload());
  }
  if (!from._internal_private_key().empty()) {
    _internal_set_private_key(from._internal_private_key());
  }
  if (from._internal_timestamp() != 0) {
    _internal_set_timestamp(from._internal_timestamp());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SigningInput::CopyFrom(const SigningInput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TW.Aion.Proto.SigningInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SigningInput::IsInitialized() const {
  return true;
}

void SigningInput::InternalSwap(SigningInput* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &nonce_, lhs_arena,
      &other->nonce_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &gas_price_, lhs_arena,
      &other->gas_price_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &gas_limit_, lhs_arena,
      &other->gas_limit_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &to_address_, lhs_arena,
      &other->to_address_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &amount_, lhs_arena,
      &other->amount_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &payload_, lhs_arena,
      &other->payload_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &private_key_, lhs_arena,
      &other->private_key_, rhs_arena
  );
  swap(timestamp_, other->timestamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SigningInput::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_Aion_2eproto_getter, &descriptor_table_Aion_2eproto_once,
      file_level_metadata_Aion_2eproto[0]);
}

// ===================================================================

class SigningOutput::_Internal {
 public:
};

SigningOutput::SigningOutput(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:TW.Aion.Proto.SigningOutput)
}
SigningOutput::SigningOutput(const SigningOutput& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  encoded_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    encoded_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_encoded().empty()) {
    encoded_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_encoded(), 
      GetArenaForAllocation());
  }
  signature_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    signature_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_signature().empty()) {
    signature_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_signature(), 
      GetArenaForAllocation());
  }
  error_message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    error_message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_error_message().empty()) {
    error_message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_error_message(), 
      GetArenaForAllocation());
  }
  error_ = from.error_;
  // @@protoc_insertion_point(copy_constructor:TW.Aion.Proto.SigningOutput)
}

inline void SigningOutput::SharedCtor() {
encoded_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  encoded_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
signature_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  signature_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
error_message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  error_message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
error_ = 0;
}

SigningOutput::~SigningOutput() {
  // @@protoc_insertion_point(destructor:TW.Aion.Proto.SigningOutput)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SigningOutput::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  encoded_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  signature_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  error_message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SigningOutput::ArenaDtor(void* object) {
  SigningOutput* _this = reinterpret_cast< SigningOutput* >(object);
  (void)_this;
}
void SigningOutput::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SigningOutput::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SigningOutput::Clear() {
// @@protoc_insertion_point(message_clear_start:TW.Aion.Proto.SigningOutput)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  encoded_.ClearToEmpty();
  signature_.ClearToEmpty();
  error_message_.ClearToEmpty();
  error_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SigningOutput::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes encoded = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_encoded();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes signature = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_signature();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .TW.Common.Proto.SigningError error = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_error(static_cast<::TW::Common::Proto::SigningError>(val));
        } else
          goto handle_unusual;
        continue;
      // string error_message = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_error_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TW.Aion.Proto.SigningOutput.error_message"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SigningOutput::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TW.Aion.Proto.SigningOutput)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes encoded = 1;
  if (!this->_internal_encoded().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_encoded(), target);
  }

  // bytes signature = 2;
  if (!this->_internal_signature().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_signature(), target);
  }

  // .TW.Common.Proto.SigningError error = 3;
  if (this->_internal_error() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_error(), target);
  }

  // string error_message = 4;
  if (!this->_internal_error_message().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_error_message().data(), static_cast<int>(this->_internal_error_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TW.Aion.Proto.SigningOutput.error_message");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_error_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TW.Aion.Proto.SigningOutput)
  return target;
}

size_t SigningOutput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TW.Aion.Proto.SigningOutput)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes encoded = 1;
  if (!this->_internal_encoded().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_encoded());
  }

  // bytes signature = 2;
  if (!this->_internal_signature().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_signature());
  }

  // string error_message = 4;
  if (!this->_internal_error_message().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_error_message());
  }

  // .TW.Common.Proto.SigningError error = 3;
  if (this->_internal_error() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_error());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SigningOutput::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SigningOutput::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SigningOutput::GetClassData() const { return &_class_data_; }

void SigningOutput::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SigningOutput *>(to)->MergeFrom(
      static_cast<const SigningOutput &>(from));
}


void SigningOutput::MergeFrom(const SigningOutput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TW.Aion.Proto.SigningOutput)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_encoded().empty()) {
    _internal_set_encoded(from._internal_encoded());
  }
  if (!from._internal_signature().empty()) {
    _internal_set_signature(from._internal_signature());
  }
  if (!from._internal_error_message().empty()) {
    _internal_set_error_message(from._internal_error_message());
  }
  if (from._internal_error() != 0) {
    _internal_set_error(from._internal_error());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SigningOutput::CopyFrom(const SigningOutput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TW.Aion.Proto.SigningOutput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SigningOutput::IsInitialized() const {
  return true;
}

void SigningOutput::InternalSwap(SigningOutput* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &encoded_, lhs_arena,
      &other->encoded_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &signature_, lhs_arena,
      &other->signature_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &error_message_, lhs_arena,
      &other->error_message_, rhs_arena
  );
  swap(error_, other->error_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SigningOutput::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_Aion_2eproto_getter, &descriptor_table_Aion_2eproto_once,
      file_level_metadata_Aion_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Proto
}  // namespace Aion
}  // namespace TW
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TW::Aion::Proto::SigningInput* Arena::CreateMaybeMessage< ::TW::Aion::Proto::SigningInput >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TW::Aion::Proto::SigningInput >(arena);
}
template<> PROTOBUF_NOINLINE ::TW::Aion::Proto::SigningOutput* Arena::CreateMaybeMessage< ::TW::Aion::Proto::SigningOutput >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TW::Aion::Proto::SigningOutput >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>