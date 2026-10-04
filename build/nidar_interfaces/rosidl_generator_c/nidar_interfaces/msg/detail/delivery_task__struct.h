// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nidar_interfaces:msg/DeliveryTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/delivery_task.h"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_TASK__STRUCT_H_
#define NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_TASK__STRUCT_H_

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
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DeliveryTask in the package nidar_interfaces.
typedef struct nidar_interfaces__msg__DeliveryTask
{
  builtin_interfaces__msg__Time timestamp;
  uint32_t task_id;
  uint32_t survivor_id;
  double target_x;
  double target_y;
  double target_z;
  double target_latitude;
  double target_longitude;
  uint8_t priority;
  rosidl_runtime_c__String status;
} nidar_interfaces__msg__DeliveryTask;

// Struct for a sequence of nidar_interfaces__msg__DeliveryTask.
typedef struct nidar_interfaces__msg__DeliveryTask__Sequence
{
  nidar_interfaces__msg__DeliveryTask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nidar_interfaces__msg__DeliveryTask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_TASK__STRUCT_H_
