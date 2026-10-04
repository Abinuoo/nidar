// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nidar_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/mission_status.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_

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
# define DEPRECATED__nidar_interfaces__msg__MissionStatus __attribute__((deprecated))
#else
# define DEPRECATED__nidar_interfaces__msg__MissionStatus __declspec(deprecated)
#endif

namespace nidar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionStatus_
{
  using Type = MissionStatus_<ContainerAllocator>;

  explicit MissionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->state = "";
      this->survivors_detected = 0ul;
      this->survivors_geotagged = 0ul;
      this->deliveries_pending = 0ul;
      this->deliveries_completed = 0ul;
      this->completion_percent = 0.0f;
      this->elapsed_time_sec = 0.0f;
    }
  }

  explicit MissionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    mission_id(_alloc),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->state = "";
      this->survivors_detected = 0ul;
      this->survivors_geotagged = 0ul;
      this->deliveries_pending = 0ul;
      this->deliveries_completed = 0ul;
      this->completion_percent = 0.0f;
      this->elapsed_time_sec = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _survivors_detected_type =
    uint32_t;
  _survivors_detected_type survivors_detected;
  using _survivors_geotagged_type =
    uint32_t;
  _survivors_geotagged_type survivors_geotagged;
  using _deliveries_pending_type =
    uint32_t;
  _deliveries_pending_type deliveries_pending;
  using _deliveries_completed_type =
    uint32_t;
  _deliveries_completed_type deliveries_completed;
  using _completion_percent_type =
    float;
  _completion_percent_type completion_percent;
  using _elapsed_time_sec_type =
    float;
  _elapsed_time_sec_type elapsed_time_sec;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__mission_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__survivors_detected(
    const uint32_t & _arg)
  {
    this->survivors_detected = _arg;
    return *this;
  }
  Type & set__survivors_geotagged(
    const uint32_t & _arg)
  {
    this->survivors_geotagged = _arg;
    return *this;
  }
  Type & set__deliveries_pending(
    const uint32_t & _arg)
  {
    this->deliveries_pending = _arg;
    return *this;
  }
  Type & set__deliveries_completed(
    const uint32_t & _arg)
  {
    this->deliveries_completed = _arg;
    return *this;
  }
  Type & set__completion_percent(
    const float & _arg)
  {
    this->completion_percent = _arg;
    return *this;
  }
  Type & set__elapsed_time_sec(
    const float & _arg)
  {
    this->elapsed_time_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nidar_interfaces::msg::MissionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const nidar_interfaces::msg::MissionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nidar_interfaces::msg::MissionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nidar_interfaces::msg::MissionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nidar_interfaces::msg::MissionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nidar_interfaces::msg::MissionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nidar_interfaces::msg::MissionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nidar_interfaces::msg::MissionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nidar_interfaces::msg::MissionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nidar_interfaces::msg::MissionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nidar_interfaces__msg__MissionStatus
    std::shared_ptr<nidar_interfaces::msg::MissionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nidar_interfaces__msg__MissionStatus
    std::shared_ptr<nidar_interfaces::msg::MissionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->survivors_detected != other.survivors_detected) {
      return false;
    }
    if (this->survivors_geotagged != other.survivors_geotagged) {
      return false;
    }
    if (this->deliveries_pending != other.deliveries_pending) {
      return false;
    }
    if (this->deliveries_completed != other.deliveries_completed) {
      return false;
    }
    if (this->completion_percent != other.completion_percent) {
      return false;
    }
    if (this->elapsed_time_sec != other.elapsed_time_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionStatus_

// alias to use template instance with default allocator
using MissionStatus =
  nidar_interfaces::msg::MissionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nidar_interfaces

#endif  // NIDAR_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
