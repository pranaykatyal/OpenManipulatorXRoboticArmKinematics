// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_sdk_custom_interfaces:srv/GetCurrent.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__GET_CURRENT__STRUCT_H_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__GET_CURRENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetCurrent in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__srv__GetCurrent_Request
{
  uint8_t id;
} dynamixel_sdk_custom_interfaces__srv__GetCurrent_Request;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__srv__GetCurrent_Request.
typedef struct dynamixel_sdk_custom_interfaces__srv__GetCurrent_Request__Sequence
{
  dynamixel_sdk_custom_interfaces__srv__GetCurrent_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__srv__GetCurrent_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetCurrent in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__srv__GetCurrent_Response
{
  int16_t current;
} dynamixel_sdk_custom_interfaces__srv__GetCurrent_Response;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__srv__GetCurrent_Response.
typedef struct dynamixel_sdk_custom_interfaces__srv__GetCurrent_Response__Sequence
{
  dynamixel_sdk_custom_interfaces__srv__GetCurrent_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__srv__GetCurrent_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__GET_CURRENT__STRUCT_H_
