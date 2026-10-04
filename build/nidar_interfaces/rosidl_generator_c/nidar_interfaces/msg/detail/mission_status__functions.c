// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nidar_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice
#include "nidar_interfaces/msg/detail/mission_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `mission_id`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
nidar_interfaces__msg__MissionStatus__init(nidar_interfaces__msg__MissionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    nidar_interfaces__msg__MissionStatus__fini(msg);
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    nidar_interfaces__msg__MissionStatus__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    nidar_interfaces__msg__MissionStatus__fini(msg);
    return false;
  }
  // survivors_detected
  // survivors_geotagged
  // deliveries_pending
  // deliveries_completed
  // completion_percent
  // elapsed_time_sec
  return true;
}

void
nidar_interfaces__msg__MissionStatus__fini(nidar_interfaces__msg__MissionStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // survivors_detected
  // survivors_geotagged
  // deliveries_pending
  // deliveries_completed
  // completion_percent
  // elapsed_time_sec
}

bool
nidar_interfaces__msg__MissionStatus__are_equal(const nidar_interfaces__msg__MissionStatus * lhs, const nidar_interfaces__msg__MissionStatus * rhs)
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
  // mission_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_id), &(rhs->mission_id)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // survivors_detected
  if (lhs->survivors_detected != rhs->survivors_detected) {
    return false;
  }
  // survivors_geotagged
  if (lhs->survivors_geotagged != rhs->survivors_geotagged) {
    return false;
  }
  // deliveries_pending
  if (lhs->deliveries_pending != rhs->deliveries_pending) {
    return false;
  }
  // deliveries_completed
  if (lhs->deliveries_completed != rhs->deliveries_completed) {
    return false;
  }
  // completion_percent
  if (lhs->completion_percent != rhs->completion_percent) {
    return false;
  }
  // elapsed_time_sec
  if (lhs->elapsed_time_sec != rhs->elapsed_time_sec) {
    return false;
  }
  return true;
}

bool
nidar_interfaces__msg__MissionStatus__copy(
  const nidar_interfaces__msg__MissionStatus * input,
  nidar_interfaces__msg__MissionStatus * output)
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
  // mission_id
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_id), &(output->mission_id)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // survivors_detected
  output->survivors_detected = input->survivors_detected;
  // survivors_geotagged
  output->survivors_geotagged = input->survivors_geotagged;
  // deliveries_pending
  output->deliveries_pending = input->deliveries_pending;
  // deliveries_completed
  output->deliveries_completed = input->deliveries_completed;
  // completion_percent
  output->completion_percent = input->completion_percent;
  // elapsed_time_sec
  output->elapsed_time_sec = input->elapsed_time_sec;
  return true;
}

nidar_interfaces__msg__MissionStatus *
nidar_interfaces__msg__MissionStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__MissionStatus * msg = (nidar_interfaces__msg__MissionStatus *)allocator.allocate(sizeof(nidar_interfaces__msg__MissionStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nidar_interfaces__msg__MissionStatus));
  bool success = nidar_interfaces__msg__MissionStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nidar_interfaces__msg__MissionStatus__destroy(nidar_interfaces__msg__MissionStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nidar_interfaces__msg__MissionStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nidar_interfaces__msg__MissionStatus__Sequence__init(nidar_interfaces__msg__MissionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__MissionStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(nidar_interfaces__msg__MissionStatus)) {
      return false;
    }
    data = (nidar_interfaces__msg__MissionStatus *)allocator.zero_allocate(size, sizeof(nidar_interfaces__msg__MissionStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nidar_interfaces__msg__MissionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nidar_interfaces__msg__MissionStatus__fini(&data[i - 1]);
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
nidar_interfaces__msg__MissionStatus__Sequence__fini(nidar_interfaces__msg__MissionStatus__Sequence * array)
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
      nidar_interfaces__msg__MissionStatus__fini(&array->data[i]);
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

nidar_interfaces__msg__MissionStatus__Sequence *
nidar_interfaces__msg__MissionStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__MissionStatus__Sequence * array = (nidar_interfaces__msg__MissionStatus__Sequence *)allocator.allocate(sizeof(nidar_interfaces__msg__MissionStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nidar_interfaces__msg__MissionStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nidar_interfaces__msg__MissionStatus__Sequence__destroy(nidar_interfaces__msg__MissionStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nidar_interfaces__msg__MissionStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nidar_interfaces__msg__MissionStatus__Sequence__are_equal(const nidar_interfaces__msg__MissionStatus__Sequence * lhs, const nidar_interfaces__msg__MissionStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nidar_interfaces__msg__MissionStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nidar_interfaces__msg__MissionStatus__Sequence__copy(
  const nidar_interfaces__msg__MissionStatus__Sequence * input,
  nidar_interfaces__msg__MissionStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(nidar_interfaces__msg__MissionStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(nidar_interfaces__msg__MissionStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nidar_interfaces__msg__MissionStatus * data =
      (nidar_interfaces__msg__MissionStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nidar_interfaces__msg__MissionStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nidar_interfaces__msg__MissionStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nidar_interfaces__msg__MissionStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
