// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nidar_interfaces:msg/MissionScore.idl
// generated code does not contain a copyright notice

#include "nidar_interfaces/msg/detail/mission_score__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
const rosidl_type_hash_t *
nidar_interfaces__msg__MissionScore__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0x8b, 0xe0, 0x17, 0x47, 0xf7, 0x35, 0x19,
      0xfe, 0x93, 0x5c, 0x25, 0x1a, 0x2e, 0xec, 0x8c,
      0x26, 0x61, 0x3d, 0xc6, 0x9b, 0xa8, 0xfd, 0x5b,
      0xfb, 0x2e, 0xb6, 0x8a, 0x7f, 0xc6, 0xc3, 0xc7,
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

static char nidar_interfaces__msg__MissionScore__TYPE_NAME[] = "nidar_interfaces/msg/MissionScore";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char nidar_interfaces__msg__MissionScore__FIELD_NAME__timestamp[] = "timestamp";
static char nidar_interfaces__msg__MissionScore__FIELD_NAME__detection_score[] = "detection_score";
static char nidar_interfaces__msg__MissionScore__FIELD_NAME__delivery_score[] = "delivery_score";
static char nidar_interfaces__msg__MissionScore__FIELD_NAME__collaboration_score[] = "collaboration_score";
static char nidar_interfaces__msg__MissionScore__FIELD_NAME__gcs_score[] = "gcs_score";
static char nidar_interfaces__msg__MissionScore__FIELD_NAME__fast_completion_score[] = "fast_completion_score";
static char nidar_interfaces__msg__MissionScore__FIELD_NAME__penalty_score[] = "penalty_score";
static char nidar_interfaces__msg__MissionScore__FIELD_NAME__total_score[] = "total_score";
static char nidar_interfaces__msg__MissionScore__FIELD_NAME__mission_time_sec[] = "mission_time_sec";

static rosidl_runtime_c__type_description__Field nidar_interfaces__msg__MissionScore__FIELDS[] = {
  {
    {nidar_interfaces__msg__MissionScore__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionScore__FIELD_NAME__detection_score, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionScore__FIELD_NAME__delivery_score, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionScore__FIELD_NAME__collaboration_score, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionScore__FIELD_NAME__gcs_score, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionScore__FIELD_NAME__fast_completion_score, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionScore__FIELD_NAME__penalty_score, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionScore__FIELD_NAME__total_score, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__MissionScore__FIELD_NAME__mission_time_sec, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nidar_interfaces__msg__MissionScore__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nidar_interfaces__msg__MissionScore__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nidar_interfaces__msg__MissionScore__TYPE_NAME, 33, 33},
      {nidar_interfaces__msg__MissionScore__FIELDS, 9, 9},
    },
    {nidar_interfaces__msg__MissionScore__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "uint32 detection_score\n"
  "uint32 delivery_score\n"
  "\n"
  "uint32 collaboration_score\n"
  "uint32 gcs_score\n"
  "uint32 fast_completion_score\n"
  "\n"
  "int32 penalty_score\n"
  "\n"
  "uint32 total_score\n"
  "\n"
  "float32 mission_time_sec";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nidar_interfaces__msg__MissionScore__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nidar_interfaces__msg__MissionScore__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 221, 221},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nidar_interfaces__msg__MissionScore__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nidar_interfaces__msg__MissionScore__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
