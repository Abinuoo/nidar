// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nidar_interfaces:msg/SurvivorDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/survivor_detection.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__SURVIVOR_DETECTION__BUILDER_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__SURVIVOR_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nidar_interfaces/msg/detail/survivor_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nidar_interfaces
{

namespace msg
{

namespace builder
{

class Init_SurvivorDetection_geotag_valid
{
public:
  explicit Init_SurvivorDetection_geotag_valid(::nidar_interfaces::msg::SurvivorDetection & msg)
  : msg_(msg)
  {}
  ::nidar_interfaces::msg::SurvivorDetection geotag_valid(::nidar_interfaces::msg::SurvivorDetection::_geotag_valid_type arg)
  {
    msg_.geotag_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nidar_interfaces::msg::SurvivorDetection msg_;
};

class Init_SurvivorDetection_confidence
{
public:
  explicit Init_SurvivorDetection_confidence(::nidar_interfaces::msg::SurvivorDetection & msg)
  : msg_(msg)
  {}
  Init_SurvivorDetection_geotag_valid confidence(::nidar_interfaces::msg::SurvivorDetection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_SurvivorDetection_geotag_valid(msg_);
  }

private:
  ::nidar_interfaces::msg::SurvivorDetection msg_;
};

class Init_SurvivorDetection_longitude
{
public:
  explicit Init_SurvivorDetection_longitude(::nidar_interfaces::msg::SurvivorDetection & msg)
  : msg_(msg)
  {}
  Init_SurvivorDetection_confidence longitude(::nidar_interfaces::msg::SurvivorDetection::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_SurvivorDetection_confidence(msg_);
  }

private:
  ::nidar_interfaces::msg::SurvivorDetection msg_;
};

class Init_SurvivorDetection_latitude
{
public:
  explicit Init_SurvivorDetection_latitude(::nidar_interfaces::msg::SurvivorDetection & msg)
  : msg_(msg)
  {}
  Init_SurvivorDetection_longitude latitude(::nidar_interfaces::msg::SurvivorDetection::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_SurvivorDetection_longitude(msg_);
  }

private:
  ::nidar_interfaces::msg::SurvivorDetection msg_;
};

class Init_SurvivorDetection_z
{
public:
  explicit Init_SurvivorDetection_z(::nidar_interfaces::msg::SurvivorDetection & msg)
  : msg_(msg)
  {}
  Init_SurvivorDetection_latitude z(::nidar_interfaces::msg::SurvivorDetection::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_SurvivorDetection_latitude(msg_);
  }

private:
  ::nidar_interfaces::msg::SurvivorDetection msg_;
};

class Init_SurvivorDetection_y
{
public:
  explicit Init_SurvivorDetection_y(::nidar_interfaces::msg::SurvivorDetection & msg)
  : msg_(msg)
  {}
  Init_SurvivorDetection_z y(::nidar_interfaces::msg::SurvivorDetection::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SurvivorDetection_z(msg_);
  }

private:
  ::nidar_interfaces::msg::SurvivorDetection msg_;
};

class Init_SurvivorDetection_x
{
public:
  explicit Init_SurvivorDetection_x(::nidar_interfaces::msg::SurvivorDetection & msg)
  : msg_(msg)
  {}
  Init_SurvivorDetection_y x(::nidar_interfaces::msg::SurvivorDetection::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SurvivorDetection_y(msg_);
  }

private:
  ::nidar_interfaces::msg::SurvivorDetection msg_;
};

class Init_SurvivorDetection_source_drone
{
public:
  explicit Init_SurvivorDetection_source_drone(::nidar_interfaces::msg::SurvivorDetection & msg)
  : msg_(msg)
  {}
  Init_SurvivorDetection_x source_drone(::nidar_interfaces::msg::SurvivorDetection::_source_drone_type arg)
  {
    msg_.source_drone = std::move(arg);
    return Init_SurvivorDetection_x(msg_);
  }

private:
  ::nidar_interfaces::msg::SurvivorDetection msg_;
};

class Init_SurvivorDetection_survivor_id
{
public:
  explicit Init_SurvivorDetection_survivor_id(::nidar_interfaces::msg::SurvivorDetection & msg)
  : msg_(msg)
  {}
  Init_SurvivorDetection_source_drone survivor_id(::nidar_interfaces::msg::SurvivorDetection::_survivor_id_type arg)
  {
    msg_.survivor_id = std::move(arg);
    return Init_SurvivorDetection_source_drone(msg_);
  }

private:
  ::nidar_interfaces::msg::SurvivorDetection msg_;
};

class Init_SurvivorDetection_timestamp
{
public:
  Init_SurvivorDetection_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SurvivorDetection_survivor_id timestamp(::nidar_interfaces::msg::SurvivorDetection::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SurvivorDetection_survivor_id(msg_);
  }

private:
  ::nidar_interfaces::msg::SurvivorDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nidar_interfaces::msg::SurvivorDetection>()
{
  return nidar_interfaces::msg::builder::Init_SurvivorDetection_timestamp();
}

}  // namespace nidar_interfaces

#endif  // NIDAR_INTERFACES__MSG__DETAIL__SURVIVOR_DETECTION__BUILDER_HPP_
