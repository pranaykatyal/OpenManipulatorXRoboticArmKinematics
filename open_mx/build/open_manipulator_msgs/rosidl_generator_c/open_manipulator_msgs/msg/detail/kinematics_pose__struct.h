// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from open_manipulator_msgs:msg/KinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__MSG__DETAIL__KINEMATICS_POSE__STRUCT_H_
#define OPEN_MANIPULATOR_MSGS__MSG__DETAIL__KINEMATICS_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/KinematicsPose in the package open_manipulator_msgs.
typedef struct open_manipulator_msgs__msg__KinematicsPose
{
  geometry_msgs__msg__Pose pose;
  double max_accelerations_scaling_factor;
  double max_velocity_scaling_factor;
  double tolerance;
} open_manipulator_msgs__msg__KinematicsPose;

// Struct for a sequence of open_manipulator_msgs__msg__KinematicsPose.
typedef struct open_manipulator_msgs__msg__KinematicsPose__Sequence
{
  open_manipulator_msgs__msg__KinematicsPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__msg__KinematicsPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPEN_MANIPULATOR_MSGS__MSG__DETAIL__KINEMATICS_POSE__STRUCT_H_
