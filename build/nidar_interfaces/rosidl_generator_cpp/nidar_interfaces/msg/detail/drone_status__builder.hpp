// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nidar_interfaces:msg/DroneStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/drone_status.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__BUILDER_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nidar_interfaces/msg/detail/drone_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nidar_interfaces
{

namespace msg
{

namespace builder
{

class Init_DroneStatus_mission_state
{
public:
  explicit Init_DroneStatus_mission_state(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  ::nidar_interfaces::msg::DroneStatus mission_state(::nidar_interfaces::msg::DroneStatus::_mission_state_type arg)
  {
    msg_.mission_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_geofence_ok
{
public:
  explicit Init_DroneStatus_geofence_ok(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_mission_state geofence_ok(::nidar_interfaces::msg::DroneStatus::_geofence_ok_type arg)
  {
    msg_.geofence_ok = std::move(arg);
    return Init_DroneStatus_mission_state(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_communication_ok
{
public:
  explicit Init_DroneStatus_communication_ok(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_geofence_ok communication_ok(::nidar_interfaces::msg::DroneStatus::_communication_ok_type arg)
  {
    msg_.communication_ok = std::move(arg);
    return Init_DroneStatus_geofence_ok(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_longitude
{
public:
  explicit Init_DroneStatus_longitude(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_communication_ok longitude(::nidar_interfaces::msg::DroneStatus::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_DroneStatus_communication_ok(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_latitude
{
public:
  explicit Init_DroneStatus_latitude(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_longitude latitude(::nidar_interfaces::msg::DroneStatus::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_DroneStatus_longitude(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_z
{
public:
  explicit Init_DroneStatus_z(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_latitude z(::nidar_interfaces::msg::DroneStatus::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_DroneStatus_latitude(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_y
{
public:
  explicit Init_DroneStatus_y(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_z y(::nidar_interfaces::msg::DroneStatus::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_DroneStatus_z(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_x
{
public:
  explicit Init_DroneStatus_x(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_y x(::nidar_interfaces::msg::DroneStatus::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DroneStatus_y(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_battery_percent
{
public:
  explicit Init_DroneStatus_battery_percent(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_x battery_percent(::nidar_interfaces::msg::DroneStatus::_battery_percent_type arg)
  {
    msg_.battery_percent = std::move(arg);
    return Init_DroneStatus_x(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_flight_mode
{
public:
  explicit Init_DroneStatus_flight_mode(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_battery_percent flight_mode(::nidar_interfaces::msg::DroneStatus::_flight_mode_type arg)
  {
    msg_.flight_mode = std::move(arg);
    return Init_DroneStatus_battery_percent(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_armed
{
public:
  explicit Init_DroneStatus_armed(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_flight_mode armed(::nidar_interfaces::msg::DroneStatus::_armed_type arg)
  {
    msg_.armed = std::move(arg);
    return Init_DroneStatus_flight_mode(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_connected
{
public:
  explicit Init_DroneStatus_connected(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_armed connected(::nidar_interfaces::msg::DroneStatus::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_DroneStatus_armed(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_role
{
public:
  explicit Init_DroneStatus_role(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_connected role(::nidar_interfaces::msg::DroneStatus::_role_type arg)
  {
    msg_.role = std::move(arg);
    return Init_DroneStatus_connected(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_drone_id
{
public:
  explicit Init_DroneStatus_drone_id(::nidar_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_role drone_id(::nidar_interfaces::msg::DroneStatus::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_DroneStatus_role(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_timestamp
{
public:
  Init_DroneStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneStatus_drone_id timestamp(::nidar_interfaces::msg::DroneStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DroneStatus_drone_id(msg_);
  }

private:
  ::nidar_interfaces::msg::DroneStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nidar_interfaces::msg::DroneStatus>()
{
  return nidar_interfaces::msg::builder::Init_DroneStatus_timestamp();
}

}  // namespace nidar_interfaces

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__BUILDER_HPP_
