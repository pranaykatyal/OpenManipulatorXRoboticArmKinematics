// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from open_manipulator_msgs:msg/OpenManipulatorState.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__MSG__DETAIL__OPEN_MANIPULATOR_STATE__STRUCT_H_
#define OPEN_MANIPULATOR_MSGS__MSG__DETAIL__OPEN_MANIPULATOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IS_MOVING'.
static const char * const open_manipulator_msgs__msg__OpenManipulatorState__IS_MOVING = "IS_MOVING";

/// Constant 'STOPPED'.
static const char * const open_manipulator_msgs__msg__OpenManipulatorState__STOPPED = "STOPPED";

/// Constant 'ACTUATOR_ENABLED'.
static const char * const open_manipulator_msgs__msg__OpenManipulatorState__ACTUATOR_ENABLED = "ACTUATOR_ENABLED";

/// Constant 'ACTUATOR_DISABLED'.
static const char * const open_manipulator_msgs__msg__OpenManipulatorState__ACTUATOR_DISABLED = "ACTUATOR_DISABLED";

// Include directives for member types
// Member 'open_manipulator_moving_state'
// Member 'open_manipulator_actuator_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/OpenManipulatorState in the package open_manipulator_msgs.
/**
  * CONSTANTS
 */
typedef struct open_manipulator_msgs__msg__OpenManipulatorState
{
  /// Messages
  rosidl_runtime_c__String open_manipulator_moving_state;
  rosidl_runtime_c__String open_manipulator_actuator_state;
} open_manipulator_msgs__msg__OpenManipulatorState;

// Struct for a sequence of open_manipulator_msgs__msg__OpenManipulatorState.
typedef struct open_manipulator_msgs__msg__OpenManipulatorState__Sequence
{
  open_manipulator_msgs__msg__OpenManipulatorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__msg__OpenManipulatorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPEN_MANIPULATOR_MSGS__MSG__DETAIL__OPEN_MANIPULATOR_STATE__STRUCT_H_
