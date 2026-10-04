// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from nidar_interfaces:msg/MissionScore.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nidar_interfaces/msg/mission_score.h"


#ifndef NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__FUNCTIONS_H_
#define NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "nidar_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "nidar_interfaces/msg/detail/mission_score__struct.h"

/// Initialize msg/MissionScore message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nidar_interfaces__msg__MissionScore
 * )) before or use
 * nidar_interfaces__msg__MissionScore__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
bool
nidar_interfaces__msg__MissionScore__init(nidar_interfaces__msg__MissionScore * msg);

/// Finalize msg/MissionScore message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
void
nidar_interfaces__msg__MissionScore__fini(nidar_interfaces__msg__MissionScore * msg);

/// Create msg/MissionScore message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nidar_interfaces__msg__MissionScore__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
nidar_interfaces__msg__MissionScore *
nidar_interfaces__msg__MissionScore__create(void);

/// Destroy msg/MissionScore message.
/**
 * It calls
 * nidar_interfaces__msg__MissionScore__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
void
nidar_interfaces__msg__MissionScore__destroy(nidar_interfaces__msg__MissionScore * msg);

/// Check for msg/MissionScore message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
bool
nidar_interfaces__msg__MissionScore__are_equal(const nidar_interfaces__msg__MissionScore * lhs, const nidar_interfaces__msg__MissionScore * rhs);

/// Copy a msg/MissionScore message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
bool
nidar_interfaces__msg__MissionScore__copy(
  const nidar_interfaces__msg__MissionScore * input,
  nidar_interfaces__msg__MissionScore * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
const rosidl_type_hash_t *
nidar_interfaces__msg__MissionScore__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
nidar_interfaces__msg__MissionScore__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
const rosidl_runtime_c__type_description__TypeSource *
nidar_interfaces__msg__MissionScore__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
nidar_interfaces__msg__MissionScore__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/MissionScore messages.
/**
 * It allocates the memory for the number of elements and calls
 * nidar_interfaces__msg__MissionScore__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
bool
nidar_interfaces__msg__MissionScore__Sequence__init(nidar_interfaces__msg__MissionScore__Sequence * array, size_t size);

/// Finalize array of msg/MissionScore messages.
/**
 * It calls
 * nidar_interfaces__msg__MissionScore__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
void
nidar_interfaces__msg__MissionScore__Sequence__fini(nidar_interfaces__msg__MissionScore__Sequence * array);

/// Create array of msg/MissionScore messages.
/**
 * It allocates the memory for the array and calls
 * nidar_interfaces__msg__MissionScore__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
nidar_interfaces__msg__MissionScore__Sequence *
nidar_interfaces__msg__MissionScore__Sequence__create(size_t size);

/// Destroy array of msg/MissionScore messages.
/**
 * It calls
 * nidar_interfaces__msg__MissionScore__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
void
nidar_interfaces__msg__MissionScore__Sequence__destroy(nidar_interfaces__msg__MissionScore__Sequence * array);

/// Check for msg/MissionScore message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
bool
nidar_interfaces__msg__MissionScore__Sequence__are_equal(const nidar_interfaces__msg__MissionScore__Sequence * lhs, const nidar_interfaces__msg__MissionScore__Sequence * rhs);

/// Copy an array of msg/MissionScore messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nidar_interfaces
bool
nidar_interfaces__msg__MissionScore__Sequence__copy(
  const nidar_interfaces__msg__MissionScore__Sequence * input,
  nidar_interfaces__msg__MissionScore__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NIDAR_INTERFACES__MSG__DETAIL__MISSION_SCORE__FUNCTIONS_H_
