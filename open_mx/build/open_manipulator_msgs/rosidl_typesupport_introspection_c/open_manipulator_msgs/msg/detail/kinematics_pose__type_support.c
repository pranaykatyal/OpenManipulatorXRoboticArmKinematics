// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from open_manipulator_msgs:msg/KinematicsPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "open_manipulator_msgs/msg/detail/kinematics_pose__rosidl_typesupport_introspection_c.h"
#include "open_manipulator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "open_manipulator_msgs/msg/detail/kinematics_pose__functions.h"
#include "open_manipulator_msgs/msg/detail/kinematics_pose__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  open_manipulator_msgs__msg__KinematicsPose__init(message_memory);
}

void open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_fini_function(void * message_memory)
{
  open_manipulator_msgs__msg__KinematicsPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_message_member_array[4] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs__msg__KinematicsPose, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_accelerations_scaling_factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs__msg__KinematicsPose, max_accelerations_scaling_factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_velocity_scaling_factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs__msg__KinematicsPose, max_velocity_scaling_factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs__msg__KinematicsPose, tolerance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_message_members = {
  "open_manipulator_msgs__msg",  // message namespace
  "KinematicsPose",  // message name
  4,  // number of fields
  sizeof(open_manipulator_msgs__msg__KinematicsPose),
  open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_message_member_array,  // message members
  open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_init_function,  // function to initialize message memory (memory has to be allocated)
  open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_message_type_support_handle = {
  0,
  &open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_open_manipulator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, open_manipulator_msgs, msg, KinematicsPose)() {
  open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_message_type_support_handle.typesupport_identifier) {
    open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &open_manipulator_msgs__msg__KinematicsPose__rosidl_typesupport_introspection_c__KinematicsPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
