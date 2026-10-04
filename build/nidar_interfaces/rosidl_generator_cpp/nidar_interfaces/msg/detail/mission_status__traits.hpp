// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nidar_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/mission_status.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nidar_interfaces/msg/detail/mission_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace nidar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: survivors_detected
  {
    out << "survivors_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.survivors_detected, out);
    out << ", ";
  }

  // member: survivors_geotagged
  {
    out << "survivors_geotagged: ";
    rosidl_generator_traits::value_to_yaml(msg.survivors_geotagged, out);
    out << ", ";
  }

  // member: deliveries_pending
  {
    out << "deliveries_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.deliveries_pending, out);
    out << ", ";
  }

  // member: deliveries_completed
  {
    out << "deliveries_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.deliveries_completed, out);
    out << ", ";
  }

  // member: completion_percent
  {
    out << "completion_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.completion_percent, out);
    out << ", ";
  }

  // member: elapsed_time_sec
  {
    out << "elapsed_time_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_time_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionStatus & msg,
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

  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: survivors_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "survivors_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.survivors_detected, out);
    out << "\n";
  }

  // member: survivors_geotagged
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "survivors_geotagged: ";
    rosidl_generator_traits::value_to_yaml(msg.survivors_geotagged, out);
    out << "\n";
  }

  // member: deliveries_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deliveries_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.deliveries_pending, out);
    out << "\n";
  }

  // member: deliveries_completed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deliveries_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.deliveries_completed, out);
    out << "\n";
  }

  // member: completion_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completion_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.completion_percent, out);
    out << "\n";
  }

  // member: elapsed_time_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elapsed_time_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_time_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionStatus & msg, bool use_flow_style = false)
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
  const nidar_interfaces::msg::MissionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  nidar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nidar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const nidar_interfaces::msg::MissionStatus & msg)
{
  return nidar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nidar_interfaces::msg::MissionStatus>()
{
  return "nidar_interfaces::msg::MissionStatus";
}

template<>
inline const char * name<nidar_interfaces::msg::MissionStatus>()
{
  return "nidar_interfaces/msg/MissionStatus";
}

template<>
struct has_fixed_size<nidar_interfaces::msg::MissionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nidar_interfaces::msg::MissionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nidar_interfaces::msg::MissionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NIDAR_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_
