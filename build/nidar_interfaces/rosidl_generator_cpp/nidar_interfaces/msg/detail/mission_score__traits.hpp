// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nidar_interfaces:msg/MissionScore.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/mission_score.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__TRAITS_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nidar_interfaces/msg/detail/mission_score__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace nidar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionScore & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: detection_score
  {
    out << "detection_score: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_score, out);
    out << ", ";
  }

  // member: delivery_score
  {
    out << "delivery_score: ";
    rosidl_generator_traits::value_to_yaml(msg.delivery_score, out);
    out << ", ";
  }

  // member: collaboration_score
  {
    out << "collaboration_score: ";
    rosidl_generator_traits::value_to_yaml(msg.collaboration_score, out);
    out << ", ";
  }

  // member: gcs_score
  {
    out << "gcs_score: ";
    rosidl_generator_traits::value_to_yaml(msg.gcs_score, out);
    out << ", ";
  }

  // member: fast_completion_score
  {
    out << "fast_completion_score: ";
    rosidl_generator_traits::value_to_yaml(msg.fast_completion_score, out);
    out << ", ";
  }

  // member: penalty_score
  {
    out << "penalty_score: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty_score, out);
    out << ", ";
  }

  // member: total_score
  {
    out << "total_score: ";
    rosidl_generator_traits::value_to_yaml(msg.total_score, out);
    out << ", ";
  }

  // member: mission_time_sec
  {
    out << "mission_time_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_time_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionScore & msg,
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

  // member: detection_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection_score: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_score, out);
    out << "\n";
  }

  // member: delivery_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delivery_score: ";
    rosidl_generator_traits::value_to_yaml(msg.delivery_score, out);
    out << "\n";
  }

  // member: collaboration_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collaboration_score: ";
    rosidl_generator_traits::value_to_yaml(msg.collaboration_score, out);
    out << "\n";
  }

  // member: gcs_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gcs_score: ";
    rosidl_generator_traits::value_to_yaml(msg.gcs_score, out);
    out << "\n";
  }

  // member: fast_completion_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fast_completion_score: ";
    rosidl_generator_traits::value_to_yaml(msg.fast_completion_score, out);
    out << "\n";
  }

  // member: penalty_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "penalty_score: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty_score, out);
    out << "\n";
  }

  // member: total_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_score: ";
    rosidl_generator_traits::value_to_yaml(msg.total_score, out);
    out << "\n";
  }

  // member: mission_time_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_time_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_time_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionScore & msg, bool use_flow_style = false)
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
  const nidar_interfaces::msg::MissionScore & msg,
  std::ostream & out, size_t indentation = 0)
{
  nidar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nidar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const nidar_interfaces::msg::MissionScore & msg)
{
  return nidar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nidar_interfaces::msg::MissionScore>()
{
  return "nidar_interfaces::msg::MissionScore";
}

template<>
inline const char * name<nidar_interfaces::msg::MissionScore>()
{
  return "nidar_interfaces/msg/MissionScore";
}

template<>
struct has_fixed_size<nidar_interfaces::msg::MissionScore>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<nidar_interfaces::msg::MissionScore>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<nidar_interfaces::msg::MissionScore>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__TRAITS_HPP_
