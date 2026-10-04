// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nidar_interfaces:msg/SurvivorDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nidar_interfaces/msg/detail/survivor_detection__rosidl_typesupport_introspection_c.h"
#include "nidar_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nidar_interfaces/msg/detail/survivor_detection__functions.h"
#include "nidar_interfaces/msg/detail/survivor_detection__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `source_drone`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nidar_interfaces__msg__SurvivorDetection__init(message_memory);
}

void nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_fini_function(void * message_memory)
{
  nidar_interfaces__msg__SurvivorDetection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_message_member_array[10] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nidar_interfaces__msg__SurvivorDetection, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "survivor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nidar_interfaces__msg__SurvivorDetection, survivor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_drone",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nidar_interfaces__msg__SurvivorDetection, source_drone),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nidar_interfaces__msg__SurvivorDetection, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nidar_interfaces__msg__SurvivorDetection, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nidar_interfaces__msg__SurvivorDetection, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nidar_interfaces__msg__SurvivorDetection, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nidar_interfaces__msg__SurvivorDetection, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nidar_interfaces__msg__SurvivorDetection, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geotag_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nidar_interfaces__msg__SurvivorDetection, geotag_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_message_members = {
  "nidar_interfaces__msg",  // message namespace
  "SurvivorDetection",  // message name
  10,  // number of fields
  sizeof(nidar_interfaces__msg__SurvivorDetection),
  false,  // has_any_key_member_
  nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_message_member_array,  // message members
  nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_message_type_support_handle = {
  0,
  &nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_message_members,
  get_message_typesupport_handle_function,
  &nidar_interfaces__msg__SurvivorDetection__get_type_hash,
  &nidar_interfaces__msg__SurvivorDetection__get_type_description,
  &nidar_interfaces__msg__SurvivorDetection__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nidar_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nidar_interfaces, msg, SurvivorDetection)() {
  nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_message_type_support_handle.typesupport_identifier) {
    nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nidar_interfaces__msg__SurvivorDetection__rosidl_typesupport_introspection_c__SurvivorDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
