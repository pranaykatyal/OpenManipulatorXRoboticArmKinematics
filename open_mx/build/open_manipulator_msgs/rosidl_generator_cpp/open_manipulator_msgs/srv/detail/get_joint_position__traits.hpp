// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from open_manipulator_msgs:srv/GetJointPosition.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_JOINT_POSITION__TRAITS_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_JOINT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "open_manipulator_msgs/srv/detail/get_joint_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace open_manipulator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetJointPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: planning_group
  {
    out << "planning_group: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_group, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetJointPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: planning_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_group: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_group, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetJointPosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace open_manipulator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use open_manipulator_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const open_manipulator_msgs::srv::GetJointPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  open_manipulator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use open_manipulator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const open_manipulator_msgs::srv::GetJointPosition_Request & msg)
{
  return open_manipulator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<open_manipulator_msgs::srv::GetJointPosition_Request>()
{
  return "open_manipulator_msgs::srv::GetJointPosition_Request";
}

template<>
inline const char * name<open_manipulator_msgs::srv::GetJointPosition_Request>()
{
  return "open_manipulator_msgs/srv/GetJointPosition_Request";
}

template<>
struct has_fixed_size<open_manipulator_msgs::srv::GetJointPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<open_manipulator_msgs::srv::GetJointPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<open_manipulator_msgs::srv::GetJointPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'joint_position'
#include "open_manipulator_msgs/msg/detail/joint_position__traits.hpp"

namespace open_manipulator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetJointPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_position
  {
    out << "joint_position: ";
    to_flow_style_yaml(msg.joint_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetJointPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_position:\n";
    to_block_style_yaml(msg.joint_position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetJointPosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace open_manipulator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use open_manipulator_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const open_manipulator_msgs::srv::GetJointPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  open_manipulator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use open_manipulator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const open_manipulator_msgs::srv::GetJointPosition_Response & msg)
{
  return open_manipulator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<open_manipulator_msgs::srv::GetJointPosition_Response>()
{
  return "open_manipulator_msgs::srv::GetJointPosition_Response";
}

template<>
inline const char * name<open_manipulator_msgs::srv::GetJointPosition_Response>()
{
  return "open_manipulator_msgs/srv/GetJointPosition_Response";
}

template<>
struct has_fixed_size<open_manipulator_msgs::srv::GetJointPosition_Response>
  : std::integral_constant<bool, has_fixed_size<open_manipulator_msgs::msg::JointPosition>::value> {};

template<>
struct has_bounded_size<open_manipulator_msgs::srv::GetJointPosition_Response>
  : std::integral_constant<bool, has_bounded_size<open_manipulator_msgs::msg::JointPosition>::value> {};

template<>
struct is_message<open_manipulator_msgs::srv::GetJointPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<open_manipulator_msgs::srv::GetJointPosition>()
{
  return "open_manipulator_msgs::srv::GetJointPosition";
}

template<>
inline const char * name<open_manipulator_msgs::srv::GetJointPosition>()
{
  return "open_manipulator_msgs/srv/GetJointPosition";
}

template<>
struct has_fixed_size<open_manipulator_msgs::srv::GetJointPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<open_manipulator_msgs::srv::GetJointPosition_Request>::value &&
    has_fixed_size<open_manipulator_msgs::srv::GetJointPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<open_manipulator_msgs::srv::GetJointPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<open_manipulator_msgs::srv::GetJointPosition_Request>::value &&
    has_bounded_size<open_manipulator_msgs::srv::GetJointPosition_Response>::value
  >
{
};

template<>
struct is_service<open_manipulator_msgs::srv::GetJointPosition>
  : std::true_type
{
};

template<>
struct is_service_request<open_manipulator_msgs::srv::GetJointPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<open_manipulator_msgs::srv::GetJointPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_JOINT_POSITION__TRAITS_HPP_
