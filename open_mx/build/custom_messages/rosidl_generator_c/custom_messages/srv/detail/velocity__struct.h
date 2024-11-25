// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:srv/Velocity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__SRV__DETAIL__VELOCITY__STRUCT_H_
#define CUSTOM_MESSAGES__SRV__DETAIL__VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Velocity in the package custom_messages.
typedef struct custom_messages__srv__Velocity_Request
{
  float q_1;
  float q_2;
  float q_3;
  float q_4;
  float q_1_dot;
  float q_2_dot;
  float q_3_dot;
  float q_4_dot;
} custom_messages__srv__Velocity_Request;

// Struct for a sequence of custom_messages__srv__Velocity_Request.
typedef struct custom_messages__srv__Velocity_Request__Sequence
{
  custom_messages__srv__Velocity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__srv__Velocity_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in srv/Velocity in the package custom_messages.
typedef struct custom_messages__srv__Velocity_Response
{
  geometry_msgs__msg__Twist twist;
} custom_messages__srv__Velocity_Response;

// Struct for a sequence of custom_messages__srv__Velocity_Response.
typedef struct custom_messages__srv__Velocity_Response__Sequence
{
  custom_messages__srv__Velocity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__srv__Velocity_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__SRV__DETAIL__VELOCITY__STRUCT_H_
