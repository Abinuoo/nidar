// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nidar_interfaces:msg/MissionScore.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/mission_score.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__STRUCT_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__STRUCT_HPP_

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
# define DEPRECATED__nidar_interfaces__msg__MissionScore __attribute__((deprecated))
#else
# define DEPRECATED__nidar_interfaces__msg__MissionScore __declspec(deprecated)
#endif

namespace nidar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionScore_
{
  using Type = MissionScore_<ContainerAllocator>;

  explicit MissionScore_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detection_score = 0ul;
      this->delivery_score = 0ul;
      this->collaboration_score = 0ul;
      this->gcs_score = 0ul;
      this->fast_completion_score = 0ul;
      this->penalty_score = 0l;
      this->total_score = 0ul;
      this->mission_time_sec = 0.0f;
    }
  }

  explicit MissionScore_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detection_score = 0ul;
      this->delivery_score = 0ul;
      this->collaboration_score = 0ul;
      this->gcs_score = 0ul;
      this->fast_completion_score = 0ul;
      this->penalty_score = 0l;
      this->total_score = 0ul;
      this->mission_time_sec = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _detection_score_type =
    uint32_t;
  _detection_score_type detection_score;
  using _delivery_score_type =
    uint32_t;
  _delivery_score_type delivery_score;
  using _collaboration_score_type =
    uint32_t;
  _collaboration_score_type collaboration_score;
  using _gcs_score_type =
    uint32_t;
  _gcs_score_type gcs_score;
  using _fast_completion_score_type =
    uint32_t;
  _fast_completion_score_type fast_completion_score;
  using _penalty_score_type =
    int32_t;
  _penalty_score_type penalty_score;
  using _total_score_type =
    uint32_t;
  _total_score_type total_score;
  using _mission_time_sec_type =
    float;
  _mission_time_sec_type mission_time_sec;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__detection_score(
    const uint32_t & _arg)
  {
    this->detection_score = _arg;
    return *this;
  }
  Type & set__delivery_score(
    const uint32_t & _arg)
  {
    this->delivery_score = _arg;
    return *this;
  }
  Type & set__collaboration_score(
    const uint32_t & _arg)
  {
    this->collaboration_score = _arg;
    return *this;
  }
  Type & set__gcs_score(
    const uint32_t & _arg)
  {
    this->gcs_score = _arg;
    return *this;
  }
  Type & set__fast_completion_score(
    const uint32_t & _arg)
  {
    this->fast_completion_score = _arg;
    return *this;
  }
  Type & set__penalty_score(
    const int32_t & _arg)
  {
    this->penalty_score = _arg;
    return *this;
  }
  Type & set__total_score(
    const uint32_t & _arg)
  {
    this->total_score = _arg;
    return *this;
  }
  Type & set__mission_time_sec(
    const float & _arg)
  {
    this->mission_time_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nidar_interfaces::msg::MissionScore_<ContainerAllocator> *;
  using ConstRawPtr =
    const nidar_interfaces::msg::MissionScore_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nidar_interfaces::msg::MissionScore_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nidar_interfaces::msg::MissionScore_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nidar_interfaces::msg::MissionScore_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nidar_interfaces::msg::MissionScore_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nidar_interfaces::msg::MissionScore_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nidar_interfaces::msg::MissionScore_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nidar_interfaces::msg::MissionScore_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nidar_interfaces::msg::MissionScore_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nidar_interfaces__msg__MissionScore
    std::shared_ptr<nidar_interfaces::msg::MissionScore_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nidar_interfaces__msg__MissionScore
    std::shared_ptr<nidar_interfaces::msg::MissionScore_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionScore_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->detection_score != other.detection_score) {
      return false;
    }
    if (this->delivery_score != other.delivery_score) {
      return false;
    }
    if (this->collaboration_score != other.collaboration_score) {
      return false;
    }
    if (this->gcs_score != other.gcs_score) {
      return false;
    }
    if (this->fast_completion_score != other.fast_completion_score) {
      return false;
    }
    if (this->penalty_score != other.penalty_score) {
      return false;
    }
    if (this->total_score != other.total_score) {
      return false;
    }
    if (this->mission_time_sec != other.mission_time_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionScore_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionScore_

// alias to use template instance with default allocator
using MissionScore =
  nidar_interfaces::msg::MissionScore_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nidar_interfaces

#endif  // NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__STRUCT_HPP_
