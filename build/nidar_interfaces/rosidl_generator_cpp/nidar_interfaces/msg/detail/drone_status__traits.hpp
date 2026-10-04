// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nidar_interfaces:msg/DroneStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/drone_status.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__TRAITS_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nidar_interfaces/msg/detail/drone_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace nidar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DroneStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: drone_id
  {
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << ", ";
  }

  // member: role
  {
    out << "role: ";
    rosidl_generator_traits::value_to_yaml(msg.role, out);
    out << ", ";
  }

  // member: connected
  {
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
    out << ", ";
  }

  // member: armed
  {
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << ", ";
  }

  // member: flight_mode
  {
    out << "flight_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_mode, out);
    out << ", ";
  }

  // member: battery_percent
  {
    out << "battery_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percent, out);
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

  // member: communication_ok
  {
    out << "communication_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.communication_ok, out);
    out << ", ";
  }

  // member: geofence_ok
  {
    out << "geofence_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_ok, out);
    out << ", ";
  }

  // member: mission_state
  {
    out << "mission_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DroneStatus & msg,
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

  // member: drone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << "\n";
  }

  // member: role
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "role: ";
    rosidl_generator_traits::value_to_yaml(msg.role, out);
    out << "\n";
  }

  // member: connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
    out << "\n";
  }

  // member: armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << "\n";
  }

  // member: flight_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flight_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_mode, out);
    out << "\n";
  }

  // member: battery_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percent, out);
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

  // member: communication_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "communication_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.communication_ok, out);
    out << "\n";
  }

  // member: geofence_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geofence_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_ok, out);
    out << "\n";
  }

  // member: mission_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DroneStatus & msg, bool use_flow_style = false)
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
  const nidar_interfaces::msg::DroneStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  nidar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nidar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const nidar_interfaces::msg::DroneStatus & msg)
{
  return nidar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nidar_interfaces::msg::DroneStatus>()
{
  return "nidar_interfaces::msg::DroneStatus";
}

template<>
inline const char * name<nidar_interfaces::msg::DroneStatus>()
{
  return "nidar_interfaces/msg/DroneStatus";
}

template<>
struct has_fixed_size<nidar_interfaces::msg::DroneStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nidar_interfaces::msg::DroneStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nidar_interfaces::msg::DroneStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__TRAITS_HPP_
