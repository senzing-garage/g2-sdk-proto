// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: szdiagnostic.proto

#include "szdiagnostic.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace szdiagnostic {
      template <typename>
PROTOBUF_CONSTEXPR PurgeRepositoryResponse::PurgeRepositoryResponse(::_pbi::ConstantInitialized) {}
struct PurgeRepositoryResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PurgeRepositoryResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PurgeRepositoryResponseDefaultTypeInternal() {}
  union {
    PurgeRepositoryResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PurgeRepositoryResponseDefaultTypeInternal _PurgeRepositoryResponse_default_instance_;
      template <typename>
PROTOBUF_CONSTEXPR PurgeRepositoryRequest::PurgeRepositoryRequest(::_pbi::ConstantInitialized) {}
struct PurgeRepositoryRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PurgeRepositoryRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PurgeRepositoryRequestDefaultTypeInternal() {}
  union {
    PurgeRepositoryRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PurgeRepositoryRequestDefaultTypeInternal _PurgeRepositoryRequest_default_instance_;

inline constexpr CheckDatabasePerformanceResponse::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : result_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR CheckDatabasePerformanceResponse::CheckDatabasePerformanceResponse(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct CheckDatabasePerformanceResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CheckDatabasePerformanceResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CheckDatabasePerformanceResponseDefaultTypeInternal() {}
  union {
    CheckDatabasePerformanceResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CheckDatabasePerformanceResponseDefaultTypeInternal _CheckDatabasePerformanceResponse_default_instance_;

inline constexpr CheckDatabasePerformanceRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : secondstorun_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR CheckDatabasePerformanceRequest::CheckDatabasePerformanceRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct CheckDatabasePerformanceRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CheckDatabasePerformanceRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CheckDatabasePerformanceRequestDefaultTypeInternal() {}
  union {
    CheckDatabasePerformanceRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CheckDatabasePerformanceRequestDefaultTypeInternal _CheckDatabasePerformanceRequest_default_instance_;
}  // namespace szdiagnostic
static ::_pb::Metadata file_level_metadata_szdiagnostic_2eproto[4];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_szdiagnostic_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_szdiagnostic_2eproto = nullptr;
const ::uint32_t TableStruct_szdiagnostic_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::szdiagnostic::CheckDatabasePerformanceRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::szdiagnostic::CheckDatabasePerformanceRequest, _impl_.secondstorun_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::szdiagnostic::CheckDatabasePerformanceResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::szdiagnostic::CheckDatabasePerformanceResponse, _impl_.result_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::szdiagnostic::PurgeRepositoryRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::szdiagnostic::PurgeRepositoryResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::szdiagnostic::CheckDatabasePerformanceRequest)},
        {9, -1, -1, sizeof(::szdiagnostic::CheckDatabasePerformanceResponse)},
        {18, -1, -1, sizeof(::szdiagnostic::PurgeRepositoryRequest)},
        {26, -1, -1, sizeof(::szdiagnostic::PurgeRepositoryResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::szdiagnostic::_CheckDatabasePerformanceRequest_default_instance_._instance,
    &::szdiagnostic::_CheckDatabasePerformanceResponse_default_instance_._instance,
    &::szdiagnostic::_PurgeRepositoryRequest_default_instance_._instance,
    &::szdiagnostic::_PurgeRepositoryResponse_default_instance_._instance,
};
const char descriptor_table_protodef_szdiagnostic_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\022szdiagnostic.proto\022\014szdiagnostic\"7\n\037Ch"
    "eckDatabasePerformanceRequest\022\024\n\014seconds"
    "ToRun\030\001 \001(\005\"2\n CheckDatabasePerformanceR"
    "esponse\022\016\n\006result\030\001 \001(\t\"\030\n\026PurgeReposito"
    "ryRequest\"\031\n\027PurgeRepositoryResponse2\355\001\n"
    "\014SzDiagnostic\022{\n\030CheckDatabasePerformanc"
    "e\022-.szdiagnostic.CheckDatabasePerformanc"
    "eRequest\032..szdiagnostic.CheckDatabasePer"
    "formanceResponse\"\000\022`\n\017PurgeRepository\022$."
    "szdiagnostic.PurgeRepositoryRequest\032%.sz"
    "diagnostic.PurgeRepositoryResponse\"\000Bs\n\'"
    "com.senzing.sz.engine.grpc.SzDiagnosticB"
    "\021SzDiagnosticProtoZ5github.com/senzing-g"
    "arage/sz-sdk-go-grpc/szdiagnosticb\006proto"
    "3"
};
static ::absl::once_flag descriptor_table_szdiagnostic_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_szdiagnostic_2eproto = {
    false,
    false,
    561,
    descriptor_table_protodef_szdiagnostic_2eproto,
    "szdiagnostic.proto",
    &descriptor_table_szdiagnostic_2eproto_once,
    nullptr,
    0,
    4,
    schemas,
    file_default_instances,
    TableStruct_szdiagnostic_2eproto::offsets,
    file_level_metadata_szdiagnostic_2eproto,
    file_level_enum_descriptors_szdiagnostic_2eproto,
    file_level_service_descriptors_szdiagnostic_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_szdiagnostic_2eproto_getter() {
  return &descriptor_table_szdiagnostic_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_szdiagnostic_2eproto(&descriptor_table_szdiagnostic_2eproto);
namespace szdiagnostic {
// ===================================================================

class CheckDatabasePerformanceRequest::_Internal {
 public:
};

CheckDatabasePerformanceRequest::CheckDatabasePerformanceRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:szdiagnostic.CheckDatabasePerformanceRequest)
}
CheckDatabasePerformanceRequest::CheckDatabasePerformanceRequest(
    ::google::protobuf::Arena* arena, const CheckDatabasePerformanceRequest& from)
    : CheckDatabasePerformanceRequest(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE CheckDatabasePerformanceRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void CheckDatabasePerformanceRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.secondstorun_ = {};
}
CheckDatabasePerformanceRequest::~CheckDatabasePerformanceRequest() {
  // @@protoc_insertion_point(destructor:szdiagnostic.CheckDatabasePerformanceRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void CheckDatabasePerformanceRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void CheckDatabasePerformanceRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:szdiagnostic.CheckDatabasePerformanceRequest)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.secondstorun_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* CheckDatabasePerformanceRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> CheckDatabasePerformanceRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_CheckDatabasePerformanceRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // int32 secondsToRun = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(CheckDatabasePerformanceRequest, _impl_.secondstorun_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(CheckDatabasePerformanceRequest, _impl_.secondstorun_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 secondsToRun = 1;
    {PROTOBUF_FIELD_OFFSET(CheckDatabasePerformanceRequest, _impl_.secondstorun_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* CheckDatabasePerformanceRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:szdiagnostic.CheckDatabasePerformanceRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 secondsToRun = 1;
  if (this->_internal_secondstorun() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_secondstorun(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:szdiagnostic.CheckDatabasePerformanceRequest)
  return target;
}

::size_t CheckDatabasePerformanceRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:szdiagnostic.CheckDatabasePerformanceRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 secondsToRun = 1;
  if (this->_internal_secondstorun() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_secondstorun());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData CheckDatabasePerformanceRequest::_class_data_ = {
    CheckDatabasePerformanceRequest::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* CheckDatabasePerformanceRequest::GetClassData() const {
  return &_class_data_;
}

void CheckDatabasePerformanceRequest::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<CheckDatabasePerformanceRequest*>(&to_msg);
  auto& from = static_cast<const CheckDatabasePerformanceRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:szdiagnostic.CheckDatabasePerformanceRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_secondstorun() != 0) {
    _this->_internal_set_secondstorun(from._internal_secondstorun());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void CheckDatabasePerformanceRequest::CopyFrom(const CheckDatabasePerformanceRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:szdiagnostic.CheckDatabasePerformanceRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool CheckDatabasePerformanceRequest::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* CheckDatabasePerformanceRequest::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void CheckDatabasePerformanceRequest::InternalSwap(CheckDatabasePerformanceRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        swap(_impl_.secondstorun_, other->_impl_.secondstorun_);
}

::google::protobuf::Metadata CheckDatabasePerformanceRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_szdiagnostic_2eproto_getter, &descriptor_table_szdiagnostic_2eproto_once,
      file_level_metadata_szdiagnostic_2eproto[0]);
}
// ===================================================================

class CheckDatabasePerformanceResponse::_Internal {
 public:
};

CheckDatabasePerformanceResponse::CheckDatabasePerformanceResponse(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:szdiagnostic.CheckDatabasePerformanceResponse)
}
inline PROTOBUF_NDEBUG_INLINE CheckDatabasePerformanceResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : result_(arena, from.result_),
        _cached_size_{0} {}

CheckDatabasePerformanceResponse::CheckDatabasePerformanceResponse(
    ::google::protobuf::Arena* arena,
    const CheckDatabasePerformanceResponse& from)
    : ::google::protobuf::Message(arena) {
  CheckDatabasePerformanceResponse* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:szdiagnostic.CheckDatabasePerformanceResponse)
}
inline PROTOBUF_NDEBUG_INLINE CheckDatabasePerformanceResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : result_(arena),
        _cached_size_{0} {}

inline void CheckDatabasePerformanceResponse::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
CheckDatabasePerformanceResponse::~CheckDatabasePerformanceResponse() {
  // @@protoc_insertion_point(destructor:szdiagnostic.CheckDatabasePerformanceResponse)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void CheckDatabasePerformanceResponse::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.result_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void CheckDatabasePerformanceResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:szdiagnostic.CheckDatabasePerformanceResponse)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.result_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* CheckDatabasePerformanceResponse::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 60, 2> CheckDatabasePerformanceResponse::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_CheckDatabasePerformanceResponse_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string result = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(CheckDatabasePerformanceResponse, _impl_.result_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string result = 1;
    {PROTOBUF_FIELD_OFFSET(CheckDatabasePerformanceResponse, _impl_.result_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\55\6\0\0\0\0\0\0"
    "szdiagnostic.CheckDatabasePerformanceResponse"
    "result"
  }},
};

::uint8_t* CheckDatabasePerformanceResponse::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:szdiagnostic.CheckDatabasePerformanceResponse)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string result = 1;
  if (!this->_internal_result().empty()) {
    const std::string& _s = this->_internal_result();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "szdiagnostic.CheckDatabasePerformanceResponse.result");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:szdiagnostic.CheckDatabasePerformanceResponse)
  return target;
}

::size_t CheckDatabasePerformanceResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:szdiagnostic.CheckDatabasePerformanceResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string result = 1;
  if (!this->_internal_result().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_result());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData CheckDatabasePerformanceResponse::_class_data_ = {
    CheckDatabasePerformanceResponse::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* CheckDatabasePerformanceResponse::GetClassData() const {
  return &_class_data_;
}

void CheckDatabasePerformanceResponse::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<CheckDatabasePerformanceResponse*>(&to_msg);
  auto& from = static_cast<const CheckDatabasePerformanceResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:szdiagnostic.CheckDatabasePerformanceResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_result().empty()) {
    _this->_internal_set_result(from._internal_result());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void CheckDatabasePerformanceResponse::CopyFrom(const CheckDatabasePerformanceResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:szdiagnostic.CheckDatabasePerformanceResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool CheckDatabasePerformanceResponse::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* CheckDatabasePerformanceResponse::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void CheckDatabasePerformanceResponse::InternalSwap(CheckDatabasePerformanceResponse* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.result_, &other->_impl_.result_, arena);
}

::google::protobuf::Metadata CheckDatabasePerformanceResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_szdiagnostic_2eproto_getter, &descriptor_table_szdiagnostic_2eproto_once,
      file_level_metadata_szdiagnostic_2eproto[1]);
}
// ===================================================================

class PurgeRepositoryRequest::_Internal {
 public:
};

PurgeRepositoryRequest::PurgeRepositoryRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
  // @@protoc_insertion_point(arena_constructor:szdiagnostic.PurgeRepositoryRequest)
}
PurgeRepositoryRequest::PurgeRepositoryRequest(
    ::google::protobuf::Arena* arena,
    const PurgeRepositoryRequest& from)
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
  PurgeRepositoryRequest* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);

  // @@protoc_insertion_point(copy_constructor:szdiagnostic.PurgeRepositoryRequest)
}









::google::protobuf::Metadata PurgeRepositoryRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_szdiagnostic_2eproto_getter, &descriptor_table_szdiagnostic_2eproto_once,
      file_level_metadata_szdiagnostic_2eproto[2]);
}
// ===================================================================

class PurgeRepositoryResponse::_Internal {
 public:
};

PurgeRepositoryResponse::PurgeRepositoryResponse(::google::protobuf::Arena* arena)
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
  // @@protoc_insertion_point(arena_constructor:szdiagnostic.PurgeRepositoryResponse)
}
PurgeRepositoryResponse::PurgeRepositoryResponse(
    ::google::protobuf::Arena* arena,
    const PurgeRepositoryResponse& from)
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
  PurgeRepositoryResponse* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);

  // @@protoc_insertion_point(copy_constructor:szdiagnostic.PurgeRepositoryResponse)
}









::google::protobuf::Metadata PurgeRepositoryResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_szdiagnostic_2eproto_getter, &descriptor_table_szdiagnostic_2eproto_once,
      file_level_metadata_szdiagnostic_2eproto[3]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace szdiagnostic
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
