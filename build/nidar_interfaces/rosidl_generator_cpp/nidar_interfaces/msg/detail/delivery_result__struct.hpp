// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nidar_interfaces:msg/DeliveryResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/delivery_result.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_RESULT__STRUCT_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nidar_interfaces__msg__DeliveryResult __attribute__((deprecated))
#else
# define DEPRECATED__nidar_interfaces__msg__DeliveryResult __declspec(deprecated)
#endif

namespace nidar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeliveryResult_
{
  using Type = DeliveryResult_<ContainerAllocator>;

  explicit DeliveryResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = 0ul;
      this->survivor_id = 0ul;
      this->success = false;
      this->drop_x = 0.0;
      this->drop_y = 0.0;
      this->drop_z = 0.0;
      this->horizontal_error_m = 0.0;
      this->accuracy_zone = 0;
      this->status = "";
    }
  }

  explicit DeliveryResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = 0ul;
      this->survivor_id = 0ul;
      this->success = false;
      this->drop_x = 0.0;
      this->drop_y = 0.0;
      this->drop_z = 0.0;
      this->horizontal_error_m = 0.0;
      this->accuracy_zone = 0;
      this->status = "";
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _task_id_type =
    uint32_t;
  _task_id_type task_id;
  using _survivor_id_type =
    uint32_t;
  _survivor_id_type survivor_id;
  using _success_type =
    bool;
  _success_type success;
  using _drop_x_type =
    double;
  _drop_x_type drop_x;
  using _drop_y_type =
    double;
  _drop_y_type drop_y;
  using _drop_z_type =
    double;
  _drop_z_type drop_z;
  using _horizontal_error_m_type =
    double;
  _horizontal_error_m_type horizontal_error_m;
  using _accuracy_zone_type =
    uint8_t;
  _accuracy_zone_type accuracy_zone;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__task_id(
    const uint32_t & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__survivor_id(
    const uint32_t & _arg)
  {
    this->survivor_id = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__drop_x(
    const double & _arg)
  {
    this->drop_x = _arg;
    return *this;
  }
  Type & set__drop_y(
    const double & _arg)
  {
    this->drop_y = _arg;
    return *this;
  }
  Type & set__drop_z(
    const double & _arg)
  {
    this->drop_z = _arg;
    return *this;
  }
  Type & set__horizontal_error_m(
    const double & _arg)
  {
    this->horizontal_error_m = _arg;
    return *this;
  }
  Type & set__accuracy_zone(
    const uint8_t & _arg)
  {
    this->accuracy_zone = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nidar_interfaces::msg::DeliveryResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const nidar_interfaces::msg::DeliveryResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nidar_interfaces::msg::DeliveryResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nidar_interfaces::msg::DeliveryResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nidar_interfaces::msg::DeliveryResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nidar_interfaces::msg::DeliveryResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nidar_interfaces::msg::DeliveryResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nidar_interfaces::msg::DeliveryResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nidar_interfaces::msg::DeliveryResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nidar_interfaces::msg::DeliveryResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nidar_interfaces__msg__DeliveryResult
    std::shared_ptr<nidar_interfaces::msg::DeliveryResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nidar_interfaces__msg__DeliveryResult
    std::shared_ptr<nidar_interfaces::msg::DeliveryResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryResult_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->survivor_id != other.survivor_id) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->drop_x != other.drop_x) {
      return false;
    }
    if (this->drop_y != other.drop_y) {
      return false;
    }
    if (this->drop_z != other.drop_z) {
      return false;
    }
    if (this->horizontal_error_m != other.horizontal_error_m) {
      return false;
    }
    if (this->accuracy_zone != other.accuracy_zone) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryResult_

// alias to use template instance with default allocator
using DeliveryResult =
  nidar_interfaces::msg::DeliveryResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nidar_interfaces

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_RESULT__STRUCT_HPP_
