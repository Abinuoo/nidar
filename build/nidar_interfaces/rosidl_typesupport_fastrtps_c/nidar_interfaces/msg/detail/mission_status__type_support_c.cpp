// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nidar_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice
#include "nidar_interfaces/msg/detail/mission_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nidar_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nidar_interfaces/msg/detail/mission_status__struct.h"
#include "nidar_interfaces/msg/detail/mission_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // timestamp
#include "rosidl_runtime_c/string.h"  // mission_id, state
#include "rosidl_runtime_c/string_functions.h"  // mission_id, state

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nidar_interfaces
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nidar_interfaces
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nidar_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nidar_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nidar_interfaces
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nidar_interfaces
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nidar_interfaces
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nidar_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _MissionStatus__ros_msg_type = nidar_interfaces__msg__MissionStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
bool cdr_serialize_nidar_interfaces__msg__MissionStatus(
  const nidar_interfaces__msg__MissionStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->timestamp, cdr);
  }

  // Field name: mission_id
  {
    const rosidl_runtime_c__String * str = &ros_message->mission_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: state
  {
    const rosidl_runtime_c__String * str = &ros_message->state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: survivors_detected
  {
    cdr << ros_message->survivors_detected;
  }

  // Field name: survivors_geotagged
  {
    cdr << ros_message->survivors_geotagged;
  }

  // Field name: deliveries_pending
  {
    cdr << ros_message->deliveries_pending;
  }

  // Field name: deliveries_completed
  {
    cdr << ros_message->deliveries_completed;
  }

  // Field name: completion_percent
  {
    cdr << ros_message->completion_percent;
  }

  // Field name: elapsed_time_sec
  {
    cdr << ros_message->elapsed_time_sec;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
bool cdr_deserialize_nidar_interfaces__msg__MissionStatus(
  eprosima::fastcdr::Cdr & cdr,
  nidar_interfaces__msg__MissionStatus * ros_message)
{
  // Field name: timestamp
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->timestamp);
  }

  // Field name: mission_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mission_id.data) {
      rosidl_runtime_c__String__init(&ros_message->mission_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mission_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mission_id'\n");
      return false;
    }
  }

  // Field name: state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state.data) {
      rosidl_runtime_c__String__init(&ros_message->state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state'\n");
      return false;
    }
  }

  // Field name: survivors_detected
  {
    cdr >> ros_message->survivors_detected;
  }

  // Field name: survivors_geotagged
  {
    cdr >> ros_message->survivors_geotagged;
  }

  // Field name: deliveries_pending
  {
    cdr >> ros_message->deliveries_pending;
  }

  // Field name: deliveries_completed
  {
    cdr >> ros_message->deliveries_completed;
  }

  // Field name: completion_percent
  {
    cdr >> ros_message->completion_percent;
  }

  // Field name: elapsed_time_sec
  {
    cdr >> ros_message->elapsed_time_sec;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
size_t get_serialized_size_nidar_interfaces__msg__MissionStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MissionStatus__ros_msg_type * ros_message = static_cast<const _MissionStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: timestamp
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->timestamp), current_alignment);

  // Field name: mission_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mission_id.size + 1);

  // Field name: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state.size + 1);

  // Field name: survivors_detected
  {
    size_t item_size = sizeof(ros_message->survivors_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: survivors_geotagged
  {
    size_t item_size = sizeof(ros_message->survivors_geotagged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: deliveries_pending
  {
    size_t item_size = sizeof(ros_message->deliveries_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: deliveries_completed
  {
    size_t item_size = sizeof(ros_message->deliveries_completed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: completion_percent
  {
    size_t item_size = sizeof(ros_message->completion_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: elapsed_time_sec
  {
    size_t item_size = sizeof(ros_message->elapsed_time_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
size_t max_serialized_size_nidar_interfaces__msg__MissionStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: mission_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: state
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: survivors_detected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: survivors_geotagged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: deliveries_pending
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: deliveries_completed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: completion_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: elapsed_time_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nidar_interfaces__msg__MissionStatus;
    is_plain =
      (
      offsetof(DataType, elapsed_time_sec) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
bool cdr_serialize_key_nidar_interfaces__msg__MissionStatus(
  const nidar_interfaces__msg__MissionStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->timestamp, cdr);
  }

  // Field name: mission_id
  {
    const rosidl_runtime_c__String * str = &ros_message->mission_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: state
  {
    const rosidl_runtime_c__String * str = &ros_message->state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: survivors_detected
  {
    cdr << ros_message->survivors_detected;
  }

  // Field name: survivors_geotagged
  {
    cdr << ros_message->survivors_geotagged;
  }

  // Field name: deliveries_pending
  {
    cdr << ros_message->deliveries_pending;
  }

  // Field name: deliveries_completed
  {
    cdr << ros_message->deliveries_completed;
  }

  // Field name: completion_percent
  {
    cdr << ros_message->completion_percent;
  }

  // Field name: elapsed_time_sec
  {
    cdr << ros_message->elapsed_time_sec;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
size_t get_serialized_size_key_nidar_interfaces__msg__MissionStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MissionStatus__ros_msg_type * ros_message = static_cast<const _MissionStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: timestamp
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->timestamp), current_alignment);

  // Field name: mission_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mission_id.size + 1);

  // Field name: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state.size + 1);

  // Field name: survivors_detected
  {
    size_t item_size = sizeof(ros_message->survivors_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: survivors_geotagged
  {
    size_t item_size = sizeof(ros_message->survivors_geotagged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: deliveries_pending
  {
    size_t item_size = sizeof(ros_message->deliveries_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: deliveries_completed
  {
    size_t item_size = sizeof(ros_message->deliveries_completed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: completion_percent
  {
    size_t item_size = sizeof(ros_message->completion_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: elapsed_time_sec
  {
    size_t item_size = sizeof(ros_message->elapsed_time_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nidar_interfaces
size_t max_serialized_size_key_nidar_interfaces__msg__MissionStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: mission_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: state
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: survivors_detected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: survivors_geotagged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: deliveries_pending
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: deliveries_completed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: completion_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: elapsed_time_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nidar_interfaces__msg__MissionStatus;
    is_plain =
      (
      offsetof(DataType, elapsed_time_sec) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MissionStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const nidar_interfaces__msg__MissionStatus * ros_message = static_cast<const nidar_interfaces__msg__MissionStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_nidar_interfaces__msg__MissionStatus(ros_message, cdr);
}

static bool _MissionStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  nidar_interfaces__msg__MissionStatus * ros_message = static_cast<nidar_interfaces__msg__MissionStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_nidar_interfaces__msg__MissionStatus(cdr, ros_message);
}

static uint32_t _MissionStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nidar_interfaces__msg__MissionStatus(
      untyped_ros_message, 0));
}

static size_t _MissionStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nidar_interfaces__msg__MissionStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MissionStatus = {
  "nidar_interfaces::msg",
  "MissionStatus",
  _MissionStatus__cdr_serialize,
  _MissionStatus__cdr_deserialize,
  _MissionStatus__get_serialized_size,
  _MissionStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MissionStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MissionStatus,
  get_message_typesupport_handle_function,
  &nidar_interfaces__msg__MissionStatus__get_type_hash,
  &nidar_interfaces__msg__MissionStatus__get_type_description,
  &nidar_interfaces__msg__MissionStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nidar_interfaces, msg, MissionStatus)() {
  return &_MissionStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
