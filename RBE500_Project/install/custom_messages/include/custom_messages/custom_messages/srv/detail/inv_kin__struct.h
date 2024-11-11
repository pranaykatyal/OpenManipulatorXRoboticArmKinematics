// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:srv/InvKin.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__SRV__DETAIL__INV_KIN__STRUCT_H_
#define CUSTOM_MESSAGES__SRV__DETAIL__INV_KIN__STRUCT_H_

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

/// Struct defined in srv/InvKin in the package custom_messages.
typedef struct custom_messages__srv__InvKin_Request
{
  geometry_msgs__msg__Pose pose;
} custom_messages__srv__InvKin_Request;

// Struct for a sequence of custom_messages__srv__InvKin_Request.
typedef struct custom_messages__srv__InvKin_Request__Sequence
{
  custom_messages__srv__InvKin_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__srv__InvKin_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/InvKin in the package custom_messages.
typedef struct custom_messages__srv__InvKin_Response
{
  float q_1;
  float q_2;
  float q_3;
  float q_4;
} custom_messages__srv__InvKin_Response;

// Struct for a sequence of custom_messages__srv__InvKin_Response.
typedef struct custom_messages__srv__InvKin_Response__Sequence
{
  custom_messages__srv__InvKin_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__srv__InvKin_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__SRV__DETAIL__INV_KIN__STRUCT_H_
