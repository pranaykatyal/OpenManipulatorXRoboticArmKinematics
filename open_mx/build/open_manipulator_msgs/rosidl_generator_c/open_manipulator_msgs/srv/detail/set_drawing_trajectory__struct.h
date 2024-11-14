// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from open_manipulator_msgs:srv/SetDrawingTrajectory.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_DRAWING_TRAJECTORY__STRUCT_H_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_DRAWING_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'end_effector_name'
// Member 'drawing_trajectory_name'
#include "rosidl_runtime_c/string.h"
// Member 'param'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetDrawingTrajectory in the package open_manipulator_msgs.
typedef struct open_manipulator_msgs__srv__SetDrawingTrajectory_Request
{
  rosidl_runtime_c__String end_effector_name;
  rosidl_runtime_c__String drawing_trajectory_name;
  rosidl_runtime_c__double__Sequence param;
  double path_time;
} open_manipulator_msgs__srv__SetDrawingTrajectory_Request;

// Struct for a sequence of open_manipulator_msgs__srv__SetDrawingTrajectory_Request.
typedef struct open_manipulator_msgs__srv__SetDrawingTrajectory_Request__Sequence
{
  open_manipulator_msgs__srv__SetDrawingTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__srv__SetDrawingTrajectory_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetDrawingTrajectory in the package open_manipulator_msgs.
typedef struct open_manipulator_msgs__srv__SetDrawingTrajectory_Response
{
  bool is_planned;
} open_manipulator_msgs__srv__SetDrawingTrajectory_Response;

// Struct for a sequence of open_manipulator_msgs__srv__SetDrawingTrajectory_Response.
typedef struct open_manipulator_msgs__srv__SetDrawingTrajectory_Response__Sequence
{
  open_manipulator_msgs__srv__SetDrawingTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__srv__SetDrawingTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_DRAWING_TRAJECTORY__STRUCT_H_
