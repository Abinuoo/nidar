// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nidar_interfaces:msg/SurvivorDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/survivor_detection.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__SURVIVOR_DETECTION__TRAITS_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__SURVIVOR_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nidar_interfaces/msg/detail/survivor_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace nidar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SurvivorDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: survivor_id
  {
    out << "survivor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.survivor_id, out);
    out << ", ";
  }

  // member: source_drone
  {
    out << "source_drone: ";
    rosidl_generator_traits::value_to_yaml(msg.source_drone, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: geotag_valid
  {
    out << "geotag_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.geotag_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SurvivorDetection & msg,
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

  // member: survivor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "survivor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.survivor_id, out);
    out << "\n";
  }

  // member: source_drone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_drone: ";
    rosidl_generator_traits::value_to_yaml(msg.source_drone, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: geotag_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geotag_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.geotag_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SurvivorDetection & msg, bool use_flow_style = false)
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
  const nidar_interfaces::msg::SurvivorDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  nidar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nidar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const nidar_interfaces::msg::SurvivorDetection & msg)
{
  return nidar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nidar_interfaces::msg::SurvivorDetection>()
{
  return "nidar_interfaces::msg::SurvivorDetection";
}

template<>
inline const char * name<nidar_interfaces::msg::SurvivorDetection>()
{
  return "nidar_interfaces/msg/SurvivorDetection";
}

template<>
struct has_fixed_size<nidar_interfaces::msg::SurvivorDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nidar_interfaces::msg::SurvivorDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nidar_interfaces::msg::SurvivorDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NIDAR_INTERFACES__MSG__DETAIL__SURVIVOR_DETECTION__TRAITS_HPP_
