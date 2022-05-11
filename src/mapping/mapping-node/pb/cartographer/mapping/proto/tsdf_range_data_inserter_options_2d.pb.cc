// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/tsdf_range_data_inserter_options_2d.proto

#include "cartographer/mapping/proto/tsdf_range_data_inserter_options_2d.pb.h"

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
constexpr TSDFRangeDataInserterOptions2D::TSDFRangeDataInserterOptions2D(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : normal_estimation_options_(nullptr)
  , truncation_distance_(0)
  , maximum_weight_(0)
  , update_free_space_(false)
  , project_sdf_distance_to_scan_normal_(false)
  , update_weight_range_exponent_(0)
  , update_weight_angle_scan_normal_to_ray_kernel_bandwidth_(0)
  , update_weight_distance_cell_to_hit_kernel_bandwidth_(0){}
struct TSDFRangeDataInserterOptions2DDefaultTypeInternal {
  constexpr TSDFRangeDataInserterOptions2DDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TSDFRangeDataInserterOptions2DDefaultTypeInternal() {}
  union {
    TSDFRangeDataInserterOptions2D _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TSDFRangeDataInserterOptions2DDefaultTypeInternal _TSDFRangeDataInserterOptions2D_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D, truncation_distance_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D, maximum_weight_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D, update_free_space_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D, normal_estimation_options_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D, project_sdf_distance_to_scan_normal_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D, update_weight_range_exponent_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D, update_weight_angle_scan_normal_to_ray_kernel_bandwidth_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D, update_weight_distance_cell_to_hit_kernel_bandwidth_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::cartographer::mapping::proto::_TSDFRangeDataInserterOptions2D_default_instance_),
};

const char descriptor_table_protodef_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nDcartographer/mapping/proto/tsdf_range_"
  "data_inserter_options_2d.proto\022\032cartogra"
  "pher.mapping.proto\032=cartographer/mapping"
  "/proto/normal_estimation_options_2d.prot"
  "o\"\233\003\n\036TSDFRangeDataInserterOptions2D\022\033\n\023"
  "truncation_distance\030\001 \001(\001\022\026\n\016maximum_wei"
  "ght\030\002 \001(\001\022\031\n\021update_free_space\030\003 \001(\010\022X\n\031"
  "normal_estimation_options\030\004 \001(\01325.cartog"
  "rapher.mapping.proto.NormalEstimationOpt"
  "ions2D\022+\n#project_sdf_distance_to_scan_n"
  "ormal\030\005 \001(\010\022$\n\034update_weight_range_expon"
  "ent\030\006 \001(\005\022\?\n7update_weight_angle_scan_no"
  "rmal_to_ray_kernel_bandwidth\030\007 \001(\001\022;\n3up"
  "date_weight_distance_cell_to_hit_kernel_"
  "bandwidth\030\010 \001(\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto_deps[1] = {
  &::descriptor_table_cartographer_2fmapping_2fproto_2fnormal_5festimation_5foptions_5f2d_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto = {
  false, false, 583, descriptor_table_protodef_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto, "cartographer/mapping/proto/tsdf_range_data_inserter_options_2d.proto", 
  &descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto_once, descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto::offsets,
  file_level_metadata_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto, file_level_enum_descriptors_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto, file_level_service_descriptors_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto_getter() {
  return &descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto(&descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto);
namespace cartographer {
namespace mapping {
namespace proto {

// ===================================================================

class TSDFRangeDataInserterOptions2D::_Internal {
 public:
  static const ::cartographer::mapping::proto::NormalEstimationOptions2D& normal_estimation_options(const TSDFRangeDataInserterOptions2D* msg);
};

const ::cartographer::mapping::proto::NormalEstimationOptions2D&
TSDFRangeDataInserterOptions2D::_Internal::normal_estimation_options(const TSDFRangeDataInserterOptions2D* msg) {
  return *msg->normal_estimation_options_;
}
void TSDFRangeDataInserterOptions2D::clear_normal_estimation_options() {
  if (GetArenaForAllocation() == nullptr && normal_estimation_options_ != nullptr) {
    delete normal_estimation_options_;
  }
  normal_estimation_options_ = nullptr;
}
TSDFRangeDataInserterOptions2D::TSDFRangeDataInserterOptions2D(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D)
}
TSDFRangeDataInserterOptions2D::TSDFRangeDataInserterOptions2D(const TSDFRangeDataInserterOptions2D& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_normal_estimation_options()) {
    normal_estimation_options_ = new ::cartographer::mapping::proto::NormalEstimationOptions2D(*from.normal_estimation_options_);
  } else {
    normal_estimation_options_ = nullptr;
  }
  ::memcpy(&truncation_distance_, &from.truncation_distance_,
    static_cast<size_t>(reinterpret_cast<char*>(&update_weight_distance_cell_to_hit_kernel_bandwidth_) -
    reinterpret_cast<char*>(&truncation_distance_)) + sizeof(update_weight_distance_cell_to_hit_kernel_bandwidth_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D)
}

void TSDFRangeDataInserterOptions2D::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&normal_estimation_options_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&update_weight_distance_cell_to_hit_kernel_bandwidth_) -
    reinterpret_cast<char*>(&normal_estimation_options_)) + sizeof(update_weight_distance_cell_to_hit_kernel_bandwidth_));
}

TSDFRangeDataInserterOptions2D::~TSDFRangeDataInserterOptions2D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void TSDFRangeDataInserterOptions2D::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete normal_estimation_options_;
}

void TSDFRangeDataInserterOptions2D::ArenaDtor(void* object) {
  TSDFRangeDataInserterOptions2D* _this = reinterpret_cast< TSDFRangeDataInserterOptions2D* >(object);
  (void)_this;
}
void TSDFRangeDataInserterOptions2D::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TSDFRangeDataInserterOptions2D::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TSDFRangeDataInserterOptions2D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && normal_estimation_options_ != nullptr) {
    delete normal_estimation_options_;
  }
  normal_estimation_options_ = nullptr;
  ::memset(&truncation_distance_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&update_weight_distance_cell_to_hit_kernel_bandwidth_) -
      reinterpret_cast<char*>(&truncation_distance_)) + sizeof(update_weight_distance_cell_to_hit_kernel_bandwidth_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TSDFRangeDataInserterOptions2D::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // double truncation_distance = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          truncation_distance_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // double maximum_weight = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          maximum_weight_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // bool update_free_space = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          update_free_space_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .cartographer.mapping.proto.NormalEstimationOptions2D normal_estimation_options = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_normal_estimation_options(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool project_sdf_distance_to_scan_normal = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          project_sdf_distance_to_scan_normal_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 update_weight_range_exponent = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          update_weight_range_exponent_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // double update_weight_angle_scan_normal_to_ray_kernel_bandwidth = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 57)) {
          update_weight_angle_scan_normal_to_ray_kernel_bandwidth_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // double update_weight_distance_cell_to_hit_kernel_bandwidth = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 65)) {
          update_weight_distance_cell_to_hit_kernel_bandwidth_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
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

::PROTOBUF_NAMESPACE_ID::uint8* TSDFRangeDataInserterOptions2D::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double truncation_distance = 1;
  if (!(this->_internal_truncation_distance() <= 0 && this->_internal_truncation_distance() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_truncation_distance(), target);
  }

  // double maximum_weight = 2;
  if (!(this->_internal_maximum_weight() <= 0 && this->_internal_maximum_weight() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_maximum_weight(), target);
  }

  // bool update_free_space = 3;
  if (this->_internal_update_free_space() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_update_free_space(), target);
  }

  // .cartographer.mapping.proto.NormalEstimationOptions2D normal_estimation_options = 4;
  if (this->_internal_has_normal_estimation_options()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::normal_estimation_options(this), target, stream);
  }

  // bool project_sdf_distance_to_scan_normal = 5;
  if (this->_internal_project_sdf_distance_to_scan_normal() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->_internal_project_sdf_distance_to_scan_normal(), target);
  }

  // int32 update_weight_range_exponent = 6;
  if (this->_internal_update_weight_range_exponent() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(6, this->_internal_update_weight_range_exponent(), target);
  }

  // double update_weight_angle_scan_normal_to_ray_kernel_bandwidth = 7;
  if (!(this->_internal_update_weight_angle_scan_normal_to_ray_kernel_bandwidth() <= 0 && this->_internal_update_weight_angle_scan_normal_to_ray_kernel_bandwidth() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(7, this->_internal_update_weight_angle_scan_normal_to_ray_kernel_bandwidth(), target);
  }

  // double update_weight_distance_cell_to_hit_kernel_bandwidth = 8;
  if (!(this->_internal_update_weight_distance_cell_to_hit_kernel_bandwidth() <= 0 && this->_internal_update_weight_distance_cell_to_hit_kernel_bandwidth() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(8, this->_internal_update_weight_distance_cell_to_hit_kernel_bandwidth(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D)
  return target;
}

size_t TSDFRangeDataInserterOptions2D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .cartographer.mapping.proto.NormalEstimationOptions2D normal_estimation_options = 4;
  if (this->_internal_has_normal_estimation_options()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *normal_estimation_options_);
  }

  // double truncation_distance = 1;
  if (!(this->_internal_truncation_distance() <= 0 && this->_internal_truncation_distance() >= 0)) {
    total_size += 1 + 8;
  }

  // double maximum_weight = 2;
  if (!(this->_internal_maximum_weight() <= 0 && this->_internal_maximum_weight() >= 0)) {
    total_size += 1 + 8;
  }

  // bool update_free_space = 3;
  if (this->_internal_update_free_space() != 0) {
    total_size += 1 + 1;
  }

  // bool project_sdf_distance_to_scan_normal = 5;
  if (this->_internal_project_sdf_distance_to_scan_normal() != 0) {
    total_size += 1 + 1;
  }

  // int32 update_weight_range_exponent = 6;
  if (this->_internal_update_weight_range_exponent() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_update_weight_range_exponent());
  }

  // double update_weight_angle_scan_normal_to_ray_kernel_bandwidth = 7;
  if (!(this->_internal_update_weight_angle_scan_normal_to_ray_kernel_bandwidth() <= 0 && this->_internal_update_weight_angle_scan_normal_to_ray_kernel_bandwidth() >= 0)) {
    total_size += 1 + 8;
  }

  // double update_weight_distance_cell_to_hit_kernel_bandwidth = 8;
  if (!(this->_internal_update_weight_distance_cell_to_hit_kernel_bandwidth() <= 0 && this->_internal_update_weight_distance_cell_to_hit_kernel_bandwidth() >= 0)) {
    total_size += 1 + 8;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TSDFRangeDataInserterOptions2D::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    TSDFRangeDataInserterOptions2D::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TSDFRangeDataInserterOptions2D::GetClassData() const { return &_class_data_; }

void TSDFRangeDataInserterOptions2D::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<TSDFRangeDataInserterOptions2D *>(to)->MergeFrom(
      static_cast<const TSDFRangeDataInserterOptions2D &>(from));
}


void TSDFRangeDataInserterOptions2D::MergeFrom(const TSDFRangeDataInserterOptions2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_normal_estimation_options()) {
    _internal_mutable_normal_estimation_options()->::cartographer::mapping::proto::NormalEstimationOptions2D::MergeFrom(from._internal_normal_estimation_options());
  }
  if (!(from._internal_truncation_distance() <= 0 && from._internal_truncation_distance() >= 0)) {
    _internal_set_truncation_distance(from._internal_truncation_distance());
  }
  if (!(from._internal_maximum_weight() <= 0 && from._internal_maximum_weight() >= 0)) {
    _internal_set_maximum_weight(from._internal_maximum_weight());
  }
  if (from._internal_update_free_space() != 0) {
    _internal_set_update_free_space(from._internal_update_free_space());
  }
  if (from._internal_project_sdf_distance_to_scan_normal() != 0) {
    _internal_set_project_sdf_distance_to_scan_normal(from._internal_project_sdf_distance_to_scan_normal());
  }
  if (from._internal_update_weight_range_exponent() != 0) {
    _internal_set_update_weight_range_exponent(from._internal_update_weight_range_exponent());
  }
  if (!(from._internal_update_weight_angle_scan_normal_to_ray_kernel_bandwidth() <= 0 && from._internal_update_weight_angle_scan_normal_to_ray_kernel_bandwidth() >= 0)) {
    _internal_set_update_weight_angle_scan_normal_to_ray_kernel_bandwidth(from._internal_update_weight_angle_scan_normal_to_ray_kernel_bandwidth());
  }
  if (!(from._internal_update_weight_distance_cell_to_hit_kernel_bandwidth() <= 0 && from._internal_update_weight_distance_cell_to_hit_kernel_bandwidth() >= 0)) {
    _internal_set_update_weight_distance_cell_to_hit_kernel_bandwidth(from._internal_update_weight_distance_cell_to_hit_kernel_bandwidth());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TSDFRangeDataInserterOptions2D::CopyFrom(const TSDFRangeDataInserterOptions2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TSDFRangeDataInserterOptions2D::IsInitialized() const {
  return true;
}

void TSDFRangeDataInserterOptions2D::InternalSwap(TSDFRangeDataInserterOptions2D* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TSDFRangeDataInserterOptions2D, update_weight_distance_cell_to_hit_kernel_bandwidth_)
      + sizeof(TSDFRangeDataInserterOptions2D::update_weight_distance_cell_to_hit_kernel_bandwidth_)
      - PROTOBUF_FIELD_OFFSET(TSDFRangeDataInserterOptions2D, normal_estimation_options_)>(
          reinterpret_cast<char*>(&normal_estimation_options_),
          reinterpret_cast<char*>(&other->normal_estimation_options_));
}

::PROTOBUF_NAMESPACE_ID::Metadata TSDFRangeDataInserterOptions2D::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto_getter, &descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto_once,
      file_level_metadata_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D* Arena::CreateMaybeMessage< ::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
