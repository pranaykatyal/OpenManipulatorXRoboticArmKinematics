// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from open_manipulator_msgs:srv/SetDrawingTrajectory.idl
// generated code does not contain a copyright notice
#include "open_manipulator_msgs/srv/detail/set_drawing_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "open_manipulator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "open_manipulator_msgs/srv/detail/set_drawing_trajectory__struct.h"
#include "open_manipulator_msgs/srv/detail/set_drawing_trajectory__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // param
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // param
#include "rosidl_runtime_c/string.h"  // drawing_trajectory_name, end_effector_name
#include "rosidl_runtime_c/string_functions.h"  // drawing_trajectory_name, end_effector_name

// forward declare type support functions


using _SetDrawingTrajectory_Request__ros_msg_type = open_manipulator_msgs__srv__SetDrawingTrajectory_Request;

static bool _SetDrawingTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetDrawingTrajectory_Request__ros_msg_type * ros_message = static_cast<const _SetDrawingTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: end_effector_name
  {
    const rosidl_runtime_c__String * str = &ros_message->end_effector_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: drawing_trajectory_name
  {
    const rosidl_runtime_c__String * str = &ros_message->drawing_trajectory_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: param
  {
    size_t size = ros_message->param.size;
    auto array_ptr = ros_message->param.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: path_time
  {
    cdr << ros_message->path_time;
  }

  return true;
}

static bool _SetDrawingTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetDrawingTrajectory_Request__ros_msg_type * ros_message = static_cast<_SetDrawingTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: end_effector_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->end_effector_name.data) {
      rosidl_runtime_c__String__init(&ros_message->end_effector_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->end_effector_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'end_effector_name'\n");
      return false;
    }
  }

  // Field name: drawing_trajectory_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->drawing_trajectory_name.data) {
      rosidl_runtime_c__String__init(&ros_message->drawing_trajectory_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->drawing_trajectory_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'drawing_trajectory_name'\n");
      return false;
    }
  }

  // Field name: param
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->param.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->param);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->param, size)) {
      fprintf(stderr, "failed to create array for field 'param'");
      return false;
    }
    auto array_ptr = ros_message->param.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: path_time
  {
    cdr >> ros_message->path_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_open_manipulator_msgs
size_t get_serialized_size_open_manipulator_msgs__srv__SetDrawingTrajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetDrawingTrajectory_Request__ros_msg_type * ros_message = static_cast<const _SetDrawingTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name end_effector_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->end_effector_name.size + 1);
  // field.name drawing_trajectory_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->drawing_trajectory_name.size + 1);
  // field.name param
  {
    size_t array_size = ros_message->param.size;
    auto array_ptr = ros_message->param.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_time
  {
    size_t item_size = sizeof(ros_message->path_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetDrawingTrajectory_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_open_manipulator_msgs__srv__SetDrawingTrajectory_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_open_manipulator_msgs
size_t max_serialized_size_open_manipulator_msgs__srv__SetDrawingTrajectory_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: end_effector_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: drawing_trajectory_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: param
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: path_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = open_manipulator_msgs__srv__SetDrawingTrajectory_Request;
    is_plain =
      (
      offsetof(DataType, path_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetDrawingTrajectory_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_open_manipulator_msgs__srv__SetDrawingTrajectory_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetDrawingTrajectory_Request = {
  "open_manipulator_msgs::srv",
  "SetDrawingTrajectory_Request",
  _SetDrawingTrajectory_Request__cdr_serialize,
  _SetDrawingTrajectory_Request__cdr_deserialize,
  _SetDrawingTrajectory_Request__get_serialized_size,
  _SetDrawingTrajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetDrawingTrajectory_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetDrawingTrajectory_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, open_manipulator_msgs, srv, SetDrawingTrajectory_Request)() {
  return &_SetDrawingTrajectory_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "open_manipulator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "open_manipulator_msgs/srv/detail/set_drawing_trajectory__struct.h"
// already included above
// #include "open_manipulator_msgs/srv/detail/set_drawing_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetDrawingTrajectory_Response__ros_msg_type = open_manipulator_msgs__srv__SetDrawingTrajectory_Response;

static bool _SetDrawingTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetDrawingTrajectory_Response__ros_msg_type * ros_message = static_cast<const _SetDrawingTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: is_planned
  {
    cdr << (ros_message->is_planned ? true : false);
  }

  return true;
}

static bool _SetDrawingTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetDrawingTrajectory_Response__ros_msg_type * ros_message = static_cast<_SetDrawingTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: is_planned
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_planned = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_open_manipulator_msgs
size_t get_serialized_size_open_manipulator_msgs__srv__SetDrawingTrajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetDrawingTrajectory_Response__ros_msg_type * ros_message = static_cast<const _SetDrawingTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_planned
  {
    size_t item_size = sizeof(ros_message->is_planned);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetDrawingTrajectory_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_open_manipulator_msgs__srv__SetDrawingTrajectory_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_open_manipulator_msgs
size_t max_serialized_size_open_manipulator_msgs__srv__SetDrawingTrajectory_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: is_planned
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = open_manipulator_msgs__srv__SetDrawingTrajectory_Response;
    is_plain =
      (
      offsetof(DataType, is_planned) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetDrawingTrajectory_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_open_manipulator_msgs__srv__SetDrawingTrajectory_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetDrawingTrajectory_Response = {
  "open_manipulator_msgs::srv",
  "SetDrawingTrajectory_Response",
  _SetDrawingTrajectory_Response__cdr_serialize,
  _SetDrawingTrajectory_Response__cdr_deserialize,
  _SetDrawingTrajectory_Response__get_serialized_size,
  _SetDrawingTrajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetDrawingTrajectory_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetDrawingTrajectory_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, open_manipulator_msgs, srv, SetDrawingTrajectory_Response)() {
  return &_SetDrawingTrajectory_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "open_manipulator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "open_manipulator_msgs/srv/set_drawing_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetDrawingTrajectory__callbacks = {
  "open_manipulator_msgs::srv",
  "SetDrawingTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, open_manipulator_msgs, srv, SetDrawingTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, open_manipulator_msgs, srv, SetDrawingTrajectory_Response)(),
};

static rosidl_service_type_support_t SetDrawingTrajectory__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetDrawingTrajectory__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, open_manipulator_msgs, srv, SetDrawingTrajectory)() {
  return &SetDrawingTrajectory__handle;
}

#if defined(__cplusplus)
}
#endif
