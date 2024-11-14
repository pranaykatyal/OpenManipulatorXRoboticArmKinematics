// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from open_manipulator_msgs:srv/SetKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_KINEMATICS_POSE__STRUCT_H_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_KINEMATICS_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'planning_group'
// Member 'end_effector_name'
#include "rosidl_runtime_c/string.h"
// Member 'kinematics_pose'
#include "open_manipulator_msgs/msg/detail/kinematics_pose__struct.h"

/// Struct defined in srv/SetKinematicsPose in the package open_manipulator_msgs.
typedef struct open_manipulator_msgs__srv__SetKinematicsPose_Request
{
  rosidl_runtime_c__String planning_group;
  rosidl_runtime_c__String end_effector_name;
  open_manipulator_msgs__msg__KinematicsPose kinematics_pose;
  double path_time;
} open_manipulator_msgs__srv__SetKinematicsPose_Request;

// Struct for a sequence of open_manipulator_msgs__srv__SetKinematicsPose_Request.
typedef struct open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence
{
  open_manipulator_msgs__srv__SetKinematicsPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetKinematicsPose in the package open_manipulator_msgs.
typedef struct open_manipulator_msgs__srv__SetKinematicsPose_Response
{
  bool is_planned;
} open_manipulator_msgs__srv__SetKinematicsPose_Response;

// Struct for a sequence of open_manipulator_msgs__srv__SetKinematicsPose_Response.
typedef struct open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence
{
  open_manipulator_msgs__srv__SetKinematicsPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_KINEMATICS_POSE__STRUCT_H_
