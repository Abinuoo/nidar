// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nidar_interfaces:msg/DroneStatus.idl
// generated code does not contain a copyright notice
#include "nidar_interfaces/msg/detail/drone_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `drone_id`
// Member `role`
// Member `flight_mode`
// Member `mission_state`
#include "rosidl_runtime_c/string_functions.h"

bool
nidar_interfaces__msg__DroneStatus__init(nidar_interfaces__msg__DroneStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    nidar_interfaces__msg__DroneStatus__fini(msg);
    return false;
  }
  // drone_id
  if (!rosidl_runtime_c__String__init(&msg->drone_id)) {
    nidar_interfaces__msg__DroneStatus__fini(msg);
    return false;
  }
  // role
  if (!rosidl_runtime_c__String__init(&msg->role)) {
    nidar_interfaces__msg__DroneStatus__fini(msg);
    return false;
  }
  // connected
  // armed
  // flight_mode
  if (!rosidl_runtime_c__String__init(&msg->flight_mode)) {
    nidar_interfaces__msg__DroneStatus__fini(msg);
    return false;
  }
  // battery_percent
  // x
  // y
  // z
  // latitude
  // longitude
  // communication_ok
  // geofence_ok
  // mission_state
  if (!rosidl_runtime_c__String__init(&msg->mission_state)) {
    nidar_interfaces__msg__DroneStatus__fini(msg);
    return false;
  }
  return true;
}

void
nidar_interfaces__msg__DroneStatus__fini(nidar_interfaces__msg__DroneStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // drone_id
  rosidl_runtime_c__String__fini(&msg->drone_id);
  // role
  rosidl_runtime_c__String__fini(&msg->role);
  // connected
  // armed
  // flight_mode
  rosidl_runtime_c__String__fini(&msg->flight_mode);
  // battery_percent
  // x
  // y
  // z
  // latitude
  // longitude
  // communication_ok
  // geofence_ok
  // mission_state
  rosidl_runtime_c__String__fini(&msg->mission_state);
}

bool
nidar_interfaces__msg__DroneStatus__are_equal(const nidar_interfaces__msg__DroneStatus * lhs, const nidar_interfaces__msg__DroneStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // drone_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->drone_id), &(rhs->drone_id)))
  {
    return false;
  }
  // role
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->role), &(rhs->role)))
  {
    return false;
  }
  // connected
  if (lhs->connected != rhs->connected) {
    return false;
  }
  // armed
  if (lhs->armed != rhs->armed) {
    return false;
  }
  // flight_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->flight_mode), &(rhs->flight_mode)))
  {
    return false;
  }
  // battery_percent
  if (lhs->battery_percent != rhs->battery_percent) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // communication_ok
  if (lhs->communication_ok != rhs->communication_ok) {
    return false;
  }
  // geofence_ok
  if (lhs->geofence_ok != rhs->geofence_ok) {
    return false;
  }
  // mission_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_state), &(rhs->mission_state)))
  {
    return false;
  }
  return true;
}

bool
nidar_interfaces__msg__DroneStatus__copy(
  const nidar_interfaces__msg__DroneStatus * input,
  nidar_interfaces__msg__DroneStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // drone_id
  if (!rosidl_runtime_c__String__copy(
      &(input->drone_id), &(output->drone_id)))
  {
    return false;
  }
  // role
  if (!rosidl_runtime_c__String__copy(
      &(input->role), &(output->role)))
  {
    return false;
  }
  // connected
  output->connected = input->connected;
  // armed
  output->armed = input->armed;
  // flight_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->flight_mode), &(output->flight_mode)))
  {
    return false;
  }
  // battery_percent
  output->battery_percent = input->battery_percent;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // communication_ok
  output->communication_ok = input->communication_ok;
  // geofence_ok
  output->geofence_ok = input->geofence_ok;
  // mission_state
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_state), &(output->mission_state)))
  {
    return false;
  }
  return true;
}

nidar_interfaces__msg__DroneStatus *
nidar_interfaces__msg__DroneStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__DroneStatus * msg = (nidar_interfaces__msg__DroneStatus *)allocator.allocate(sizeof(nidar_interfaces__msg__DroneStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nidar_interfaces__msg__DroneStatus));
  bool success = nidar_interfaces__msg__DroneStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nidar_interfaces__msg__DroneStatus__destroy(nidar_interfaces__msg__DroneStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nidar_interfaces__msg__DroneStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nidar_interfaces__msg__DroneStatus__Sequence__init(nidar_interfaces__msg__DroneStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__DroneStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(nidar_interfaces__msg__DroneStatus)) {
      return false;
    }
    data = (nidar_interfaces__msg__DroneStatus *)allocator.zero_allocate(size, sizeof(nidar_interfaces__msg__DroneStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nidar_interfaces__msg__DroneStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nidar_interfaces__msg__DroneStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nidar_interfaces__msg__DroneStatus__Sequence__fini(nidar_interfaces__msg__DroneStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nidar_interfaces__msg__DroneStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nidar_interfaces__msg__DroneStatus__Sequence *
nidar_interfaces__msg__DroneStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__DroneStatus__Sequence * array = (nidar_interfaces__msg__DroneStatus__Sequence *)allocator.allocate(sizeof(nidar_interfaces__msg__DroneStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nidar_interfaces__msg__DroneStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nidar_interfaces__msg__DroneStatus__Sequence__destroy(nidar_interfaces__msg__DroneStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nidar_interfaces__msg__DroneStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nidar_interfaces__msg__DroneStatus__Sequence__are_equal(const nidar_interfaces__msg__DroneStatus__Sequence * lhs, const nidar_interfaces__msg__DroneStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nidar_interfaces__msg__DroneStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nidar_interfaces__msg__DroneStatus__Sequence__copy(
  const nidar_interfaces__msg__DroneStatus__Sequence * input,
  nidar_interfaces__msg__DroneStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(nidar_interfaces__msg__DroneStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(nidar_interfaces__msg__DroneStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nidar_interfaces__msg__DroneStatus * data =
      (nidar_interfaces__msg__DroneStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nidar_interfaces__msg__DroneStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nidar_interfaces__msg__DroneStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nidar_interfaces__msg__DroneStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
