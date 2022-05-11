// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/grid_2d_options.proto

#include "cartographer/mapping/proto/grid_2d_options.pb.h"

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
constexpr GridOptions2D::GridOptions2D(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : grid_type_(0)

  , resolution_(0){}
struct GridOptions2DDefaultTypeInternal {
  constexpr GridOptions2DDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GridOptions2DDefaultTypeInternal() {}
  union {
    GridOptions2D _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GridOptions2DDefaultTypeInternal _GridOptions2D_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::GridOptions2D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::GridOptions2D, grid_type_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::GridOptions2D, resolution_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::cartographer::mapping::proto::GridOptions2D)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::cartographer::mapping::proto::_GridOptions2D_default_instance_),
};

const char descriptor_table_protodef_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n0cartographer/mapping/proto/grid_2d_opt"
  "ions.proto\022\032cartographer.mapping.proto\"\250"
  "\001\n\rGridOptions2D\022E\n\tgrid_type\030\001 \001(\01622.ca"
  "rtographer.mapping.proto.GridOptions2D.G"
  "ridType\022\022\n\nresolution\030\002 \001(\002\"<\n\010GridType\022"
  "\020\n\014INVALID_GRID\020\000\022\024\n\020PROBABILITY_GRID\020\001\022"
  "\010\n\004TSDF\020\002b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto = {
  false, false, 257, descriptor_table_protodef_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto, "cartographer/mapping/proto/grid_2d_options.proto", 
  &descriptor_table_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto::offsets,
  file_level_metadata_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto, file_level_enum_descriptors_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto, file_level_service_descriptors_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto_getter() {
  return &descriptor_table_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto(&descriptor_table_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto);
namespace cartographer {
namespace mapping {
namespace proto {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GridOptions2D_GridType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto);
  return file_level_enum_descriptors_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto[0];
}
bool GridOptions2D_GridType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr GridOptions2D_GridType GridOptions2D::INVALID_GRID;
constexpr GridOptions2D_GridType GridOptions2D::PROBABILITY_GRID;
constexpr GridOptions2D_GridType GridOptions2D::TSDF;
constexpr GridOptions2D_GridType GridOptions2D::GridType_MIN;
constexpr GridOptions2D_GridType GridOptions2D::GridType_MAX;
constexpr int GridOptions2D::GridType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class GridOptions2D::_Internal {
 public:
};

GridOptions2D::GridOptions2D(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:cartographer.mapping.proto.GridOptions2D)
}
GridOptions2D::GridOptions2D(const GridOptions2D& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&grid_type_, &from.grid_type_,
    static_cast<size_t>(reinterpret_cast<char*>(&resolution_) -
    reinterpret_cast<char*>(&grid_type_)) + sizeof(resolution_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.GridOptions2D)
}

void GridOptions2D::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&grid_type_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&resolution_) -
    reinterpret_cast<char*>(&grid_type_)) + sizeof(resolution_));
}

GridOptions2D::~GridOptions2D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.GridOptions2D)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void GridOptions2D::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void GridOptions2D::ArenaDtor(void* object) {
  GridOptions2D* _this = reinterpret_cast< GridOptions2D* >(object);
  (void)_this;
}
void GridOptions2D::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GridOptions2D::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void GridOptions2D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.GridOptions2D)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&grid_type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&resolution_) -
      reinterpret_cast<char*>(&grid_type_)) + sizeof(resolution_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GridOptions2D::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_grid_type(static_cast<::cartographer::mapping::proto::GridOptions2D_GridType>(val));
        } else
          goto handle_unusual;
        continue;
      // float resolution = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          resolution_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GridOptions2D::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.GridOptions2D)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
  if (this->_internal_grid_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_grid_type(), target);
  }

  // float resolution = 2;
  if (!(this->_internal_resolution() <= 0 && this->_internal_resolution() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_resolution(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.GridOptions2D)
  return target;
}

size_t GridOptions2D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.GridOptions2D)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
  if (this->_internal_grid_type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_grid_type());
  }

  // float resolution = 2;
  if (!(this->_internal_resolution() <= 0 && this->_internal_resolution() >= 0)) {
    total_size += 1 + 4;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GridOptions2D::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    GridOptions2D::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GridOptions2D::GetClassData() const { return &_class_data_; }

void GridOptions2D::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<GridOptions2D *>(to)->MergeFrom(
      static_cast<const GridOptions2D &>(from));
}


void GridOptions2D::MergeFrom(const GridOptions2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.GridOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_grid_type() != 0) {
    _internal_set_grid_type(from._internal_grid_type());
  }
  if (!(from._internal_resolution() <= 0 && from._internal_resolution() >= 0)) {
    _internal_set_resolution(from._internal_resolution());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GridOptions2D::CopyFrom(const GridOptions2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.GridOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GridOptions2D::IsInitialized() const {
  return true;
}

void GridOptions2D::InternalSwap(GridOptions2D* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GridOptions2D, resolution_)
      + sizeof(GridOptions2D::resolution_)
      - PROTOBUF_FIELD_OFFSET(GridOptions2D, grid_type_)>(
          reinterpret_cast<char*>(&grid_type_),
          reinterpret_cast<char*>(&other->grid_type_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GridOptions2D::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto_getter, &descriptor_table_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto_once,
      file_level_metadata_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cartographer::mapping::proto::GridOptions2D* Arena::CreateMaybeMessage< ::cartographer::mapping::proto::GridOptions2D >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cartographer::mapping::proto::GridOptions2D >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
