// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from open_manipulator_msgs:srv/SetJointPosition.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_JOINT_POSITION__STRUCT_H_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_JOINT_POSITION__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"
// Member 'joint_position'
#include "open_manipulator_msgs/msg/detail/joint_position__struct.h"

/// Struct defined in srv/SetJointPosition in the package open_manipulator_msgs.
typedef struct open_manipulator_msgs__srv__SetJointPosition_Request
{
  rosidl_runtime_c__String planning_group;
  open_manipulator_msgs__msg__JointPosition joint_position;
  double path_time;
} open_manipulator_msgs__srv__SetJointPosition_Request;

// Struct for a sequence of open_manipulator_msgs__srv__SetJointPosition_Request.
typedef struct open_manipulator_msgs__srv__SetJointPosition_Request__Sequence
{
  open_manipulator_msgs__srv__SetJointPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__srv__SetJointPosition_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetJointPosition in the package open_manipulator_msgs.
typedef struct open_manipulator_msgs__srv__SetJointPosition_Response
{
  bool is_planned;
} open_manipulator_msgs__srv__SetJointPosition_Response;

// Struct for a sequence of open_manipulator_msgs__srv__SetJointPosition_Response.
typedef struct open_manipulator_msgs__srv__SetJointPosition_Response__Sequence
{
  open_manipulator_msgs__srv__SetJointPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__srv__SetJointPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_JOINT_POSITION__STRUCT_H_
