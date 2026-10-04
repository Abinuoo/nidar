// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nidar_interfaces:msg/MissionScore.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/mission_score.h"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__STRUCT_H_
#define NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__STRUCT_H_

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

/// Struct defined in msg/MissionScore in the package nidar_interfaces.
typedef struct nidar_interfaces__msg__MissionScore
{
  builtin_interfaces__msg__Time timestamp;
  uint32_t detection_score;
  uint32_t delivery_score;
  uint32_t collaboration_score;
  uint32_t gcs_score;
  uint32_t fast_completion_score;
  int32_t penalty_score;
  uint32_t total_score;
  float mission_time_sec;
} nidar_interfaces__msg__MissionScore;

// Struct for a sequence of nidar_interfaces__msg__MissionScore.
typedef struct nidar_interfaces__msg__MissionScore__Sequence
{
  nidar_interfaces__msg__MissionScore * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nidar_interfaces__msg__MissionScore__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__STRUCT_H_
