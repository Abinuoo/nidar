// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nidar_interfaces:msg/DeliveryTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/delivery_task.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_TASK__BUILDER_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nidar_interfaces/msg/detail/delivery_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nidar_interfaces
{

namespace msg
{

namespace builder
{

class Init_DeliveryTask_status
{
public:
  explicit Init_DeliveryTask_status(::nidar_interfaces::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  ::nidar_interfaces::msg::DeliveryTask status(::nidar_interfaces::msg::DeliveryTask::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_priority
{
public:
  explicit Init_DeliveryTask_priority(::nidar_interfaces::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_status priority(::nidar_interfaces::msg::DeliveryTask::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_DeliveryTask_status(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_target_longitude
{
public:
  explicit Init_DeliveryTask_target_longitude(::nidar_interfaces::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_priority target_longitude(::nidar_interfaces::msg::DeliveryTask::_target_longitude_type arg)
  {
    msg_.target_longitude = std::move(arg);
    return Init_DeliveryTask_priority(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_target_latitude
{
public:
  explicit Init_DeliveryTask_target_latitude(::nidar_interfaces::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_target_longitude target_latitude(::nidar_interfaces::msg::DeliveryTask::_target_latitude_type arg)
  {
    msg_.target_latitude = std::move(arg);
    return Init_DeliveryTask_target_longitude(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_target_z
{
public:
  explicit Init_DeliveryTask_target_z(::nidar_interfaces::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_target_latitude target_z(::nidar_interfaces::msg::DeliveryTask::_target_z_type arg)
  {
    msg_.target_z = std::move(arg);
    return Init_DeliveryTask_target_latitude(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_target_y
{
public:
  explicit Init_DeliveryTask_target_y(::nidar_interfaces::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_target_z target_y(::nidar_interfaces::msg::DeliveryTask::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_DeliveryTask_target_z(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_target_x
{
public:
  explicit Init_DeliveryTask_target_x(::nidar_interfaces::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_target_y target_x(::nidar_interfaces::msg::DeliveryTask::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_DeliveryTask_target_y(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_survivor_id
{
public:
  explicit Init_DeliveryTask_survivor_id(::nidar_interfaces::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_target_x survivor_id(::nidar_interfaces::msg::DeliveryTask::_survivor_id_type arg)
  {
    msg_.survivor_id = std::move(arg);
    return Init_DeliveryTask_target_x(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_task_id
{
public:
  explicit Init_DeliveryTask_task_id(::nidar_interfaces::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_survivor_id task_id(::nidar_interfaces::msg::DeliveryTask::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_DeliveryTask_survivor_id(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_timestamp
{
public:
  Init_DeliveryTask_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryTask_task_id timestamp(::nidar_interfaces::msg::DeliveryTask::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DeliveryTask_task_id(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryTask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nidar_interfaces::msg::DeliveryTask>()
{
  return nidar_interfaces::msg::builder::Init_DeliveryTask_timestamp();
}

}  // namespace nidar_interfaces

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_TASK__BUILDER_HPP_
