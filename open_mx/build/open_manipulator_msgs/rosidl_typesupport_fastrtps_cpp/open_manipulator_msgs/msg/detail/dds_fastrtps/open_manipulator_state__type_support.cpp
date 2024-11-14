// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from open_manipulator_msgs:msg/OpenManipulatorState.idl
// generated code does not contain a copyright notice
#include "open_manipulator_msgs/msg/detail/open_manipulator_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "open_manipulator_msgs/msg/detail/open_manipulator_state__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
cdr_serialize(
  const open_manipulator_msgs::msg::OpenManipulatorState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: open_manipulator_moving_state
  cdr << ros_message.open_manipulator_moving_state;
  // Member: open_manipulator_actuator_state
  cdr << ros_message.open_manipulator_actuator_state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  open_manipulator_msgs::msg::OpenManipulatorState & ros_message)
{
  // Member: open_manipulator_moving_state
  cdr >> ros_message.open_manipulator_moving_state;

  // Member: open_manipulator_actuator_state
  cdr >> ros_message.open_manipulator_actuator_state;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
get_serialized_size(
  const open_manipulator_msgs::msg::OpenManipulatorState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: open_manipulator_moving_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.open_manipulator_moving_state.size() + 1);
  // Member: open_manipulator_actuator_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.open_manipulator_actuator_state.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_manipulator_msgs
max_serialized_size_OpenManipulatorState(
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


  // Member: open_manipulator_moving_state
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

  // Member: open_manipulator_actuator_state
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
    using DataType = open_manipulator_msgs::msg::OpenManipulatorState;
    is_plain =
      (
      offsetof(DataType, open_manipulator_actuator_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _OpenManipulatorState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const open_manipulator_msgs::msg::OpenManipulatorState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OpenManipulatorState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<open_manipulator_msgs::msg::OpenManipulatorState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OpenManipulatorState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const open_manipulator_msgs::msg::OpenManipulatorState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OpenManipulatorState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_OpenManipulatorState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _OpenManipulatorState__callbacks = {
  "open_manipulator_msgs::msg",
  "OpenManipulatorState",
  _OpenManipulatorState__cdr_serialize,
  _OpenManipulatorState__cdr_deserialize,
  _OpenManipulatorState__get_serialized_size,
  _OpenManipulatorState__max_serialized_size
};

static rosidl_message_type_support_t _OpenManipulatorState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpenManipulatorState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace open_manipulator_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_open_manipulator_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<open_manipulator_msgs::msg::OpenManipulatorState>()
{
  return &open_manipulator_msgs::msg::typesupport_fastrtps_cpp::_OpenManipulatorState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_manipulator_msgs, msg, OpenManipulatorState)() {
  return &open_manipulator_msgs::msg::typesupport_fastrtps_cpp::_OpenManipulatorState__handle;
}

#ifdef __cplusplus
}
#endif
