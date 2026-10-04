// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nidar_interfaces:msg/SurvivorDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/survivor_detection.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__SURVIVOR_DETECTION__STRUCT_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__SURVIVOR_DETECTION__STRUCT_HPP_

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
# define DEPRECATED__nidar_interfaces__msg__SurvivorDetection __attribute__((deprecated))
#else
# define DEPRECATED__nidar_interfaces__msg__SurvivorDetection __declspec(deprecated)
#endif

namespace nidar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SurvivorDetection_
{
  using Type = SurvivorDetection_<ContainerAllocator>;

  explicit SurvivorDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->survivor_id = 0ul;
      this->source_drone = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->confidence = 0.0f;
      this->geotag_valid = false;
    }
  }

  explicit SurvivorDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    source_drone(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->survivor_id = 0ul;
      this->source_drone = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->confidence = 0.0f;
      this->geotag_valid = false;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _survivor_id_type =
    uint32_t;
  _survivor_id_type survivor_id;
  using _source_drone_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_drone_type source_drone;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _geotag_valid_type =
    bool;
  _geotag_valid_type geotag_valid;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__survivor_id(
    const uint32_t & _arg)
  {
    this->survivor_id = _arg;
    return *this;
  }
  Type & set__source_drone(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source_drone = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__geotag_valid(
    const bool & _arg)
  {
    this->geotag_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nidar_interfaces::msg::SurvivorDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const nidar_interfaces::msg::SurvivorDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nidar_interfaces::msg::SurvivorDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nidar_interfaces::msg::SurvivorDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nidar_interfaces::msg::SurvivorDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nidar_interfaces::msg::SurvivorDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nidar_interfaces::msg::SurvivorDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nidar_interfaces::msg::SurvivorDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nidar_interfaces::msg::SurvivorDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nidar_interfaces::msg::SurvivorDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nidar_interfaces__msg__SurvivorDetection
    std::shared_ptr<nidar_interfaces::msg::SurvivorDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nidar_interfaces__msg__SurvivorDetection
    std::shared_ptr<nidar_interfaces::msg::SurvivorDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SurvivorDetection_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->survivor_id != other.survivor_id) {
      return false;
    }
    if (this->source_drone != other.source_drone) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->geotag_valid != other.geotag_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const SurvivorDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SurvivorDetection_

// alias to use template instance with default allocator
using SurvivorDetection =
  nidar_interfaces::msg::SurvivorDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nidar_interfaces

#endif  // NIDAR_INTERFACES__MSG__DETAIL__SURVIVOR_DETECTION__STRUCT_HPP_
