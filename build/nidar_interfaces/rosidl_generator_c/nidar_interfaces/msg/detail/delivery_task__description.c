// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nidar_interfaces:msg/DeliveryTask.idl
// generated code does not contain a copyright notice

#include "nidar_interfaces/msg/detail/delivery_task__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
const rosidl_type_hash_t *
nidar_interfaces__msg__DeliveryTask__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe1, 0x3d, 0x0b, 0x19, 0x75, 0xc1, 0x19, 0x28,
      0xd8, 0xa9, 0x67, 0x1a, 0x2f, 0xf1, 0x1b, 0xcf,
      0xf2, 0x3e, 0xca, 0x05, 0xb1, 0x95, 0x8a, 0xde,
      0x59, 0x01, 0x00, 0xc3, 0x80, 0x45, 0x70, 0xf0,
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

static char nidar_interfaces__msg__DeliveryTask__TYPE_NAME[] = "nidar_interfaces/msg/DeliveryTask";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char nidar_interfaces__msg__DeliveryTask__FIELD_NAME__timestamp[] = "timestamp";
static char nidar_interfaces__msg__DeliveryTask__FIELD_NAME__task_id[] = "task_id";
static char nidar_interfaces__msg__DeliveryTask__FIELD_NAME__survivor_id[] = "survivor_id";
static char nidar_interfaces__msg__DeliveryTask__FIELD_NAME__target_x[] = "target_x";
static char nidar_interfaces__msg__DeliveryTask__FIELD_NAME__target_y[] = "target_y";
static char nidar_interfaces__msg__DeliveryTask__FIELD_NAME__target_z[] = "target_z";
static char nidar_interfaces__msg__DeliveryTask__FIELD_NAME__target_latitude[] = "target_latitude";
static char nidar_interfaces__msg__DeliveryTask__FIELD_NAME__target_longitude[] = "target_longitude";
static char nidar_interfaces__msg__DeliveryTask__FIELD_NAME__priority[] = "priority";
static char nidar_interfaces__msg__DeliveryTask__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field nidar_interfaces__msg__DeliveryTask__FIELDS[] = {
  {
    {nidar_interfaces__msg__DeliveryTask__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryTask__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryTask__FIELD_NAME__survivor_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryTask__FIELD_NAME__target_x, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryTask__FIELD_NAME__target_y, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryTask__FIELD_NAME__target_z, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryTask__FIELD_NAME__target_latitude, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryTask__FIELD_NAME__target_longitude, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryTask__FIELD_NAME__priority, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DeliveryTask__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nidar_interfaces__msg__DeliveryTask__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nidar_interfaces__msg__DeliveryTask__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nidar_interfaces__msg__DeliveryTask__TYPE_NAME, 33, 33},
      {nidar_interfaces__msg__DeliveryTask__FIELDS, 10, 10},
    },
    {nidar_interfaces__msg__DeliveryTask__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "float64 target_x\n"
  "float64 target_y\n"
  "float64 target_z\n"
  "\n"
  "float64 target_latitude\n"
  "float64 target_longitude\n"
  "\n"
  "uint8 priority\n"
  "\n"
  "string status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nidar_interfaces__msg__DeliveryTask__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nidar_interfaces__msg__DeliveryTask__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 202, 202},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nidar_interfaces__msg__DeliveryTask__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nidar_interfaces__msg__DeliveryTask__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
