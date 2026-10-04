// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nidar_interfaces:msg/DeliveryResult.idl
// generated code does not contain a copyright notice

#include "nidar_interfaces/msg/detail/delivery_result__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
const rosidl_type_hash_t *
nidar_interfaces__msg__DeliveryResult__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0xce, 0xca, 0xf8, 0xa3, 0x32, 0x12, 0xdd,
      0x83, 0x31, 0x55, 0x90, 0xd6, 0xf4, 0x9e, 0xab,
      0xa1, 0x8c, 0x4f, 0x7b, 0x0d, 0xdf, 0x9e, 0x54,
      0xb2, 0xdb, 0xee, 0xed, 0x76, 0xd8, 0x12, 0x20,
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

static char nidar_interfaces__msg__DeliveryResult__TYPE_NAME[] = "nidar_interfaces/msg/DeliveryResult";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char nidar_interfaces__msg__DeliveryResult__FIELD_NAME__timestamp[] = "timestamp";
static char nidar_interfaces__msg__DeliveryResult__FIELD_NAME__task_id[] = "task_id";
static char nidar_interfaces__msg__DeliveryResult__FIELD_NAME__survivor_id[] = "survivor_id";
static char nidar_interfaces__msg__DeliveryResult__FIELD_NAME__success[] = "success";
static char nidar_interfaces__msg__DeliveryResult__FIELD_NAME__drop_x[] = "drop_x";
static char nidar_interfaces__msg__DeliveryResult__FIELD_NAME__drop_y[] = "drop_y";
static char nidar_interfaces__msg__DeliveryResult__FIELD_NAME__drop_z[] = "drop_z";
static char nidar_interfaces__msg__DeliveryResult__FIELD_NAME__horizontal_error_m[] = "horizontal_error_m";
static char nidar_interfaces__msg__DeliveryResult__FIELD_NAME__accuracy_zone[] = "accuracy_zone";
static char nidar_interfaces__msg__DeliveryResult__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field nidar_interfaces__msg__DeliveryResult__FIELDS[] = {
  {
    {nidar_interfaces__msg__DeliveryResult__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryResult__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryResult__FIELD_NAME__survivor_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryResult__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryResult__FIELD_NAME__drop_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryResult__FIELD_NAME__drop_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryResult__FIELD_NAME__drop_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryResult__FIELD_NAME__horizontal_error_m, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryResult__FIELD_NAME__accuracy_zone, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryResult__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nidar_interfaces__msg__DeliveryResult__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nidar_interfaces__msg__DeliveryResult__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nidar_interfaces__msg__DeliveryResult__TYPE_NAME, 35, 35},
      {nidar_interfaces__msg__DeliveryResult__FIELDS, 10, 10},
    },
    {nidar_interfaces__msg__DeliveryResult__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "uint32 task_id\n"
  "uint32 survivor_id\n"
  "\n"
  "bool success\n"
  "\n"
  "float64 drop_x\n"
  "float64 drop_y\n"
  "float64 drop_z\n"
  "\n"
  "float64 horizontal_error_m\n"
  "\n"
  "uint8 accuracy_zone\n"
  "\n"
  "string status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nidar_interfaces__msg__DeliveryResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nidar_interfaces__msg__DeliveryResult__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 193, 193},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nidar_interfaces__msg__DeliveryResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nidar_interfaces__msg__DeliveryResult__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
