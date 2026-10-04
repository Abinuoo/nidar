// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nidar_interfaces:msg/SurvivorDetection.idl
// generated code does not contain a copyright notice
#include "nidar_interfaces/msg/detail/survivor_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `source_drone`
#include "rosidl_runtime_c/string_functions.h"

bool
nidar_interfaces__msg__SurvivorDetection__init(nidar_interfaces__msg__SurvivorDetection * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    nidar_interfaces__msg__SurvivorDetection__fini(msg);
    return false;
  }
  // survivor_id
  // source_drone
  if (!rosidl_runtime_c__String__init(&msg->source_drone)) {
    nidar_interfaces__msg__SurvivorDetection__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // latitude
  // longitude
  // confidence
  // geotag_valid
  return true;
}

void
nidar_interfaces__msg__SurvivorDetection__fini(nidar_interfaces__msg__SurvivorDetection * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // survivor_id
  // source_drone
  rosidl_runtime_c__String__fini(&msg->source_drone);
  // x
  // y
  // z
  // latitude
  // longitude
  // confidence
  // geotag_valid
}

bool
nidar_interfaces__msg__SurvivorDetection__are_equal(const nidar_interfaces__msg__SurvivorDetection * lhs, const nidar_interfaces__msg__SurvivorDetection * rhs)
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
  // survivor_id
  if (lhs->survivor_id != rhs->survivor_id) {
    return false;
  }
  // source_drone
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source_drone), &(rhs->source_drone)))
  {
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
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // geotag_valid
  if (lhs->geotag_valid != rhs->geotag_valid) {
    return false;
  }
  return true;
}

bool
nidar_interfaces__msg__SurvivorDetection__copy(
  const nidar_interfaces__msg__SurvivorDetection * input,
  nidar_interfaces__msg__SurvivorDetection * output)
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
  // survivor_id
  output->survivor_id = input->survivor_id;
  // source_drone
  if (!rosidl_runtime_c__String__copy(
      &(input->source_drone), &(output->source_drone)))
  {
    return false;
  }
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
  // confidence
  output->confidence = input->confidence;
  // geotag_valid
  output->geotag_valid = input->geotag_valid;
  return true;
}

nidar_interfaces__msg__SurvivorDetection *
nidar_interfaces__msg__SurvivorDetection__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__SurvivorDetection * msg = (nidar_interfaces__msg__SurvivorDetection *)allocator.allocate(sizeof(nidar_interfaces__msg__SurvivorDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nidar_interfaces__msg__SurvivorDetection));
  bool success = nidar_interfaces__msg__SurvivorDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nidar_interfaces__msg__SurvivorDetection__destroy(nidar_interfaces__msg__SurvivorDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nidar_interfaces__msg__SurvivorDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nidar_interfaces__msg__SurvivorDetection__Sequence__init(nidar_interfaces__msg__SurvivorDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__SurvivorDetection * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(nidar_interfaces__msg__SurvivorDetection)) {
      return false;
    }
    data = (nidar_interfaces__msg__SurvivorDetection *)allocator.zero_allocate(size, sizeof(nidar_interfaces__msg__SurvivorDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nidar_interfaces__msg__SurvivorDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nidar_interfaces__msg__SurvivorDetection__fini(&data[i - 1]);
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
nidar_interfaces__msg__SurvivorDetection__Sequence__fini(nidar_interfaces__msg__SurvivorDetection__Sequence * array)
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
      nidar_interfaces__msg__SurvivorDetection__fini(&array->data[i]);
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

nidar_interfaces__msg__SurvivorDetection__Sequence *
nidar_interfaces__msg__SurvivorDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__SurvivorDetection__Sequence * array = (nidar_interfaces__msg__SurvivorDetection__Sequence *)allocator.allocate(sizeof(nidar_interfaces__msg__SurvivorDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nidar_interfaces__msg__SurvivorDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nidar_interfaces__msg__SurvivorDetection__Sequence__destroy(nidar_interfaces__msg__SurvivorDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nidar_interfaces__msg__SurvivorDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nidar_interfaces__msg__SurvivorDetection__Sequence__are_equal(const nidar_interfaces__msg__SurvivorDetection__Sequence * lhs, const nidar_interfaces__msg__SurvivorDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nidar_interfaces__msg__SurvivorDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nidar_interfaces__msg__SurvivorDetection__Sequence__copy(
  const nidar_interfaces__msg__SurvivorDetection__Sequence * input,
  nidar_interfaces__msg__SurvivorDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(nidar_interfaces__msg__SurvivorDetection)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(nidar_interfaces__msg__SurvivorDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nidar_interfaces__msg__SurvivorDetection * data =
      (nidar_interfaces__msg__SurvivorDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nidar_interfaces__msg__SurvivorDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nidar_interfaces__msg__SurvivorDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nidar_interfaces__msg__SurvivorDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
