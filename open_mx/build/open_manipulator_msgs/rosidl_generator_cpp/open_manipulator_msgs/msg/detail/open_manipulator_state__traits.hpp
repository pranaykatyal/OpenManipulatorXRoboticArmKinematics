// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from open_manipulator_msgs:msg/OpenManipulatorState.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__MSG__DETAIL__OPEN_MANIPULATOR_STATE__TRAITS_HPP_
#define OPEN_MANIPULATOR_MSGS__MSG__DETAIL__OPEN_MANIPULATOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "open_manipulator_msgs/msg/detail/open_manipulator_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace open_manipulator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OpenManipulatorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: open_manipulator_moving_state
  {
    out << "open_manipulator_moving_state: ";
    rosidl_generator_traits::value_to_yaml(msg.open_manipulator_moving_state, out);
    out << ", ";
  }

  // member: open_manipulator_actuator_state
  {
    out << "open_manipulator_actuator_state: ";
    rosidl_generator_traits::value_to_yaml(msg.open_manipulator_actuator_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenManipulatorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: open_manipulator_moving_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open_manipulator_moving_state: ";
    rosidl_generator_traits::value_to_yaml(msg.open_manipulator_moving_state, out);
    out << "\n";
  }

  // member: open_manipulator_actuator_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open_manipulator_actuator_state: ";
    rosidl_generator_traits::value_to_yaml(msg.open_manipulator_actuator_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenManipulatorState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace open_manipulator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use open_manipulator_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const open_manipulator_msgs::msg::OpenManipulatorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  open_manipulator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use open_manipulator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const open_manipulator_msgs::msg::OpenManipulatorState & msg)
{
  return open_manipulator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<open_manipulator_msgs::msg::OpenManipulatorState>()
{
  return "open_manipulator_msgs::msg::OpenManipulatorState";
}

template<>
inline const char * name<open_manipulator_msgs::msg::OpenManipulatorState>()
{
  return "open_manipulator_msgs/msg/OpenManipulatorState";
}

template<>
struct has_fixed_size<open_manipulator_msgs::msg::OpenManipulatorState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<open_manipulator_msgs::msg::OpenManipulatorState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<open_manipulator_msgs::msg::OpenManipulatorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPEN_MANIPULATOR_MSGS__MSG__DETAIL__OPEN_MANIPULATOR_STATE__TRAITS_HPP_
