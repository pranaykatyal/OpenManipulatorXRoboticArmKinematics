// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from open_manipulator_msgs:srv/SetKinematicsPose.idl
// generated code does not contain a copyright notice
#include "open_manipulator_msgs/srv/detail/set_kinematics_pose__rosidl_typesupport_fastrtps_cpp.hpp"
#include "open_manipulator_msgs/srv/detail/set_kinematics_pose__struct.hpp"

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
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const open_manipulator_msgs::msg::KinematicsPose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  open_manipulator_msgs::msg::KinematicsPose &);
size_t get_serialized_size(
  const open_manipulator_msgs::msg::KinematicsPose &,
  size_t current_alignment);
size_t
max_serialized_size_KinematicsPose(
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
  const open_manipulator_msgs::srv::SetKinematicsPose_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: planning_group
  cdr << ros_message.planning_group;
  // Member: end_effector_name
  cdr << ros_message.end_effector_name;
  // Member: kinematics_pose
  open_manipulator_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.kinematics_pose,
    cdr);
  // Member: path_time
  cdr << ros_message.path_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  open_manipulator_msgs::srv::SetKinematicsPose_Request & ros_message)
{
  // Member: planning_group
  cdr >> ros_message.planning_group;

  // Member: end_effector_name
  cdr >> ros_message.end_effector_name;

  // Member: kinematics_pose
  open_manipulator_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.kinematics_pose);

  // Member: path_time
  cdr >> ros_message.path_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
get_serialized_size(
  const open_manipulator_msgs::srv::SetKinematicsPose_Request & ros_message,
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
  // Member: end_effector_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.end_effector_name.size() + 1);
  // Member: kinematics_pose

  current_alignment +=
    open_manipulator_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.kinematics_pose, current_alignment);
  // Member: path_time
  {
    size_t item_size = sizeof(ros_message.path_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
max_serialized_size_SetKinematicsPose_Request(
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

  // Member: end_effector_name
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

  // Member: kinematics_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        open_manipulator_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_KinematicsPose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: path_time
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
    using DataType = open_manipulator_msgs::srv::SetKinematicsPose_Request;
    is_plain =
      (
      offsetof(DataType, path_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetKinematicsPose_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const open_manipulator_msgs::srv::SetKinematicsPose_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetKinematicsPose_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<open_manipulator_msgs::srv::SetKinematicsPose_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetKinematicsPose_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const open_manipulator_msgs::srv::SetKinematicsPose_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetKinematicsPose_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetKinematicsPose_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetKinematicsPose_Request__callbacks = {
  "open_manipulator_msgs::srv",
  "SetKinematicsPose_Request",
  _SetKinematicsPose_Request__cdr_serialize,
  _SetKinematicsPose_Request__cdr_deserialize,
  _SetKinematicsPose_Request__get_serialized_size,
  _SetKinematicsPose_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetKinematicsPose_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetKinematicsPose_Request__callbacks,
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
get_message_type_support_handle<open_manipulator_msgs::srv::SetKinematicsPose_Request>()
{
  return &open_manipulator_msgs::srv::typesupport_fastrtps_cpp::_SetKinematicsPose_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_manipulator_msgs, srv, SetKinematicsPose_Request)() {
  return &open_manipulator_msgs::srv::typesupport_fastrtps_cpp::_SetKinematicsPose_Request__handle;
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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
cdr_serialize(
  const open_manipulator_msgs::srv::SetKinematicsPose_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_planned
  cdr << (ros_message.is_planned ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  open_manipulator_msgs::srv::SetKinematicsPose_Response & ros_message)
{
  // Member: is_planned
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_planned = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
get_serialized_size(
  const open_manipulator_msgs::srv::SetKinematicsPose_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_planned
  {
    size_t item_size = sizeof(ros_message.is_planned);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
max_serialized_size_SetKinematicsPose_Response(
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


  // Member: is_planned
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
    using DataType = open_manipulator_msgs::srv::SetKinematicsPose_Response;
    is_plain =
      (
      offsetof(DataType, is_planned) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetKinematicsPose_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const open_manipulator_msgs::srv::SetKinematicsPose_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetKinematicsPose_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<open_manipulator_msgs::srv::SetKinematicsPose_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetKinematicsPose_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const open_manipulator_msgs::srv::SetKinematicsPose_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetKinematicsPose_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetKinematicsPose_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetKinematicsPose_Response__callbacks = {
  "open_manipulator_msgs::srv",
  "SetKinematicsPose_Response",
  _SetKinematicsPose_Response__cdr_serialize,
  _SetKinematicsPose_Response__cdr_deserialize,
  _SetKinematicsPose_Response__get_serialized_size,
  _SetKinematicsPose_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetKinematicsPose_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetKinematicsPose_Response__callbacks,
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
get_message_type_support_handle<open_manipulator_msgs::srv::SetKinematicsPose_Response>()
{
  return &open_manipulator_msgs::srv::typesupport_fastrtps_cpp::_SetKinematicsPose_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_manipulator_msgs, srv, SetKinematicsPose_Response)() {
  return &open_manipulator_msgs::srv::typesupport_fastrtps_cpp::_SetKinematicsPose_Response__handle;
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

static service_type_support_callbacks_t _SetKinematicsPose__callbacks = {
  "open_manipulator_msgs::srv",
  "SetKinematicsPose",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_manipulator_msgs, srv, SetKinematicsPose_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_manipulator_msgs, srv, SetKinematicsPose_Response)(),
};

static rosidl_service_type_support_t _SetKinematicsPose__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetKinematicsPose__callbacks,
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
get_service_type_support_handle<open_manipulator_msgs::srv::SetKinematicsPose>()
{
  return &open_manipulator_msgs::srv::typesupport_fastrtps_cpp::_SetKinematicsPose__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_manipulator_msgs, srv, SetKinematicsPose)() {
  return &open_manipulator_msgs::srv::typesupport_fastrtps_cpp::_SetKinematicsPose__handle;
}

#ifdef __cplusplus
}
#endif
