// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nidar_interfaces:msg/DroneStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/drone_status.h"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__STRUCT_H_
#define NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__STRUCT_H_

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
// Member 'drone_id'
// Member 'role'
// Member 'flight_mode'
// Member 'mission_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DroneStatus in the package nidar_interfaces.
typedef struct nidar_interfaces__msg__DroneStatus
{
  builtin_interfaces__msg__Time timestamp;
  rosidl_runtime_c__String drone_id;
  rosidl_runtime_c__String role;
  bool connected;
  bool armed;
  rosidl_runtime_c__String flight_mode;
  float battery_percent;
  double x;
  double y;
  double z;
  double latitude;
  double longitude;
  bool communication_ok;
  bool geofence_ok;
  rosidl_runtime_c__String mission_state;
} nidar_interfaces__msg__DroneStatus;

// Struct for a sequence of nidar_interfaces__msg__DroneStatus.
typedef struct nidar_interfaces__msg__DroneStatus__Sequence
{
  nidar_interfaces__msg__DroneStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nidar_interfaces__msg__DroneStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__STRUCT_H_
