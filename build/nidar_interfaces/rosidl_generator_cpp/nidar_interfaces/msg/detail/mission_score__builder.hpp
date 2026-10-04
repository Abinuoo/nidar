// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nidar_interfaces:msg/MissionScore.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/mission_score.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__BUILDER_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nidar_interfaces/msg/detail/mission_score__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nidar_interfaces
{

namespace msg
{

namespace builder
{

class Init_MissionScore_mission_time_sec
{
public:
  explicit Init_MissionScore_mission_time_sec(::nidar_interfaces::msg::MissionScore & msg)
  : msg_(msg)
  {}
  ::nidar_interfaces::msg::MissionScore mission_time_sec(::nidar_interfaces::msg::MissionScore::_mission_time_sec_type arg)
  {
    msg_.mission_time_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionScore msg_;
};

class Init_MissionScore_total_score
{
public:
  explicit Init_MissionScore_total_score(::nidar_interfaces::msg::MissionScore & msg)
  : msg_(msg)
  {}
  Init_MissionScore_mission_time_sec total_score(::nidar_interfaces::msg::MissionScore::_total_score_type arg)
  {
    msg_.total_score = std::move(arg);
    return Init_MissionScore_mission_time_sec(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionScore msg_;
};

class Init_MissionScore_penalty_score
{
public:
  explicit Init_MissionScore_penalty_score(::nidar_interfaces::msg::MissionScore & msg)
  : msg_(msg)
  {}
  Init_MissionScore_total_score penalty_score(::nidar_interfaces::msg::MissionScore::_penalty_score_type arg)
  {
    msg_.penalty_score = std::move(arg);
    return Init_MissionScore_total_score(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionScore msg_;
};

class Init_MissionScore_fast_completion_score
{
public:
  explicit Init_MissionScore_fast_completion_score(::nidar_interfaces::msg::MissionScore & msg)
  : msg_(msg)
  {}
  Init_MissionScore_penalty_score fast_completion_score(::nidar_interfaces::msg::MissionScore::_fast_completion_score_type arg)
  {
    msg_.fast_completion_score = std::move(arg);
    return Init_MissionScore_penalty_score(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionScore msg_;
};

class Init_MissionScore_gcs_score
{
public:
  explicit Init_MissionScore_gcs_score(::nidar_interfaces::msg::MissionScore & msg)
  : msg_(msg)
  {}
  Init_MissionScore_fast_completion_score gcs_score(::nidar_interfaces::msg::MissionScore::_gcs_score_type arg)
  {
    msg_.gcs_score = std::move(arg);
    return Init_MissionScore_fast_completion_score(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionScore msg_;
};

class Init_MissionScore_collaboration_score
{
public:
  explicit Init_MissionScore_collaboration_score(::nidar_interfaces::msg::MissionScore & msg)
  : msg_(msg)
  {}
  Init_MissionScore_gcs_score collaboration_score(::nidar_interfaces::msg::MissionScore::_collaboration_score_type arg)
  {
    msg_.collaboration_score = std::move(arg);
    return Init_MissionScore_gcs_score(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionScore msg_;
};

class Init_MissionScore_delivery_score
{
public:
  explicit Init_MissionScore_delivery_score(::nidar_interfaces::msg::MissionScore & msg)
  : msg_(msg)
  {}
  Init_MissionScore_collaboration_score delivery_score(::nidar_interfaces::msg::MissionScore::_delivery_score_type arg)
  {
    msg_.delivery_score = std::move(arg);
    return Init_MissionScore_collaboration_score(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionScore msg_;
};

class Init_MissionScore_detection_score
{
public:
  explicit Init_MissionScore_detection_score(::nidar_interfaces::msg::MissionScore & msg)
  : msg_(msg)
  {}
  Init_MissionScore_delivery_score detection_score(::nidar_interfaces::msg::MissionScore::_detection_score_type arg)
  {
    msg_.detection_score = std::move(arg);
    return Init_MissionScore_delivery_score(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionScore msg_;
};

class Init_MissionScore_timestamp
{
public:
  Init_MissionScore_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionScore_detection_score timestamp(::nidar_interfaces::msg::MissionScore::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MissionScore_detection_score(msg_);
  }

private:
  ::nidar_interfaces::msg::MissionScore msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nidar_interfaces::msg::MissionScore>()
{
  return nidar_interfaces::msg::builder::Init_MissionScore_timestamp();
}

}  // namespace nidar_interfaces

#endif  // NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__BUILDER_HPP_
