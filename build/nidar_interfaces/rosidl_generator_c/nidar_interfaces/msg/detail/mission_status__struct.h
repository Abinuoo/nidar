// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nidar_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/mission_status.h"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
#define NIDAR_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'mission_id'
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionStatus in the package nidar_interfaces.
typedef struct nidar_interfaces__msg__MissionStatus
{
  builtin_interfaces__msg__Time timestamp;
  rosidl_runtime_c__String mission_id;
  rosidl_runtime_c__String state;
  uint32_t survivors_detected;
  uint32_t survivors_geotagged;
  uint32_t deliveries_pending;
  uint32_t deliveries_completed;
  float completion_percent;
  float elapsed_time_sec;
} nidar_interfaces__msg__MissionStatus;

// Struct for a sequence of nidar_interfaces__msg__MissionStatus.
typedef struct nidar_interfaces__msg__MissionStatus__Sequence
{
  nidar_interfaces__msg__MissionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nidar_interfaces__msg__MissionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIDAR_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
