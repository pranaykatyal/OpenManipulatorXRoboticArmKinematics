// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from open_manipulator_msgs:srv/GetKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__STRUCT_H_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__STRUCT_H_

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

/// Struct defined in srv/GetKinematicsPose in the package open_manipulator_msgs.
typedef struct open_manipulator_msgs__srv__GetKinematicsPose_Request
{
  rosidl_runtime_c__String planning_group;
  rosidl_runtime_c__String end_effector_name;
} open_manipulator_msgs__srv__GetKinematicsPose_Request;

// Struct for a sequence of open_manipulator_msgs__srv__GetKinematicsPose_Request.
typedef struct open_manipulator_msgs__srv__GetKinematicsPose_Request__Sequence
{
  open_manipulator_msgs__srv__GetKinematicsPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__srv__GetKinematicsPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'kinematics_pose'
#include "open_manipulator_msgs/msg/detail/kinematics_pose__struct.h"

/// Struct defined in srv/GetKinematicsPose in the package open_manipulator_msgs.
typedef struct open_manipulator_msgs__srv__GetKinematicsPose_Response
{
  std_msgs__msg__Header header;
  open_manipulator_msgs__msg__KinematicsPose kinematics_pose;
} open_manipulator_msgs__srv__GetKinematicsPose_Response;

// Struct for a sequence of open_manipulator_msgs__srv__GetKinematicsPose_Response.
typedef struct open_manipulator_msgs__srv__GetKinematicsPose_Response__Sequence
{
  open_manipulator_msgs__srv__GetKinematicsPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__srv__GetKinematicsPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__STRUCT_H_
