// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from open_manipulator_msgs:srv/GetJointPosition.idl
// generated code does not contain a copyright notice
#include "open_manipulator_msgs/srv/detail/get_joint_position__rosidl_typesupport_fastrtps_cpp.hpp"
#include "open_manipulator_msgs/srv/detail/get_joint_position__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace open_manipulator_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
cdr_serialize(
  const open_manipulator_msgs::srv::GetJointPosition_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: planning_group
  cdr << ros_message.planning_group;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  open_manipulator_msgs::srv::GetJointPosition_Request & ros_message)
{
  // Member: planning_group
  cdr >> ros_message.planning_group;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
get_serialized_size(
  const open_manipulator_msgs::srv::GetJointPosition_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: planning_group
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.planning_group.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
max_serialized_size_GetJointPosition_Request(
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


  // Member: planning_group
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = open_manipulator_msgs::srv::GetJointPosition_Request;
    is_plain =
      (
      offsetof(DataType, planning_group) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetJointPosition_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const open_manipulator_msgs::srv::GetJointPosition_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetJointPosition_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<open_manipulator_msgs::srv::GetJointPosition_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetJointPosition_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const open_manipulator_msgs::srv::GetJointPosition_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetJointPosition_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetJointPosition_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetJointPosition_Request__callbacks = {
  "open_manipulator_msgs::srv",
  "GetJointPosition_Request",
  _GetJointPosition_Request__cdr_serialize,
  _GetJointPosition_Request__cdr_deserialize,
  _GetJointPosition_Request__get_serialized_size,
  _GetJointPosition_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetJointPosition_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetJointPosition_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace open_manipulator_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_open_manipulator_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<open_manipulator_msgs::srv::GetJointPosition_Request>()
{
  return &open_manipulator_msgs::srv::typesupport_fastrtps_cpp::_GetJointPosition_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_manipulator_msgs, srv, GetJointPosition_Request)() {
  return &open_manipulator_msgs::srv::typesupport_fastrtps_cpp::_GetJointPosition_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace open_manipulator_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const open_manipulator_msgs::msg::JointPosition &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  open_manipulator_msgs::msg::JointPosition &);
size_t get_serialized_size(
  const open_manipulator_msgs::msg::JointPosition &,
  size_t current_alignment);
size_t
max_serialized_size_JointPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace open_manipulator_msgs


namespace open_manipulator_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
cdr_serialize(
  const open_manipulator_msgs::srv::GetJointPosition_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_position
  open_manipulator_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.joint_position,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  open_manipulator_msgs::srv::GetJointPosition_Response & ros_message)
{
  // Member: joint_position
  open_manipulator_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.joint_position);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
get_serialized_size(
  const open_manipulator_msgs::srv::GetJointPosition_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_position

  current_alignment +=
    open_manipulator_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.joint_position, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
max_serialized_size_GetJointPosition_Response(
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


  // Member: joint_position
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        open_manipulator_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointPosition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = open_manipulator_msgs::srv::GetJointPosition_Response;
    is_plain =
      (
      offsetof(DataType, joint_position) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetJointPosition_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const open_manipulator_msgs::srv::GetJointPosition_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetJointPosition_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<open_manipulator_msgs::srv::GetJointPosition_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetJointPosition_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const open_manipulator_msgs::srv::GetJointPosition_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetJointPosition_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetJointPosition_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetJointPosition_Response__callbacks = {
  "open_manipulator_msgs::srv",
  "GetJointPosition_Response",
  _GetJointPosition_Response__cdr_serialize,
  _GetJointPosition_Response__cdr_deserialize,
  _GetJointPosition_Response__get_serialized_size,
  _GetJointPosition_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetJointPosition_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetJointPosition_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace open_manipulator_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_open_manipulator_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<open_manipulator_msgs::srv::GetJointPosition_Response>()
{
  return &open_manipulator_msgs::srv::typesupport_fastrtps_cpp::_GetJointPosition_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_manipulator_msgs, srv, GetJointPosition_Response)() {
  return &open_manipulator_msgs::srv::typesupport_fastrtps_cpp::_GetJointPosition_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace open_manipulator_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetJointPosition__callbacks = {
  "open_manipulator_msgs::srv",
  "GetJointPosition",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_manipulator_msgs, srv, GetJointPosition_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_manipulator_msgs, srv, GetJointPosition_Response)(),
};

static rosidl_service_type_support_t _GetJointPosition__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetJointPosition__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace open_manipulator_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_open_manipulator_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<open_manipulator_msgs::srv::GetJointPosition>()
{
  return &open_manipulator_msgs::srv::typesupport_fastrtps_cpp::_GetJointPosition__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_manipulator_msgs, srv, GetJointPosition)() {
  return &open_manipulator_msgs::srv::typesupport_fastrtps_cpp::_GetJointPosition__handle;
}

#ifdef __cplusplus
}
#endif
