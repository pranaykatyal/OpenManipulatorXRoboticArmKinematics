// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from open_manipulator_msgs:srv/SetKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_KINEMATICS_POSE__TRAITS_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_KINEMATICS_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "open_manipulator_msgs/srv/detail/set_kinematics_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'kinematics_pose'
#include "open_manipulator_msgs/msg/detail/kinematics_pose__traits.hpp"

namespace open_manipulator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetKinematicsPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: planning_group
  {
    out << "planning_group: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_group, out);
    out << ", ";
  }

  // member: end_effector_name
  {
    out << "end_effector_name: ";
    rosidl_generator_traits::value_to_yaml(msg.end_effector_name, out);
    out << ", ";
  }

  // member: kinematics_pose
  {
    out << "kinematics_pose: ";
    to_flow_style_yaml(msg.kinematics_pose, out);
    out << ", ";
  }

  // member: path_time
  {
    out << "path_time: ";
    rosidl_generator_traits::value_to_yaml(msg.path_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetKinematicsPose_Request & msg,
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

  // member: end_effector_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_effector_name: ";
    rosidl_generator_traits::value_to_yaml(msg.end_effector_name, out);
    out << "\n";
  }

  // member: kinematics_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kinematics_pose:\n";
    to_block_style_yaml(msg.kinematics_pose, out, indentation + 2);
  }

  // member: path_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_time: ";
    rosidl_generator_traits::value_to_yaml(msg.path_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetKinematicsPose_Request & msg, bool use_flow_style = false)
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
  const open_manipulator_msgs::srv::SetKinematicsPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  open_manipulator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use open_manipulator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const open_manipulator_msgs::srv::SetKinematicsPose_Request & msg)
{
  return open_manipulator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<open_manipulator_msgs::srv::SetKinematicsPose_Request>()
{
  return "open_manipulator_msgs::srv::SetKinematicsPose_Request";
}

template<>
inline const char * name<open_manipulator_msgs::srv::SetKinematicsPose_Request>()
{
  return "open_manipulator_msgs/srv/SetKinematicsPose_Request";
}

template<>
struct has_fixed_size<open_manipulator_msgs::srv::SetKinematicsPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<open_manipulator_msgs::srv::SetKinematicsPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<open_manipulator_msgs::srv::SetKinematicsPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace open_manipulator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetKinematicsPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_planned
  {
    out << "is_planned: ";
    rosidl_generator_traits::value_to_yaml(msg.is_planned, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetKinematicsPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_planned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_planned: ";
    rosidl_generator_traits::value_to_yaml(msg.is_planned, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetKinematicsPose_Response & msg, bool use_flow_style = false)
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
  const open_manipulator_msgs::srv::SetKinematicsPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  open_manipulator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use open_manipulator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const open_manipulator_msgs::srv::SetKinematicsPose_Response & msg)
{
  return open_manipulator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<open_manipulator_msgs::srv::SetKinematicsPose_Response>()
{
  return "open_manipulator_msgs::srv::SetKinematicsPose_Response";
}

template<>
inline const char * name<open_manipulator_msgs::srv::SetKinematicsPose_Response>()
{
  return "open_manipulator_msgs/srv/SetKinematicsPose_Response";
}

template<>
struct has_fixed_size<open_manipulator_msgs::srv::SetKinematicsPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<open_manipulator_msgs::srv::SetKinematicsPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<open_manipulator_msgs::srv::SetKinematicsPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<open_manipulator_msgs::srv::SetKinematicsPose>()
{
  return "open_manipulator_msgs::srv::SetKinematicsPose";
}

template<>
inline const char * name<open_manipulator_msgs::srv::SetKinematicsPose>()
{
  return "open_manipulator_msgs/srv/SetKinematicsPose";
}

template<>
struct has_fixed_size<open_manipulator_msgs::srv::SetKinematicsPose>
  : std::integral_constant<
    bool,
    has_fixed_size<open_manipulator_msgs::srv::SetKinematicsPose_Request>::value &&
    has_fixed_size<open_manipulator_msgs::srv::SetKinematicsPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<open_manipulator_msgs::srv::SetKinematicsPose>
  : std::integral_constant<
    bool,
    has_bounded_size<open_manipulator_msgs::srv::SetKinematicsPose_Request>::value &&
    has_bounded_size<open_manipulator_msgs::srv::SetKinematicsPose_Response>::value
  >
{
};

template<>
struct is_service<open_manipulator_msgs::srv::SetKinematicsPose>
  : std::true_type
{
};

template<>
struct is_service_request<open_manipulator_msgs::srv::SetKinematicsPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<open_manipulator_msgs::srv::SetKinematicsPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_KINEMATICS_POSE__TRAITS_HPP_
