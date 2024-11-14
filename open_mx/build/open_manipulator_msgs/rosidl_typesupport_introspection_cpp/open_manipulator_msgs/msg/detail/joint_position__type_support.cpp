// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from open_manipulator_msgs:msg/JointPosition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "open_manipulator_msgs/msg/detail/joint_position__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace open_manipulator_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointPosition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) open_manipulator_msgs::msg::JointPosition(_init);
}

void JointPosition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<open_manipulator_msgs::msg::JointPosition *>(message_memory);
  typed_message->~JointPosition();
}

size_t size_function__JointPosition__joint_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointPosition__joint_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__JointPosition__joint_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointPosition__joint_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__JointPosition__joint_name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__JointPosition__joint_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__JointPosition__joint_name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__JointPosition__joint_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointPosition__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointPosition__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointPosition__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointPosition__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointPosition__position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointPosition__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointPosition__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointPosition__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointPosition_message_member_array[4] = {
  {
    "joint_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs::msg::JointPosition, joint_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointPosition__joint_name,  // size() function pointer
    get_const_function__JointPosition__joint_name,  // get_const(index) function pointer
    get_function__JointPosition__joint_name,  // get(index) function pointer
    fetch_function__JointPosition__joint_name,  // fetch(index, &value) function pointer
    assign_function__JointPosition__joint_name,  // assign(index, value) function pointer
    resize_function__JointPosition__joint_name  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs::msg::JointPosition, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointPosition__position,  // size() function pointer
    get_const_function__JointPosition__position,  // get_const(index) function pointer
    get_function__JointPosition__position,  // get(index) function pointer
    fetch_function__JointPosition__position,  // fetch(index, &value) function pointer
    assign_function__JointPosition__position,  // assign(index, value) function pointer
    resize_function__JointPosition__position  // resize(index) function pointer
  },
  {
    "max_accelerations_scaling_factor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs::msg::JointPosition, max_accelerations_scaling_factor),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_velocity_scaling_factor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs::msg::JointPosition, max_velocity_scaling_factor),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointPosition_message_members = {
  "open_manipulator_msgs::msg",  // message namespace
  "JointPosition",  // message name
  4,  // number of fields
  sizeof(open_manipulator_msgs::msg::JointPosition),
  JointPosition_message_member_array,  // message members
  JointPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  JointPosition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointPosition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointPosition_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace open_manipulator_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<open_manipulator_msgs::msg::JointPosition>()
{
  return &::open_manipulator_msgs::msg::rosidl_typesupport_introspection_cpp::JointPosition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, open_manipulator_msgs, msg, JointPosition)() {
  return &::open_manipulator_msgs::msg::rosidl_typesupport_introspection_cpp::JointPosition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
