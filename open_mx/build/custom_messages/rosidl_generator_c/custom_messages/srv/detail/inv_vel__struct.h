// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:srv/InvVel.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__SRV__DETAIL__INV_VEL__STRUCT_H_
#define CUSTOM_MESSAGES__SRV__DETAIL__INV_VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in srv/InvVel in the package custom_messages.
typedef struct custom_messages__srv__InvVel_Request
{
  geometry_msgs__msg__Twist twist;
} custom_messages__srv__InvVel_Request;

// Struct for a sequence of custom_messages__srv__InvVel_Request.
typedef struct custom_messages__srv__InvVel_Request__Sequence
{
  custom_messages__srv__InvVel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__srv__InvVel_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/InvVel in the package custom_messages.
typedef struct custom_messages__srv__InvVel_Response
{
  float q_1_dot;
  float q_2_dot;
  float q_3_dot;
  float q_4_dot;
} custom_messages__srv__InvVel_Response;

// Struct for a sequence of custom_messages__srv__InvVel_Response.
typedef struct custom_messages__srv__InvVel_Response__Sequence
{
  custom_messages__srv__InvVel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__srv__InvVel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__SRV__DETAIL__INV_VEL__STRUCT_H_
