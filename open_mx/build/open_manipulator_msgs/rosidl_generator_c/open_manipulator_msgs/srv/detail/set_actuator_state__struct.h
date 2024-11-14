// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from open_manipulator_msgs:srv/SetActuatorState.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_ACTUATOR_STATE__STRUCT_H_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_ACTUATOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetActuatorState in the package open_manipulator_msgs.
typedef struct open_manipulator_msgs__srv__SetActuatorState_Request
{
  bool set_actuator_state;
} open_manipulator_msgs__srv__SetActuatorState_Request;

// Struct for a sequence of open_manipulator_msgs__srv__SetActuatorState_Request.
typedef struct open_manipulator_msgs__srv__SetActuatorState_Request__Sequence
{
  open_manipulator_msgs__srv__SetActuatorState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__srv__SetActuatorState_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetActuatorState in the package open_manipulator_msgs.
typedef struct open_manipulator_msgs__srv__SetActuatorState_Response
{
  bool is_planned;
} open_manipulator_msgs__srv__SetActuatorState_Response;

// Struct for a sequence of open_manipulator_msgs__srv__SetActuatorState_Response.
typedef struct open_manipulator_msgs__srv__SetActuatorState_Response__Sequence
{
  open_manipulator_msgs__srv__SetActuatorState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_manipulator_msgs__srv__SetActuatorState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_ACTUATOR_STATE__STRUCT_H_
