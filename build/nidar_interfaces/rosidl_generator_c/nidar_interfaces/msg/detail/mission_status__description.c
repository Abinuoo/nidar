// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nidar_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#include "nidar_interfaces/msg/detail/mission_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
const rosidl_type_hash_t *
nidar_interfaces__msg__MissionStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x4c, 0x94, 0x62, 0x5c, 0x10, 0x76, 0x3b,
      0x10, 0x6b, 0xac, 0xfd, 0xfe, 0x4e, 0x17, 0xcd,
      0x2c, 0x05, 0x8d, 0xfb, 0xc3, 0xfe, 0x0b, 0x48,
      0x9d, 0x56, 0x77, 0xad, 0x1f, 0x9f, 0xa3, 0xa7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char nidar_interfaces__msg__MissionStatus__TYPE_NAME[] = "nidar_interfaces/msg/MissionStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char nidar_interfaces__msg__MissionStatus__FIELD_NAME__timestamp[] = "timestamp";
static char nidar_interfaces__msg__MissionStatus__FIELD_NAME__mission_id[] = "mission_id";
static char nidar_interfaces__msg__MissionStatus__FIELD_NAME__state[] = "state";
static char nidar_interfaces__msg__MissionStatus__FIELD_NAME__survivors_detected[] = "survivors_detected";
static char nidar_interfaces__msg__MissionStatus__FIELD_NAME__survivors_geotagged[] = "survivors_geotagged";
static char nidar_interfaces__msg__MissionStatus__FIELD_NAME__deliveries_pending[] = "deliveries_pending";
static char nidar_interfaces__msg__MissionStatus__FIELD_NAME__deliveries_completed[] = "deliveries_completed";
static char nidar_interfaces__msg__MissionStatus__FIELD_NAME__completion_percent[] = "completion_percent";
static char nidar_interfaces__msg__MissionStatus__FIELD_NAME__elapsed_time_sec[] = "elapsed_time_sec";

static rosidl_runtime_c__type_description__Field nidar_interfaces__msg__MissionStatus__FIELDS[] = {
  {
    {nidar_interfaces__msg__MissionStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionStatus__FIELD_NAME__mission_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionStatus__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionStatus__FIELD_NAME__survivors_detected, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionStatus__FIELD_NAME__survivors_geotagged, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionStatus__FIELD_NAME__deliveries_pending, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionStatus__FIELD_NAME__deliveries_completed, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionStatus__FIELD_NAME__completion_percent, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionStatus__FIELD_NAME__elapsed_time_sec, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nidar_interfaces__msg__MissionStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nidar_interfaces__msg__MissionStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nidar_interfaces__msg__MissionStatus__TYPE_NAME, 34, 34},
      {nidar_interfaces__msg__MissionStatus__FIELDS, 9, 9},
    },
    {nidar_interfaces__msg__MissionStatus__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time timestamp\n"
  "\n"
  "string mission_id\n"
  "string state\n"
  "\n"
  "uint32 survivors_detected\n"
  "uint32 survivors_geotagged\n"
  "uint32 deliveries_pending\n"
  "uint32 deliveries_completed\n"
  "\n"
  "float32 completion_percent\n"
  "\n"
  "float32 elapsed_time_sec";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nidar_interfaces__msg__MissionStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nidar_interfaces__msg__MissionStatus__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 228, 228},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nidar_interfaces__msg__MissionStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nidar_interfaces__msg__MissionStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
