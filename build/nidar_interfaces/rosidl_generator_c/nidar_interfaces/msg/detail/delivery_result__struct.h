// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nidar_interfaces:msg/DeliveryResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/delivery_result.h"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_RESULT__STRUCT_H_
#define NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_RESULT__STRUCT_H_

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

/// Struct defined in msg/DeliveryResult in the package nidar_interfaces.
typedef struct nidar_interfaces__msg__DeliveryResult
{
  builtin_interfaces__msg__Time timestamp;
  uint32_t task_id;
  uint32_t survivor_id;
  bool success;
  double drop_x;
  double drop_y;
  double drop_z;
  double horizontal_error_m;
  uint8_t accuracy_zone;
  rosidl_runtime_c__String status;
} nidar_interfaces__msg__DeliveryResult;

// Struct for a sequence of nidar_interfaces__msg__DeliveryResult.
typedef struct nidar_interfaces__msg__DeliveryResult__Sequence
{
  nidar_interfaces__msg__DeliveryResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nidar_interfaces__msg__DeliveryResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_RESULT__STRUCT_H_
