// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nidar_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/mission_status.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nidar_interfaces/msg/detail/mission_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nidar_interfaces
{

namespace msg
{

namespace builder
{

class Init_MissionStatus_elapsed_time_sec
{
public:
  explicit Init_MissionStatus_elapsed_time_sec(::nidar_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  ::nidar_interfaces::msg::MissionStatus elapsed_time_sec(::nidar_interfaces::msg::MissionStatus::_elapsed_time_sec_type arg)
  {
    msg_.elapsed_time_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_completion_percent
{
public:
  explicit Init_MissionStatus_completion_percent(::nidar_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_elapsed_time_sec completion_percent(::nidar_interfaces::msg::MissionStatus::_completion_percent_type arg)
  {
    msg_.completion_percent = std::move(arg);
    return Init_MissionStatus_elapsed_time_sec(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_deliveries_completed
{
public:
  explicit Init_MissionStatus_deliveries_completed(::nidar_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_completion_percent deliveries_completed(::nidar_interfaces::msg::MissionStatus::_deliveries_completed_type arg)
  {
    msg_.deliveries_completed = std::move(arg);
    return Init_MissionStatus_completion_percent(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_deliveries_pending
{
public:
  explicit Init_MissionStatus_deliveries_pending(::nidar_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_deliveries_completed deliveries_pending(::nidar_interfaces::msg::MissionStatus::_deliveries_pending_type arg)
  {
    msg_.deliveries_pending = std::move(arg);
    return Init_MissionStatus_deliveries_completed(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_survivors_geotagged
{
public:
  explicit Init_MissionStatus_survivors_geotagged(::nidar_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_deliveries_pending survivors_geotagged(::nidar_interfaces::msg::MissionStatus::_survivors_geotagged_type arg)
  {
    msg_.survivors_geotagged = std::move(arg);
    return Init_MissionStatus_deliveries_pending(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_survivors_detected
{
public:
  explicit Init_MissionStatus_survivors_detected(::nidar_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_survivors_geotagged survivors_detected(::nidar_interfaces::msg::MissionStatus::_survivors_detected_type arg)
  {
    msg_.survivors_detected = std::move(arg);
    return Init_MissionStatus_survivors_geotagged(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_state
{
public:
  explicit Init_MissionStatus_state(::nidar_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_survivors_detected state(::nidar_interfaces::msg::MissionStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MissionStatus_survivors_detected(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_mission_id
{
public:
  explicit Init_MissionStatus_mission_id(::nidar_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_state mission_id(::nidar_interfaces::msg::MissionStatus::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_MissionStatus_state(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_timestamp
{
public:
  Init_MissionStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionStatus_mission_id timestamp(::nidar_interfaces::msg::MissionStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MissionStatus_mission_id(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nidar_interfaces::msg::MissionStatus>()
{
  return nidar_interfaces::msg::builder::Init_MissionStatus_timestamp();
}

}  // namespace nidar_interfaces

#endif  // NIDAR_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
