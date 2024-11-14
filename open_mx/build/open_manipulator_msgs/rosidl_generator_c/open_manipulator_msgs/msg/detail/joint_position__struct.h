// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from open_manipulator_msgs:msg/JointPosition.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__MSG__DETAIL__JOINT_POSITION__STRUCT_H_
#define OPEN_MANIPULATOR_MSGS__MSG__DETAIL__JOINT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointPosition in the package open_manipulator_msgs.
typedef struct open_manipulator_msgs__msg__JointPosition
{
  rosidl_runtime_c__String__Sequence joint_name;
  rosidl_runtime_c__double__Sequence position;
  double max_accelerations_scaling_factor;
  double max_velocity_scaling_factor;
} open_manipulator_msgs__msg__JointPosition;

// Struct for a sequence of open_manipulator_msgs__msg__JointPosition.
typedef struct open_manipulator_msgs__msg__JointPosition__Sequence
{
  open_manipulator_msgs__msg__JointPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__msg__JointPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPEN_MANIPULATOR_MSGS__MSG__DETAIL__JOINT_POSITION__STRUCT_H_
