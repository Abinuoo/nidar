// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nidar_interfaces:msg/DeliveryResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/delivery_result.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_RESULT__BUILDER_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nidar_interfaces/msg/detail/delivery_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nidar_interfaces
{

namespace msg
{

namespace builder
{

class Init_DeliveryResult_status
{
public:
  explicit Init_DeliveryResult_status(::nidar_interfaces::msg::DeliveryResult & msg)
  : msg_(msg)
  {}
  ::nidar_interfaces::msg::DeliveryResult status(::nidar_interfaces::msg::DeliveryResult::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryResult msg_;
};

class Init_DeliveryResult_accuracy_zone
{
public:
  explicit Init_DeliveryResult_accuracy_zone(::nidar_interfaces::msg::DeliveryResult & msg)
  : msg_(msg)
  {}
  Init_DeliveryResult_status accuracy_zone(::nidar_interfaces::msg::DeliveryResult::_accuracy_zone_type arg)
  {
    msg_.accuracy_zone = std::move(arg);
    return Init_DeliveryResult_status(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryResult msg_;
};

class Init_DeliveryResult_horizontal_error_m
{
public:
  explicit Init_DeliveryResult_horizontal_error_m(::nidar_interfaces::msg::DeliveryResult & msg)
  : msg_(msg)
  {}
  Init_DeliveryResult_accuracy_zone horizontal_error_m(::nidar_interfaces::msg::DeliveryResult::_horizontal_error_m_type arg)
  {
    msg_.horizontal_error_m = std::move(arg);
    return Init_DeliveryResult_accuracy_zone(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryResult msg_;
};

class Init_DeliveryResult_drop_z
{
public:
  explicit Init_DeliveryResult_drop_z(::nidar_interfaces::msg::DeliveryResult & msg)
  : msg_(msg)
  {}
  Init_DeliveryResult_horizontal_error_m drop_z(::nidar_interfaces::msg::DeliveryResult::_drop_z_type arg)
  {
    msg_.drop_z = std::move(arg);
    return Init_DeliveryResult_horizontal_error_m(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryResult msg_;
};

class Init_DeliveryResult_drop_y
{
public:
  explicit Init_DeliveryResult_drop_y(::nidar_interfaces::msg::DeliveryResult & msg)
  : msg_(msg)
  {}
  Init_DeliveryResult_drop_z drop_y(::nidar_interfaces::msg::DeliveryResult::_drop_y_type arg)
  {
    msg_.drop_y = std::move(arg);
    return Init_DeliveryResult_drop_z(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryResult msg_;
};

class Init_DeliveryResult_drop_x
{
public:
  explicit Init_DeliveryResult_drop_x(::nidar_interfaces::msg::DeliveryResult & msg)
  : msg_(msg)
  {}
  Init_DeliveryResult_drop_y drop_x(::nidar_interfaces::msg::DeliveryResult::_drop_x_type arg)
  {
    msg_.drop_x = std::move(arg);
    return Init_DeliveryResult_drop_y(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryResult msg_;
};

class Init_DeliveryResult_success
{
public:
  explicit Init_DeliveryResult_success(::nidar_interfaces::msg::DeliveryResult & msg)
  : msg_(msg)
  {}
  Init_DeliveryResult_drop_x success(::nidar_interfaces::msg::DeliveryResult::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DeliveryResult_drop_x(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryResult msg_;
};

class Init_DeliveryResult_survivor_id
{
public:
  explicit Init_DeliveryResult_survivor_id(::nidar_interfaces::msg::DeliveryResult & msg)
  : msg_(msg)
  {}
  Init_DeliveryResult_success survivor_id(::nidar_interfaces::msg::DeliveryResult::_survivor_id_type arg)
  {
    msg_.survivor_id = std::move(arg);
    return Init_DeliveryResult_success(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryResult msg_;
};

class Init_DeliveryResult_task_id
{
public:
  explicit Init_DeliveryResult_task_id(::nidar_interfaces::msg::DeliveryResult & msg)
  : msg_(msg)
  {}
  Init_DeliveryResult_survivor_id task_id(::nidar_interfaces::msg::DeliveryResult::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_DeliveryResult_survivor_id(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryResult msg_;
};

class Init_DeliveryResult_timestamp
{
public:
  Init_DeliveryResult_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryResult_task_id timestamp(::nidar_interfaces::msg::DeliveryResult::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DeliveryResult_task_id(msg_);
  }

private:
  ::nidar_interfaces::msg::DeliveryResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nidar_interfaces::msg::DeliveryResult>()
{
  return nidar_interfaces::msg::builder::Init_DeliveryResult_timestamp();
}

}  // namespace nidar_interfaces

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_RESULT__BUILDER_HPP_
