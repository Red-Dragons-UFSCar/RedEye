// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_eletro_UI.proto

#include "ssl_eletro_UI.pb.h"

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

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR SSL_eletronica::SSL_eletronica(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.robot_id_)*/0u
  , /*decltype(_impl_.current_)*/0
  , /*decltype(_impl_.ping_)*/0u
  , /*decltype(_impl_.status_)*/false
  , /*decltype(_impl_.transmission_)*/0} {}
struct SSL_eletronicaDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SSL_eletronicaDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SSL_eletronicaDefaultTypeInternal() {}
  union {
    SSL_eletronica _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SSL_eletronicaDefaultTypeInternal _SSL_eletronica_default_instance_;
static ::_pb::Metadata file_level_metadata_ssl_5feletro_5fUI_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_ssl_5feletro_5fUI_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ssl_5feletro_5fUI_2eproto = nullptr;

const uint32_t TableStruct_ssl_5feletro_5fUI_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::SSL_eletronica, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::SSL_eletronica, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::SSL_eletronica, _impl_.robot_id_),
  PROTOBUF_FIELD_OFFSET(::SSL_eletronica, _impl_.current_),
  PROTOBUF_FIELD_OFFSET(::SSL_eletronica, _impl_.ping_),
  PROTOBUF_FIELD_OFFSET(::SSL_eletronica, _impl_.status_),
  PROTOBUF_FIELD_OFFSET(::SSL_eletronica, _impl_.transmission_),
  0,
  1,
  2,
  3,
  4,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, -1, sizeof(::SSL_eletronica)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_SSL_eletronica_default_instance_._instance,
};

const char descriptor_table_protodef_ssl_5feletro_5fUI_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023ssl_eletro_UI.proto\"g\n\016SSL_eletronica\022"
  "\020\n\010robot_id\030\001 \001(\r\022\017\n\007current\030\002 \001(\002\022\014\n\004pi"
  "ng\030\003 \001(\r\022\016\n\006status\030\004 \001(\010\022\024\n\014transmission"
  "\030\005 \001(\002"
  ;
static ::_pbi::once_flag descriptor_table_ssl_5feletro_5fUI_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ssl_5feletro_5fUI_2eproto = {
    false, false, 126, descriptor_table_protodef_ssl_5feletro_5fUI_2eproto,
    "ssl_eletro_UI.proto",
    &descriptor_table_ssl_5feletro_5fUI_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_ssl_5feletro_5fUI_2eproto::offsets,
    file_level_metadata_ssl_5feletro_5fUI_2eproto, file_level_enum_descriptors_ssl_5feletro_5fUI_2eproto,
    file_level_service_descriptors_ssl_5feletro_5fUI_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ssl_5feletro_5fUI_2eproto_getter() {
  return &descriptor_table_ssl_5feletro_5fUI_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ssl_5feletro_5fUI_2eproto(&descriptor_table_ssl_5feletro_5fUI_2eproto);

// ===================================================================

class SSL_eletronica::_Internal {
 public:
  using HasBits = decltype(std::declval<SSL_eletronica>()._impl_._has_bits_);
  static void set_has_robot_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_current(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_ping(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_status(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_transmission(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

SSL_eletronica::SSL_eletronica(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:SSL_eletronica)
}
SSL_eletronica::SSL_eletronica(const SSL_eletronica& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SSL_eletronica* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.robot_id_){}
    , decltype(_impl_.current_){}
    , decltype(_impl_.ping_){}
    , decltype(_impl_.status_){}
    , decltype(_impl_.transmission_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.robot_id_, &from._impl_.robot_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.transmission_) -
    reinterpret_cast<char*>(&_impl_.robot_id_)) + sizeof(_impl_.transmission_));
  // @@protoc_insertion_point(copy_constructor:SSL_eletronica)
}

inline void SSL_eletronica::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.robot_id_){0u}
    , decltype(_impl_.current_){0}
    , decltype(_impl_.ping_){0u}
    , decltype(_impl_.status_){false}
    , decltype(_impl_.transmission_){0}
  };
}

SSL_eletronica::~SSL_eletronica() {
  // @@protoc_insertion_point(destructor:SSL_eletronica)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SSL_eletronica::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void SSL_eletronica::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SSL_eletronica::Clear() {
// @@protoc_insertion_point(message_clear_start:SSL_eletronica)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&_impl_.robot_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.transmission_) -
        reinterpret_cast<char*>(&_impl_.robot_id_)) + sizeof(_impl_.transmission_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SSL_eletronica::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 robot_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_robot_id(&has_bits);
          _impl_.robot_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional float current = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          _Internal::set_has_current(&has_bits);
          _impl_.current_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 ping = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_ping(&has_bits);
          _impl_.ping_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool status = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_status(&has_bits);
          _impl_.status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional float transmission = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 45)) {
          _Internal::set_has_transmission(&has_bits);
          _impl_.transmission_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SSL_eletronica::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SSL_eletronica)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 robot_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_robot_id(), target);
  }

  // optional float current = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(2, this->_internal_current(), target);
  }

  // optional uint32 ping = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_ping(), target);
  }

  // optional bool status = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(4, this->_internal_status(), target);
  }

  // optional float transmission = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(5, this->_internal_transmission(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SSL_eletronica)
  return target;
}

size_t SSL_eletronica::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SSL_eletronica)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional uint32 robot_id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_robot_id());
    }

    // optional float current = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 4;
    }

    // optional uint32 ping = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_ping());
    }

    // optional bool status = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional float transmission = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 4;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SSL_eletronica::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SSL_eletronica::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SSL_eletronica::GetClassData() const { return &_class_data_; }


void SSL_eletronica::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SSL_eletronica*>(&to_msg);
  auto& from = static_cast<const SSL_eletronica&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:SSL_eletronica)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.robot_id_ = from._impl_.robot_id_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.current_ = from._impl_.current_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.ping_ = from._impl_.ping_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.status_ = from._impl_.status_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.transmission_ = from._impl_.transmission_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SSL_eletronica::CopyFrom(const SSL_eletronica& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SSL_eletronica)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SSL_eletronica::IsInitialized() const {
  return true;
}

void SSL_eletronica::InternalSwap(SSL_eletronica* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SSL_eletronica, _impl_.transmission_)
      + sizeof(SSL_eletronica::_impl_.transmission_)
      - PROTOBUF_FIELD_OFFSET(SSL_eletronica, _impl_.robot_id_)>(
          reinterpret_cast<char*>(&_impl_.robot_id_),
          reinterpret_cast<char*>(&other->_impl_.robot_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SSL_eletronica::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ssl_5feletro_5fUI_2eproto_getter, &descriptor_table_ssl_5feletro_5fUI_2eproto_once,
      file_level_metadata_ssl_5feletro_5fUI_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::SSL_eletronica*
Arena::CreateMaybeMessage< ::SSL_eletronica >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SSL_eletronica >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
