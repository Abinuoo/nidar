// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nidar_interfaces:msg/DeliveryTask.idl
// generated code does not contain a copyright notice
#include "nidar_interfaces/msg/detail/delivery_task__functions.h"

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
nidar_interfaces__msg__DeliveryTask__init(nidar_interfaces__msg__DeliveryTask * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    nidar_interfaces__msg__DeliveryTask__fini(msg);
    return false;
  }
  // task_id
  // survivor_id
  // target_x
  // target_y
  // target_z
  // target_latitude
  // target_longitude
  // priority
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    nidar_interfaces__msg__DeliveryTask__fini(msg);
    return false;
  }
  return true;
}

void
nidar_interfaces__msg__DeliveryTask__fini(nidar_interfaces__msg__DeliveryTask * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // task_id
  // survivor_id
  // target_x
  // target_y
  // target_z
  // target_latitude
  // target_longitude
  // priority
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
nidar_interfaces__msg__DeliveryTask__are_equal(const nidar_interfaces__msg__DeliveryTask * lhs, const nidar_interfaces__msg__DeliveryTask * rhs)
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
  // target_x
  if (lhs->target_x != rhs->target_x) {
    return false;
  }
  // target_y
  if (lhs->target_y != rhs->target_y) {
    return false;
  }
  // target_z
  if (lhs->target_z != rhs->target_z) {
    return false;
  }
  // target_latitude
  if (lhs->target_latitude != rhs->target_latitude) {
    return false;
  }
  // target_longitude
  if (lhs->target_longitude != rhs->target_longitude) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
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
nidar_interfaces__msg__DeliveryTask__copy(
  const nidar_interfaces__msg__DeliveryTask * input,
  nidar_interfaces__msg__DeliveryTask * output)
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
  // target_x
  output->target_x = input->target_x;
  // target_y
  output->target_y = input->target_y;
  // target_z
  output->target_z = input->target_z;
  // target_latitude
  output->target_latitude = input->target_latitude;
  // target_longitude
  output->target_longitude = input->target_longitude;
  // priority
  output->priority = input->priority;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

nidar_interfaces__msg__DeliveryTask *
nidar_interfaces__msg__DeliveryTask__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__DeliveryTask * msg = (nidar_interfaces__msg__DeliveryTask *)allocator.allocate(sizeof(nidar_interfaces__msg__DeliveryTask), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nidar_interfaces__msg__DeliveryTask));
  bool success = nidar_interfaces__msg__DeliveryTask__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nidar_interfaces__msg__DeliveryTask__destroy(nidar_interfaces__msg__DeliveryTask * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nidar_interfaces__msg__DeliveryTask__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nidar_interfaces__msg__DeliveryTask__Sequence__init(nidar_interfaces__msg__DeliveryTask__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__DeliveryTask * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(nidar_interfaces__msg__DeliveryTask)) {
      return false;
    }
    data = (nidar_interfaces__msg__DeliveryTask *)allocator.zero_allocate(size, sizeof(nidar_interfaces__msg__DeliveryTask), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nidar_interfaces__msg__DeliveryTask__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nidar_interfaces__msg__DeliveryTask__fini(&data[i - 1]);
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
nidar_interfaces__msg__DeliveryTask__Sequence__fini(nidar_interfaces__msg__DeliveryTask__Sequence * array)
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
      nidar_interfaces__msg__DeliveryTask__fini(&array->data[i]);
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

nidar_interfaces__msg__DeliveryTask__Sequence *
nidar_interfaces__msg__DeliveryTask__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nidar_interfaces__msg__DeliveryTask__Sequence * array = (nidar_interfaces__msg__DeliveryTask__Sequence *)allocator.allocate(sizeof(nidar_interfaces__msg__DeliveryTask__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nidar_interfaces__msg__DeliveryTask__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nidar_interfaces__msg__DeliveryTask__Sequence__destroy(nidar_interfaces__msg__DeliveryTask__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nidar_interfaces__msg__DeliveryTask__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nidar_interfaces__msg__DeliveryTask__Sequence__are_equal(const nidar_interfaces__msg__DeliveryTask__Sequence * lhs, const nidar_interfaces__msg__DeliveryTask__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nidar_interfaces__msg__DeliveryTask__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nidar_interfaces__msg__DeliveryTask__Sequence__copy(
  const nidar_interfaces__msg__DeliveryTask__Sequence * input,
  nidar_interfaces__msg__DeliveryTask__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(nidar_interfaces__msg__DeliveryTask)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(nidar_interfaces__msg__DeliveryTask);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nidar_interfaces__msg__DeliveryTask * data =
      (nidar_interfaces__msg__DeliveryTask *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nidar_interfaces__msg__DeliveryTask__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nidar_interfaces__msg__DeliveryTask__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nidar_interfaces__msg__DeliveryTask__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
