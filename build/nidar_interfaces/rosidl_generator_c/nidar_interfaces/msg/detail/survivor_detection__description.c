// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nidar_interfaces:msg/SurvivorDetection.idl
// generated code does not contain a copyright notice

#include "nidar_interfaces/msg/detail/survivor_detection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
const rosidl_type_hash_t *
nidar_interfaces__msg__SurvivorDetection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7c, 0x19, 0x85, 0x9f, 0xeb, 0x20, 0x25, 0xe1,
      0x67, 0x98, 0xaf, 0x8e, 0x17, 0x28, 0x7d, 0x4e,
      0x8a, 0x42, 0xfb, 0x78, 0x7e, 0x8d, 0x5d, 0x11,
      0x34, 0x7a, 0x8c, 0x8c, 0x5b, 0x46, 0xfd, 0x92,
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

static char nidar_interfaces__msg__SurvivorDetection__TYPE_NAME[] = "nidar_interfaces/msg/SurvivorDetection";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__timestamp[] = "timestamp";
static char nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__survivor_id[] = "survivor_id";
static char nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__source_drone[] = "source_drone";
static char nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__x[] = "x";
static char nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__y[] = "y";
static char nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__z[] = "z";
static char nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__latitude[] = "latitude";
static char nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__longitude[] = "longitude";
static char nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__confidence[] = "confidence";
static char nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__geotag_valid[] = "geotag_valid";

static rosidl_runtime_c__type_description__Field nidar_interfaces__msg__SurvivorDetection__FIELDS[] = {
  {
    {nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__survivor_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__source_drone, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__SurvivorDetection__FIELD_NAME__geotag_valid, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nidar_interfaces__msg__SurvivorDetection__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nidar_interfaces__msg__SurvivorDetection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nidar_interfaces__msg__SurvivorDetection__TYPE_NAME, 38, 38},
      {nidar_interfaces__msg__SurvivorDetection__FIELDS, 10, 10},
    },
    {nidar_interfaces__msg__SurvivorDetection__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "uint32 survivor_id\n"
  "string source_drone\n"
  "\n"
  "float64 x\n"
  "float64 y\n"
  "float64 z\n"
  "\n"
  "float64 latitude\n"
  "float64 longitude\n"
  "\n"
  "float32 confidence\n"
  "\n"
  "bool geotag_valid";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nidar_interfaces__msg__SurvivorDetection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nidar_interfaces__msg__SurvivorDetection__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 180, 180},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nidar_interfaces__msg__SurvivorDetection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nidar_interfaces__msg__SurvivorDetection__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
