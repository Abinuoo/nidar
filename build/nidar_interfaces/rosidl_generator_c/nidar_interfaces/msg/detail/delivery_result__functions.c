// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nidar_interfaces:msg/DeliveryResult.idl
// generated code does not contain a copyright notice
#include "nidar_interfaces/msg/detail/delivery_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
nidar_interfaces__msg__DeliveryResult__init(nidar_interfaces__msg__DeliveryResult * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    nidar_interfaces__msg__DeliveryResult__fini(msg);
    return false;
  }
  // task_id
  // survivor_id
  // success
  // drop_x
  // drop_y
  // drop_z
  // horizontal_error_m
  // accuracy_zone
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    nidar_interfaces__msg__DeliveryResult__fini(msg);
    return false;
  }
  return true;
}

void
nidar_interfaces__msg__DeliveryResult__fini(nidar_interfaces__msg__DeliveryResult * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // task_id
  // survivor_id
  // success
  // drop_x
  // drop_y
  // drop_z
  // horizontal_error_m
  // accuracy_zone
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
nidar_interfaces__msg__DeliveryResult__are_equal(const nidar_interfaces__msg__DeliveryResult * lhs, const nidar_interfaces__msg__DeliveryResult * rhs)
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
  // task_id
  if (lhs->task_id != rhs->task_id) {
    return false;
  }
  // survivor_id
  if (lhs->survivor_id != rhs->survivor_id) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // drop_x
  if (lhs->drop_x != rhs->drop_x) {
    return false;
  }
  // drop_y
  if (lhs->drop_y != rhs->drop_y) {
    return false;
  }
  // drop_z
  if (lhs->drop_z != rhs->drop_z) {
    return false;
  }
  // horizontal_error_m
  if (lhs->horizontal_error_m != rhs->horizontal_error_m) {
    return false;
  }
  // accuracy_zone
  if (lhs->accuracy_zone != rhs->accuracy_zone) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
nidar_interfaces__msg__DeliveryResult__copy(
  const nidar_interfaces__msg__DeliveryResult * input,
  nidar_interfaces__msg__DeliveryResult * output)
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
  // task_id
  output->task_id = input->task_id;
  // survivor_id
  output->survivor_id = input->survivor_id;
  // success
  output->success = input->success;
  // drop_x
  output->drop_x = input->drop_x;
  // drop_y
  output->drop_y = input->drop_y;
  // drop_z
  output->drop_z = input->drop_z;
  // horizontal_error_m
  output->horizontal_error_m = input->horizontal_error_m;
  // accuracy_zone
  output->accuracy_zone = input->accuracy_zone;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

nidar_interfaces__msg__DeliveryResult *
nidar_interfaces__msg__DeliveryResult__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__DeliveryResult * msg = (nidar_interfaces__msg__DeliveryResult *)allocator.allocate(sizeof(nidar_interfaces__msg__DeliveryResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nidar_interfaces__msg__DeliveryResult));
  bool success = nidar_interfaces__msg__DeliveryResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nidar_interfaces__msg__DeliveryResult__destroy(nidar_interfaces__msg__DeliveryResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nidar_interfaces__msg__DeliveryResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nidar_interfaces__msg__DeliveryResult__Sequence__init(nidar_interfaces__msg__DeliveryResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__DeliveryResult * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(nidar_interfaces__msg__DeliveryResult)) {
      return false;
    }
    data = (nidar_interfaces__msg__DeliveryResult *)allocator.zero_allocate(size, sizeof(nidar_interfaces__msg__DeliveryResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nidar_interfaces__msg__DeliveryResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nidar_interfaces__msg__DeliveryResult__fini(&data[i - 1]);
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
nidar_interfaces__msg__DeliveryResult__Sequence__fini(nidar_interfaces__msg__DeliveryResult__Sequence * array)
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
      nidar_interfaces__msg__DeliveryResult__fini(&array->data[i]);
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

nidar_interfaces__msg__DeliveryResult__Sequence *
nidar_interfaces__msg__DeliveryResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__DeliveryResult__Sequence * array = (nidar_interfaces__msg__DeliveryResult__Sequence *)allocator.allocate(sizeof(nidar_interfaces__msg__DeliveryResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nidar_interfaces__msg__DeliveryResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nidar_interfaces__msg__DeliveryResult__Sequence__destroy(nidar_interfaces__msg__DeliveryResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nidar_interfaces__msg__DeliveryResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nidar_interfaces__msg__DeliveryResult__Sequence__are_equal(const nidar_interfaces__msg__DeliveryResult__Sequence * lhs, const nidar_interfaces__msg__DeliveryResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nidar_interfaces__msg__DeliveryResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nidar_interfaces__msg__DeliveryResult__Sequence__copy(
  const nidar_interfaces__msg__DeliveryResult__Sequence * input,
  nidar_interfaces__msg__DeliveryResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(nidar_interfaces__msg__DeliveryResult)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(nidar_interfaces__msg__DeliveryResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nidar_interfaces__msg__DeliveryResult * data =
      (nidar_interfaces__msg__DeliveryResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nidar_interfaces__msg__DeliveryResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nidar_interfaces__msg__DeliveryResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nidar_interfaces__msg__DeliveryResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
