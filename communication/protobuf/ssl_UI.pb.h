// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: ssl_UI.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_ssl_5fUI_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_ssl_5fUI_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_ssl_5fUI_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_ssl_5fUI_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_ssl_5fUI_2eproto;
class SSL_UI_Robot;
struct SSL_UI_RobotDefaultTypeInternal;
extern SSL_UI_RobotDefaultTypeInternal _SSL_UI_Robot_default_instance_;
class SSL_UI_ball;
struct SSL_UI_ballDefaultTypeInternal;
extern SSL_UI_ballDefaultTypeInternal _SSL_UI_ball_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class SSL_UI_ball final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:SSL_UI_ball) */ {
 public:
  inline SSL_UI_ball() : SSL_UI_ball(nullptr) {}
  ~SSL_UI_ball() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR SSL_UI_ball(
      ::google::protobuf::internal::ConstantInitialized);

  inline SSL_UI_ball(const SSL_UI_ball& from) : SSL_UI_ball(nullptr, from) {}
  inline SSL_UI_ball(SSL_UI_ball&& from) noexcept
      : SSL_UI_ball(nullptr, std::move(from)) {}
  inline SSL_UI_ball& operator=(const SSL_UI_ball& from) {
    CopyFrom(from);
    return *this;
  }
  inline SSL_UI_ball& operator=(SSL_UI_ball&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SSL_UI_ball& default_instance() {
    return *internal_default_instance();
  }
  static inline const SSL_UI_ball* internal_default_instance() {
    return reinterpret_cast<const SSL_UI_ball*>(
        &_SSL_UI_ball_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(SSL_UI_ball& a, SSL_UI_ball& b) { a.Swap(&b); }
  inline void Swap(SSL_UI_ball* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SSL_UI_ball* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SSL_UI_ball* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<SSL_UI_ball>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const SSL_UI_ball& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const SSL_UI_ball& from) { SSL_UI_ball::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return IsInitializedImpl(*this);
  }

  private:
  static bool IsInitializedImpl(const MessageLite& msg);

  public:
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(SSL_UI_ball* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "SSL_UI_ball"; }

 protected:
  explicit SSL_UI_ball(::google::protobuf::Arena* arena);
  SSL_UI_ball(::google::protobuf::Arena* arena, const SSL_UI_ball& from);
  SSL_UI_ball(::google::protobuf::Arena* arena, SSL_UI_ball&& from) noexcept
      : SSL_UI_ball(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
  };
  // required float x = 1;
  bool has_x() const;
  void clear_x() ;
  float x() const;
  void set_x(float value);

  private:
  float _internal_x() const;
  void _internal_set_x(float value);

  public:
  // required float y = 2;
  bool has_y() const;
  void clear_y() ;
  float y() const;
  void set_y(float value);

  private:
  float _internal_y() const;
  void _internal_set_y(float value);

  public:
  // @@protoc_insertion_point(class_scope:SSL_UI_ball)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_SSL_UI_ball_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const SSL_UI_ball& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    float x_;
    float y_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ssl_5fUI_2eproto;
};
// -------------------------------------------------------------------

class SSL_UI_Robot final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:SSL_UI_Robot) */ {
 public:
  inline SSL_UI_Robot() : SSL_UI_Robot(nullptr) {}
  ~SSL_UI_Robot() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR SSL_UI_Robot(
      ::google::protobuf::internal::ConstantInitialized);

  inline SSL_UI_Robot(const SSL_UI_Robot& from) : SSL_UI_Robot(nullptr, from) {}
  inline SSL_UI_Robot(SSL_UI_Robot&& from) noexcept
      : SSL_UI_Robot(nullptr, std::move(from)) {}
  inline SSL_UI_Robot& operator=(const SSL_UI_Robot& from) {
    CopyFrom(from);
    return *this;
  }
  inline SSL_UI_Robot& operator=(SSL_UI_Robot&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SSL_UI_Robot& default_instance() {
    return *internal_default_instance();
  }
  static inline const SSL_UI_Robot* internal_default_instance() {
    return reinterpret_cast<const SSL_UI_Robot*>(
        &_SSL_UI_Robot_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(SSL_UI_Robot& a, SSL_UI_Robot& b) { a.Swap(&b); }
  inline void Swap(SSL_UI_Robot* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SSL_UI_Robot* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SSL_UI_Robot* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<SSL_UI_Robot>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const SSL_UI_Robot& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const SSL_UI_Robot& from) { SSL_UI_Robot::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return IsInitializedImpl(*this);
  }

  private:
  static bool IsInitializedImpl(const MessageLite& msg);

  public:
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(SSL_UI_Robot* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "SSL_UI_Robot"; }

 protected:
  explicit SSL_UI_Robot(::google::protobuf::Arena* arena);
  SSL_UI_Robot(::google::protobuf::Arena* arena, const SSL_UI_Robot& from);
  SSL_UI_Robot(::google::protobuf::Arena* arena, SSL_UI_Robot&& from) noexcept
      : SSL_UI_Robot(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kRobotIdFieldNumber = 1,
    kXFieldNumber = 2,
    kYFieldNumber = 3,
    kCurrentFieldNumber = 4,
    kConnectionStatusFieldNumber = 5,
    kSignalQualityFieldNumber = 6,
  };
  // required uint32 robot_id = 1;
  bool has_robot_id() const;
  void clear_robot_id() ;
  ::uint32_t robot_id() const;
  void set_robot_id(::uint32_t value);

  private:
  ::uint32_t _internal_robot_id() const;
  void _internal_set_robot_id(::uint32_t value);

  public:
  // required float x = 2;
  bool has_x() const;
  void clear_x() ;
  float x() const;
  void set_x(float value);

  private:
  float _internal_x() const;
  void _internal_set_x(float value);

  public:
  // required float y = 3;
  bool has_y() const;
  void clear_y() ;
  float y() const;
  void set_y(float value);

  private:
  float _internal_y() const;
  void _internal_set_y(float value);

  public:
  // required float current = 4;
  bool has_current() const;
  void clear_current() ;
  float current() const;
  void set_current(float value);

  private:
  float _internal_current() const;
  void _internal_set_current(float value);

  public:
  // required bool connection_status = 5;
  bool has_connection_status() const;
  void clear_connection_status() ;
  bool connection_status() const;
  void set_connection_status(bool value);

  private:
  bool _internal_connection_status() const;
  void _internal_set_connection_status(bool value);

  public:
  // required float signal_quality = 6;
  bool has_signal_quality() const;
  void clear_signal_quality() ;
  float signal_quality() const;
  void set_signal_quality(float value);

  private:
  float _internal_signal_quality() const;
  void _internal_set_signal_quality(float value);

  public:
  // @@protoc_insertion_point(class_scope:SSL_UI_Robot)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 6, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_SSL_UI_Robot_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const SSL_UI_Robot& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::uint32_t robot_id_;
    float x_;
    float y_;
    float current_;
    bool connection_status_;
    float signal_quality_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ssl_5fUI_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// SSL_UI_ball

// required float x = 1;
inline bool SSL_UI_ball::has_x() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void SSL_UI_ball::clear_x() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.x_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline float SSL_UI_ball::x() const {
  // @@protoc_insertion_point(field_get:SSL_UI_ball.x)
  return _internal_x();
}
inline void SSL_UI_ball::set_x(float value) {
  _internal_set_x(value);
  _impl_._has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_set:SSL_UI_ball.x)
}
inline float SSL_UI_ball::_internal_x() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.x_;
}
inline void SSL_UI_ball::_internal_set_x(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.x_ = value;
}

// required float y = 2;
inline bool SSL_UI_ball::has_y() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void SSL_UI_ball::clear_y() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.y_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline float SSL_UI_ball::y() const {
  // @@protoc_insertion_point(field_get:SSL_UI_ball.y)
  return _internal_y();
}
inline void SSL_UI_ball::set_y(float value) {
  _internal_set_y(value);
  _impl_._has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_set:SSL_UI_ball.y)
}
inline float SSL_UI_ball::_internal_y() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.y_;
}
inline void SSL_UI_ball::_internal_set_y(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.y_ = value;
}

// -------------------------------------------------------------------

// SSL_UI_Robot

// required uint32 robot_id = 1;
inline bool SSL_UI_Robot::has_robot_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void SSL_UI_Robot::clear_robot_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.robot_id_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint32_t SSL_UI_Robot::robot_id() const {
  // @@protoc_insertion_point(field_get:SSL_UI_Robot.robot_id)
  return _internal_robot_id();
}
inline void SSL_UI_Robot::set_robot_id(::uint32_t value) {
  _internal_set_robot_id(value);
  _impl_._has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_set:SSL_UI_Robot.robot_id)
}
inline ::uint32_t SSL_UI_Robot::_internal_robot_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.robot_id_;
}
inline void SSL_UI_Robot::_internal_set_robot_id(::uint32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.robot_id_ = value;
}

// required float x = 2;
inline bool SSL_UI_Robot::has_x() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void SSL_UI_Robot::clear_x() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.x_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline float SSL_UI_Robot::x() const {
  // @@protoc_insertion_point(field_get:SSL_UI_Robot.x)
  return _internal_x();
}
inline void SSL_UI_Robot::set_x(float value) {
  _internal_set_x(value);
  _impl_._has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_set:SSL_UI_Robot.x)
}
inline float SSL_UI_Robot::_internal_x() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.x_;
}
inline void SSL_UI_Robot::_internal_set_x(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.x_ = value;
}

// required float y = 3;
inline bool SSL_UI_Robot::has_y() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void SSL_UI_Robot::clear_y() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.y_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline float SSL_UI_Robot::y() const {
  // @@protoc_insertion_point(field_get:SSL_UI_Robot.y)
  return _internal_y();
}
inline void SSL_UI_Robot::set_y(float value) {
  _internal_set_y(value);
  _impl_._has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_set:SSL_UI_Robot.y)
}
inline float SSL_UI_Robot::_internal_y() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.y_;
}
inline void SSL_UI_Robot::_internal_set_y(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.y_ = value;
}

// required float current = 4;
inline bool SSL_UI_Robot::has_current() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void SSL_UI_Robot::clear_current() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.current_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline float SSL_UI_Robot::current() const {
  // @@protoc_insertion_point(field_get:SSL_UI_Robot.current)
  return _internal_current();
}
inline void SSL_UI_Robot::set_current(float value) {
  _internal_set_current(value);
  _impl_._has_bits_[0] |= 0x00000008u;
  // @@protoc_insertion_point(field_set:SSL_UI_Robot.current)
}
inline float SSL_UI_Robot::_internal_current() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.current_;
}
inline void SSL_UI_Robot::_internal_set_current(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.current_ = value;
}

// required bool connection_status = 5;
inline bool SSL_UI_Robot::has_connection_status() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void SSL_UI_Robot::clear_connection_status() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.connection_status_ = false;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline bool SSL_UI_Robot::connection_status() const {
  // @@protoc_insertion_point(field_get:SSL_UI_Robot.connection_status)
  return _internal_connection_status();
}
inline void SSL_UI_Robot::set_connection_status(bool value) {
  _internal_set_connection_status(value);
  _impl_._has_bits_[0] |= 0x00000010u;
  // @@protoc_insertion_point(field_set:SSL_UI_Robot.connection_status)
}
inline bool SSL_UI_Robot::_internal_connection_status() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.connection_status_;
}
inline void SSL_UI_Robot::_internal_set_connection_status(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.connection_status_ = value;
}

// required float signal_quality = 6;
inline bool SSL_UI_Robot::has_signal_quality() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline void SSL_UI_Robot::clear_signal_quality() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.signal_quality_ = 0;
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline float SSL_UI_Robot::signal_quality() const {
  // @@protoc_insertion_point(field_get:SSL_UI_Robot.signal_quality)
  return _internal_signal_quality();
}
inline void SSL_UI_Robot::set_signal_quality(float value) {
  _internal_set_signal_quality(value);
  _impl_._has_bits_[0] |= 0x00000020u;
  // @@protoc_insertion_point(field_set:SSL_UI_Robot.signal_quality)
}
inline float SSL_UI_Robot::_internal_signal_quality() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.signal_quality_;
}
inline void SSL_UI_Robot::_internal_set_signal_quality(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.signal_quality_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_ssl_5fUI_2eproto_2epb_2eh