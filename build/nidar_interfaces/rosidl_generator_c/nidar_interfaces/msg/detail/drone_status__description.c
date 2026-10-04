// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nidar_interfaces:msg/DroneStatus.idl
// generated code does not contain a copyright notice

#include "nidar_interfaces/msg/detail/drone_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
const rosidl_type_hash_t *
nidar_interfaces__msg__DroneStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0x04, 0xd9, 0x08, 0xce, 0x45, 0x33, 0xe4,
      0x52, 0x5a, 0x5a, 0xbf, 0x17, 0x95, 0xbf, 0xd2,
      0xb8, 0x88, 0x72, 0xf9, 0x0f, 0xb5, 0x68, 0x6c,
      0x8f, 0x27, 0x57, 0xc9, 0x68, 0x73, 0xdc, 0x39,
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

static char nidar_interfaces__msg__DroneStatus__TYPE_NAME[] = "nidar_interfaces/msg/DroneStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__timestamp[] = "timestamp";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__drone_id[] = "drone_id";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__role[] = "role";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__connected[] = "connected";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__armed[] = "armed";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__flight_mode[] = "flight_mode";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__battery_percent[] = "battery_percent";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__x[] = "x";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__y[] = "y";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__z[] = "z";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__latitude[] = "latitude";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__longitude[] = "longitude";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__communication_ok[] = "communication_ok";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__geofence_ok[] = "geofence_ok";
static char nidar_interfaces__msg__DroneStatus__FIELD_NAME__mission_state[] = "mission_state";

static rosidl_runtime_c__type_description__Field nidar_interfaces__msg__DroneStatus__FIELDS[] = {
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__drone_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__role, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__connected, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__armed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__flight_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__battery_percent, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__communication_ok, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__geofence_ok, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nidar_interfaces__msg__DroneStatus__FIELD_NAME__mission_state, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nidar_interfaces__msg__DroneStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nidar_interfaces__msg__DroneStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nidar_interfaces__msg__DroneStatus__TYPE_NAME, 32, 32},
      {nidar_interfaces__msg__DroneStatus__FIELDS, 15, 15},
    },
    {nidar_interfaces__msg__DroneStatus__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "string drone_id\n"
  "string role\n"
  "\n"
  "bool connected\n"
  "bool armed\n"
  "\n"
  "string flight_mode\n"
  "\n"
  "float32 battery_percent\n"
  "\n"
  "float64 x\n"
  "float64 y\n"
  "float64 z\n"
  "\n"
  "float64 latitude\n"
  "float64 longitude\n"
  "\n"
  "bool communication_ok\n"
  "bool geofence_ok\n"
  "\n"
  "string mission_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nidar_interfaces__msg__DroneStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nidar_interfaces__msg__DroneStatus__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 264, 264},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nidar_interfaces__msg__DroneStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nidar_interfaces__msg__DroneStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
