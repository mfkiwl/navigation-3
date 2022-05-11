// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/tsdf_2d.proto

#include "cartographer/mapping/proto/tsdf_2d.pb.h"

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
namespace cartographer {
namespace mapping {
namespace proto {
constexpr TSDF2D::TSDF2D(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : weight_cells_()
  , _weight_cells_cached_byte_size_(0)
  , truncation_distance_(0)
  , max_weight_(0){}
struct TSDF2DDefaultTypeInternal {
  constexpr TSDF2DDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TSDF2DDefaultTypeInternal() {}
  union {
    TSDF2D _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TSDF2DDefaultTypeInternal _TSDF2D_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDF2D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDF2D, truncation_distance_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDF2D, max_weight_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDF2D, weight_cells_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::cartographer::mapping::proto::TSDF2D)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::cartographer::mapping::proto::_TSDF2D_default_instance_),
};

const char descriptor_table_protodef_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n(cartographer/mapping/proto/tsdf_2d.pro"
  "to\022\032cartographer.mapping.proto\"O\n\006TSDF2D"
  "\022\033\n\023truncation_distance\030\001 \001(\002\022\022\n\nmax_wei"
  "ght\030\002 \001(\002\022\024\n\014weight_cells\030\003 \003(\005b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto = {
  false, false, 159, descriptor_table_protodef_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto, "cartographer/mapping/proto/tsdf_2d.proto", 
  &descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto::offsets,
  file_level_metadata_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto, file_level_enum_descriptors_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto, file_level_service_descriptors_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto_getter() {
  return &descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto(&descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto);
namespace cartographer {
namespace mapping {
namespace proto {

// ===================================================================

class TSDF2D::_Internal {
 public:
};

TSDF2D::TSDF2D(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  weight_cells_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:cartographer.mapping.proto.TSDF2D)
}
TSDF2D::TSDF2D(const TSDF2D& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      weight_cells_(from.weight_cells_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&truncation_distance_, &from.truncation_distance_,
    static_cast<size_t>(reinterpret_cast<char*>(&max_weight_) -
    reinterpret_cast<char*>(&truncation_distance_)) + sizeof(max_weight_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.TSDF2D)
}

void TSDF2D::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&truncation_distance_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&max_weight_) -
    reinterpret_cast<char*>(&truncation_distance_)) + sizeof(max_weight_));
}

TSDF2D::~TSDF2D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.TSDF2D)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void TSDF2D::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void TSDF2D::ArenaDtor(void* object) {
  TSDF2D* _this = reinterpret_cast< TSDF2D* >(object);
  (void)_this;
}
void TSDF2D::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TSDF2D::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TSDF2D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.TSDF2D)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  weight_cells_.Clear();
  ::memset(&truncation_distance_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&max_weight_) -
      reinterpret_cast<char*>(&truncation_distance_)) + sizeof(max_weight_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TSDF2D::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // float truncation_distance = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          truncation_distance_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float max_weight = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          max_weight_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // repeated int32 weight_cells = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_weight_cells(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24) {
          _internal_add_weight_cells(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* TSDF2D::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.TSDF2D)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float truncation_distance = 1;
  if (!(this->_internal_truncation_distance() <= 0 && this->_internal_truncation_distance() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_truncation_distance(), target);
  }

  // float max_weight = 2;
  if (!(this->_internal_max_weight() <= 0 && this->_internal_max_weight() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_max_weight(), target);
  }

  // repeated int32 weight_cells = 3;
  {
    int byte_size = _weight_cells_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          3, _internal_weight_cells(), byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.TSDF2D)
  return target;
}

size_t TSDF2D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.TSDF2D)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 weight_cells = 3;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->weight_cells_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _weight_cells_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // float truncation_distance = 1;
  if (!(this->_internal_truncation_distance() <= 0 && this->_internal_truncation_distance() >= 0)) {
    total_size += 1 + 4;
  }

  // float max_weight = 2;
  if (!(this->_internal_max_weight() <= 0 && this->_internal_max_weight() >= 0)) {
    total_size += 1 + 4;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TSDF2D::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    TSDF2D::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TSDF2D::GetClassData() const { return &_class_data_; }

void TSDF2D::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<TSDF2D *>(to)->MergeFrom(
      static_cast<const TSDF2D &>(from));
}


void TSDF2D::MergeFrom(const TSDF2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.TSDF2D)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  weight_cells_.MergeFrom(from.weight_cells_);
  if (!(from._internal_truncation_distance() <= 0 && from._internal_truncation_distance() >= 0)) {
    _internal_set_truncation_distance(from._internal_truncation_distance());
  }
  if (!(from._internal_max_weight() <= 0 && from._internal_max_weight() >= 0)) {
    _internal_set_max_weight(from._internal_max_weight());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TSDF2D::CopyFrom(const TSDF2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.TSDF2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TSDF2D::IsInitialized() const {
  return true;
}

void TSDF2D::InternalSwap(TSDF2D* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  weight_cells_.InternalSwap(&other->weight_cells_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TSDF2D, max_weight_)
      + sizeof(TSDF2D::max_weight_)
      - PROTOBUF_FIELD_OFFSET(TSDF2D, truncation_distance_)>(
          reinterpret_cast<char*>(&truncation_distance_),
          reinterpret_cast<char*>(&other->truncation_distance_));
}

::PROTOBUF_NAMESPACE_ID::Metadata TSDF2D::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto_getter, &descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto_once,
      file_level_metadata_cartographer_2fmapping_2fproto_2ftsdf_5f2d_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cartographer::mapping::proto::TSDF2D* Arena::CreateMaybeMessage< ::cartographer::mapping::proto::TSDF2D >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cartographer::mapping::proto::TSDF2D >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
