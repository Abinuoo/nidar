// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nidar_interfaces:msg/DeliveryTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/delivery_task.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_TASK__STRUCT_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_TASK__STRUCT_HPP_

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
# define DEPRECATED__nidar_interfaces__msg__DeliveryTask __attribute__((deprecated))
#else
# define DEPRECATED__nidar_interfaces__msg__DeliveryTask __declspec(deprecated)
#endif

namespace nidar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeliveryTask_
{
  using Type = DeliveryTask_<ContainerAllocator>;

  explicit DeliveryTask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = 0ul;
      this->survivor_id = 0ul;
      this->target_x = 0.0;
      this->target_y = 0.0;
      this->target_z = 0.0;
      this->target_latitude = 0.0;
      this->target_longitude = 0.0;
      this->priority = 0;
      this->status = "";
    }
  }

  explicit DeliveryTask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = 0ul;
      this->survivor_id = 0ul;
      this->target_x = 0.0;
      this->target_y = 0.0;
      this->target_z = 0.0;
      this->target_latitude = 0.0;
      this->target_longitude = 0.0;
      this->priority = 0;
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
  using _target_x_type =
    double;
  _target_x_type target_x;
  using _target_y_type =
    double;
  _target_y_type target_y;
  using _target_z_type =
    double;
  _target_z_type target_z;
  using _target_latitude_type =
    double;
  _target_latitude_type target_latitude;
  using _target_longitude_type =
    double;
  _target_longitude_type target_longitude;
  using _priority_type =
    uint8_t;
  _priority_type priority;
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
  Type & set__target_x(
    const double & _arg)
  {
    this->target_x = _arg;
    return *this;
  }
  Type & set__target_y(
    const double & _arg)
  {
    this->target_y = _arg;
    return *this;
  }
  Type & set__target_z(
    const double & _arg)
  {
    this->target_z = _arg;
    return *this;
  }
  Type & set__target_latitude(
    const double & _arg)
  {
    this->target_latitude = _arg;
    return *this;
  }
  Type & set__target_longitude(
    const double & _arg)
  {
    this->target_longitude = _arg;
    return *this;
  }
  Type & set__priority(
    const uint8_t & _arg)
  {
    this->priority = _arg;
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
    nidar_interfaces::msg::DeliveryTask_<ContainerAllocator> *;
  using ConstRawPtr =
    const nidar_interfaces::msg::DeliveryTask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nidar_interfaces::msg::DeliveryTask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nidar_interfaces::msg::DeliveryTask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nidar_interfaces::msg::DeliveryTask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nidar_interfaces::msg::DeliveryTask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nidar_interfaces::msg::DeliveryTask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nidar_interfaces::msg::DeliveryTask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nidar_interfaces::msg::DeliveryTask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nidar_interfaces::msg::DeliveryTask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nidar_interfaces__msg__DeliveryTask
    std::shared_ptr<nidar_interfaces::msg::DeliveryTask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nidar_interfaces__msg__DeliveryTask
    std::shared_ptr<nidar_interfaces::msg::DeliveryTask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryTask_ & other) const
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
    if (this->target_x != other.target_x) {
      return false;
    }
    if (this->target_y != other.target_y) {
      return false;
    }
    if (this->target_z != other.target_z) {
      return false;
    }
    if (this->target_latitude != other.target_latitude) {
      return false;
    }
    if (this->target_longitude != other.target_longitude) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryTask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryTask_

// alias to use template instance with default allocator
using DeliveryTask =
  nidar_interfaces::msg::DeliveryTask_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nidar_interfaces

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DELIVERY_TASK__STRUCT_HPP_
