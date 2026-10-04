// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nidar_interfaces:msg/MissionScore.idl
// generated code does not contain a copyright notice
#include "nidar_interfaces/msg/detail/mission_score__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
nidar_interfaces__msg__MissionScore__init(nidar_interfaces__msg__MissionScore * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    nidar_interfaces__msg__MissionScore__fini(msg);
    return false;
  }
  // detection_score
  // delivery_score
  // collaboration_score
  // gcs_score
  // fast_completion_score
  // penalty_score
  // total_score
  // mission_time_sec
  return true;
}

void
nidar_interfaces__msg__MissionScore__fini(nidar_interfaces__msg__MissionScore * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // detection_score
  // delivery_score
  // collaboration_score
  // gcs_score
  // fast_completion_score
  // penalty_score
  // total_score
  // mission_time_sec
}

bool
nidar_interfaces__msg__MissionScore__are_equal(const nidar_interfaces__msg__MissionScore * lhs, const nidar_interfaces__msg__MissionScore * rhs)
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
  // detection_score
  if (lhs->detection_score != rhs->detection_score) {
    return false;
  }
  // delivery_score
  if (lhs->delivery_score != rhs->delivery_score) {
    return false;
  }
  // collaboration_score
  if (lhs->collaboration_score != rhs->collaboration_score) {
    return false;
  }
  // gcs_score
  if (lhs->gcs_score != rhs->gcs_score) {
    return false;
  }
  // fast_completion_score
  if (lhs->fast_completion_score != rhs->fast_completion_score) {
    return false;
  }
  // penalty_score
  if (lhs->penalty_score != rhs->penalty_score) {
    return false;
  }
  // total_score
  if (lhs->total_score != rhs->total_score) {
    return false;
  }
  // mission_time_sec
  if (lhs->mission_time_sec != rhs->mission_time_sec) {
    return false;
  }
  return true;
}

bool
nidar_interfaces__msg__MissionScore__copy(
  const nidar_interfaces__msg__MissionScore * input,
  nidar_interfaces__msg__MissionScore * output)
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
  // detection_score
  output->detection_score = input->detection_score;
  // delivery_score
  output->delivery_score = input->delivery_score;
  // collaboration_score
  output->collaboration_score = input->collaboration_score;
  // gcs_score
  output->gcs_score = input->gcs_score;
  // fast_completion_score
  output->fast_completion_score = input->fast_completion_score;
  // penalty_score
  output->penalty_score = input->penalty_score;
  // total_score
  output->total_score = input->total_score;
  // mission_time_sec
  output->mission_time_sec = input->mission_time_sec;
  return true;
}

nidar_interfaces__msg__MissionScore *
nidar_interfaces__msg__MissionScore__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__MissionScore * msg = (nidar_interfaces__msg__MissionScore *)allocator.allocate(sizeof(nidar_interfaces__msg__MissionScore), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nidar_interfaces__msg__MissionScore));
  bool success = nidar_interfaces__msg__MissionScore__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nidar_interfaces__msg__MissionScore__destroy(nidar_interfaces__msg__MissionScore * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nidar_interfaces__msg__MissionScore__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nidar_interfaces__msg__MissionScore__Sequence__init(nidar_interfaces__msg__MissionScore__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__MissionScore * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(nidar_interfaces__msg__MissionScore)) {
      return false;
    }
    data = (nidar_interfaces__msg__MissionScore *)allocator.zero_allocate(size, sizeof(nidar_interfaces__msg__MissionScore), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nidar_interfaces__msg__MissionScore__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nidar_interfaces__msg__MissionScore__fini(&data[i - 1]);
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
nidar_interfaces__msg__MissionScore__Sequence__fini(nidar_interfaces__msg__MissionScore__Sequence * array)
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
      nidar_interfaces__msg__MissionScore__fini(&array->data[i]);
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

nidar_interfaces__msg__MissionScore__Sequence *
nidar_interfaces__msg__MissionScore__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__MissionScore__Sequence * array = (nidar_interfaces__msg__MissionScore__Sequence *)allocator.allocate(sizeof(nidar_interfaces__msg__MissionScore__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nidar_interfaces__msg__MissionScore__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nidar_interfaces__msg__MissionScore__Sequence__destroy(nidar_interfaces__msg__MissionScore__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nidar_interfaces__msg__MissionScore__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nidar_interfaces__msg__MissionScore__Sequence__are_equal(const nidar_interfaces__msg__MissionScore__Sequence * lhs, const nidar_interfaces__msg__MissionScore__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nidar_interfaces__msg__MissionScore__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nidar_interfaces__msg__MissionScore__Sequence__copy(
  const nidar_interfaces__msg__MissionScore__Sequence * input,
  nidar_interfaces__msg__MissionScore__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(nidar_interfaces__msg__MissionScore)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(nidar_interfaces__msg__MissionScore);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nidar_interfaces__msg__MissionScore * data =
      (nidar_interfaces__msg__MissionScore *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nidar_interfaces__msg__MissionScore__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nidar_interfaces__msg__MissionScore__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nidar_interfaces__msg__MissionScore__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
