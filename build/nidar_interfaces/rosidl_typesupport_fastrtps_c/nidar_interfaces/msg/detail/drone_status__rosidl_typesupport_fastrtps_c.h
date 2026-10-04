// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from nidar_interfaces:msg/DroneStatus.idl
// generated code does not contain a copyright notice
#ifndef NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "nidar_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nidar_interfaces/msg/detail/drone_status__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
bool cdr_serialize_nidar_interfaces__msg__DroneStatus(
  const nidar_interfaces__msg__DroneStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
bool cdr_deserialize_nidar_interfaces__msg__DroneStatus(
  eprosima::fastcdr::Cdr &,
  nidar_interfaces__msg__DroneStatus * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
size_t get_serialized_size_nidar_interfaces__msg__DroneStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
size_t max_serialized_size_nidar_interfaces__msg__DroneStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
bool cdr_serialize_key_nidar_interfaces__msg__DroneStatus(
  const nidar_interfaces__msg__DroneStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
size_t get_serialized_size_key_nidar_interfaces__msg__DroneStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
size_t max_serialized_size_key_nidar_interfaces__msg__DroneStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nidar_interfaces, msg, DroneStatus)();

#ifdef __cplusplus
}
#endif

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
