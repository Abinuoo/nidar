// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nidar_interfaces:msg/DeliveryResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/delivery_result.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_RESULT__TRAITS_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nidar_interfaces/msg/detail/delivery_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace nidar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeliveryResult & msg,
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

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: drop_x
  {
    out << "drop_x: ";
    rosidl_generator_traits::value_to_yaml(msg.drop_x, out);
    out << ", ";
  }

  // member: drop_y
  {
    out << "drop_y: ";
    rosidl_generator_traits::value_to_yaml(msg.drop_y, out);
    out << ", ";
  }

  // member: drop_z
  {
    out << "drop_z: ";
    rosidl_generator_traits::value_to_yaml(msg.drop_z, out);
    out << ", ";
  }

  // member: horizontal_error_m
  {
    out << "horizontal_error_m: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_error_m, out);
    out << ", ";
  }

  // member: accuracy_zone
  {
    out << "accuracy_zone: ";
    rosidl_generator_traits::value_to_yaml(msg.accuracy_zone, out);
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
  const DeliveryResult & msg,
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

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: drop_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drop_x: ";
    rosidl_generator_traits::value_to_yaml(msg.drop_x, out);
    out << "\n";
  }

  // member: drop_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drop_y: ";
    rosidl_generator_traits::value_to_yaml(msg.drop_y, out);
    out << "\n";
  }

  // member: drop_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drop_z: ";
    rosidl_generator_traits::value_to_yaml(msg.drop_z, out);
    out << "\n";
  }

  // member: horizontal_error_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_error_m: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_error_m, out);
    out << "\n";
  }

  // member: accuracy_zone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy_zone: ";
    rosidl_generator_traits::value_to_yaml(msg.accuracy_zone, out);
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

inline std::string to_yaml(const DeliveryResult & msg, bool use_flow_style = false)
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
  const nidar_interfaces::msg::DeliveryResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  nidar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nidar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const nidar_interfaces::msg::DeliveryResult & msg)
{
  return nidar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nidar_interfaces::msg::DeliveryResult>()
{
  return "nidar_interfaces::msg::DeliveryResult";
}

template<>
inline const char * name<nidar_interfaces::msg::DeliveryResult>()
{
  return "nidar_interfaces/msg/DeliveryResult";
}

template<>
struct has_fixed_size<nidar_interfaces::msg::DeliveryResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nidar_interfaces::msg::DeliveryResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nidar_interfaces::msg::DeliveryResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_RESULT__TRAITS_HPP_
