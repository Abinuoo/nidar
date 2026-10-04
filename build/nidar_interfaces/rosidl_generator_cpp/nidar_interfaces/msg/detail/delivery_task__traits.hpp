// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nidar_interfaces:msg/DeliveryTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/delivery_task.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_TASK__TRAITS_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nidar_interfaces/msg/detail/delivery_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace nidar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeliveryTask & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: survivor_id
  {
    out << "survivor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.survivor_id, out);
    out << ", ";
  }

  // member: target_x
  {
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << ", ";
  }

  // member: target_y
  {
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << ", ";
  }

  // member: target_z
  {
    out << "target_z: ";
    rosidl_generator_traits::value_to_yaml(msg.target_z, out);
    out << ", ";
  }

  // member: target_latitude
  {
    out << "target_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.target_latitude, out);
    out << ", ";
  }

  // member: target_longitude
  {
    out << "target_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.target_longitude, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeliveryTask & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: survivor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "survivor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.survivor_id, out);
    out << "\n";
  }

  // member: target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << "\n";
  }

  // member: target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << "\n";
  }

  // member: target_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_z: ";
    rosidl_generator_traits::value_to_yaml(msg.target_z, out);
    out << "\n";
  }

  // member: target_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.target_latitude, out);
    out << "\n";
  }

  // member: target_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.target_longitude, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeliveryTask & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace nidar_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use nidar_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nidar_interfaces::msg::DeliveryTask & msg,
  std::ostream & out, size_t indentation = 0)
{
  nidar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nidar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const nidar_interfaces::msg::DeliveryTask & msg)
{
  return nidar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nidar_interfaces::msg::DeliveryTask>()
{
  return "nidar_interfaces::msg::DeliveryTask";
}

template<>
inline const char * name<nidar_interfaces::msg::DeliveryTask>()
{
  return "nidar_interfaces/msg/DeliveryTask";
}

template<>
struct has_fixed_size<nidar_interfaces::msg::DeliveryTask>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nidar_interfaces::msg::DeliveryTask>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nidar_interfaces::msg::DeliveryTask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_TASK__TRAITS_HPP_
