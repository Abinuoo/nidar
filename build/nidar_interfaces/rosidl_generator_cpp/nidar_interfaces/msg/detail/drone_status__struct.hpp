// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nidar_interfaces:msg/DroneStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/drone_status.hpp"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__STRUCT_HPP_
#define NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__STRUCT_HPP_

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
# define DEPRECATED__nidar_interfaces__msg__DroneStatus __attribute__((deprecated))
#else
# define DEPRECATED__nidar_interfaces__msg__DroneStatus __declspec(deprecated)
#endif

namespace nidar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroneStatus_
{
  using Type = DroneStatus_<ContainerAllocator>;

  explicit DroneStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = "";
      this->role = "";
      this->connected = false;
      this->armed = false;
      this->flight_mode = "";
      this->battery_percent = 0.0f;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->communication_ok = false;
      this->geofence_ok = false;
      this->mission_state = "";
    }
  }

  explicit DroneStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    drone_id(_alloc),
    role(_alloc),
    flight_mode(_alloc),
    mission_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = "";
      this->role = "";
      this->connected = false;
      this->armed = false;
      this->flight_mode = "";
      this->battery_percent = 0.0f;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->communication_ok = false;
      this->geofence_ok = false;
      this->mission_state = "";
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _drone_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _drone_id_type drone_id;
  using _role_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _role_type role;
  using _connected_type =
    bool;
  _connected_type connected;
  using _armed_type =
    bool;
  _armed_type armed;
  using _flight_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _flight_mode_type flight_mode;
  using _battery_percent_type =
    float;
  _battery_percent_type battery_percent;
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
  using _communication_ok_type =
    bool;
  _communication_ok_type communication_ok;
  using _geofence_ok_type =
    bool;
  _geofence_ok_type geofence_ok;
  using _mission_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_state_type mission_state;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__drone_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__role(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->role = _arg;
    return *this;
  }
  Type & set__connected(
    const bool & _arg)
  {
    this->connected = _arg;
    return *this;
  }
  Type & set__armed(
    const bool & _arg)
  {
    this->armed = _arg;
    return *this;
  }
  Type & set__flight_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->flight_mode = _arg;
    return *this;
  }
  Type & set__battery_percent(
    const float & _arg)
  {
    this->battery_percent = _arg;
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
  Type & set__communication_ok(
    const bool & _arg)
  {
    this->communication_ok = _arg;
    return *this;
  }
  Type & set__geofence_ok(
    const bool & _arg)
  {
    this->geofence_ok = _arg;
    return *this;
  }
  Type & set__mission_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nidar_interfaces::msg::DroneStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const nidar_interfaces::msg::DroneStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nidar_interfaces::msg::DroneStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nidar_interfaces::msg::DroneStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nidar_interfaces::msg::DroneStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nidar_interfaces::msg::DroneStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nidar_interfaces::msg::DroneStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nidar_interfaces::msg::DroneStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nidar_interfaces::msg::DroneStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nidar_interfaces::msg::DroneStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nidar_interfaces__msg__DroneStatus
    std::shared_ptr<nidar_interfaces::msg::DroneStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nidar_interfaces__msg__DroneStatus
    std::shared_ptr<nidar_interfaces::msg::DroneStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->role != other.role) {
      return false;
    }
    if (this->connected != other.connected) {
      return false;
    }
    if (this->armed != other.armed) {
      return false;
    }
    if (this->flight_mode != other.flight_mode) {
      return false;
    }
    if (this->battery_percent != other.battery_percent) {
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
    if (this->communication_ok != other.communication_ok) {
      return false;
    }
    if (this->geofence_ok != other.geofence_ok) {
      return false;
    }
    if (this->mission_state != other.mission_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneStatus_

// alias to use template instance with default allocator
using DroneStatus =
  nidar_interfaces::msg::DroneStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nidar_interfaces

#endif  // NIDAR_INTERFACES__MSG__DETAIL__DRONE_STATUS__STRUCT_HPP_
