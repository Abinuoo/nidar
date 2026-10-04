// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nidar_interfaces:msg/SurvivorDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/survivor_detection.h"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__SURVIVOR_DETECTION__STRUCT_H_
#define NIDAR_INTERFACES__MSG__DETAIL__SURVIVOR_DETECTION__STRUCT_H_

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
// Member 'source_drone'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SurvivorDetection in the package nidar_interfaces.
typedef struct nidar_interfaces__msg__SurvivorDetection
{
  builtin_interfaces__msg__Time timestamp;
  uint32_t survivor_id;
  rosidl_runtime_c__String source_drone;
  double x;
  double y;
  double z;
  double latitude;
  double longitude;
  float confidence;
  bool geotag_valid;
} nidar_interfaces__msg__SurvivorDetection;

// Struct for a sequence of nidar_interfaces__msg__SurvivorDetection.
typedef struct nidar_interfaces__msg__SurvivorDetection__Sequence
{
  nidar_interfaces__msg__SurvivorDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nidar_interfaces__msg__SurvivorDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIDAR_INTERFACES__MSG__DETAIL__SURVIVOR_DETECTION__STRUCT_H_
