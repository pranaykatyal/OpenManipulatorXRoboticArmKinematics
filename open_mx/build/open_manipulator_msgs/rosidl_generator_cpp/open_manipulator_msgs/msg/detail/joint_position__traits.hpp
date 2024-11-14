// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from open_manipulator_msgs:msg/JointPosition.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__MSG__DETAIL__JOINT_POSITION__TRAITS_HPP_
#define OPEN_MANIPULATOR_MSGS__MSG__DETAIL__JOINT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "open_manipulator_msgs/msg/detail/joint_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace open_manipulator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_name
  {
    if (msg.joint_name.size() == 0) {
      out << "joint_name: []";
    } else {
      out << "joint_name: [";
      size_t pending_items = msg.joint_name.size();
      for (auto item : msg.joint_name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_accelerations_scaling_factor
  {
    out << "max_accelerations_scaling_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.max_accelerations_scaling_factor, out);
    out << ", ";
  }

  // member: max_velocity_scaling_factor
  {
    out << "max_velocity_scaling_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity_scaling_factor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_name.size() == 0) {
      out << "joint_name: []\n";
    } else {
      out << "joint_name:\n";
      for (auto item : msg.joint_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_accelerations_scaling_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_accelerations_scaling_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.max_accelerations_scaling_factor, out);
    out << "\n";
  }

  // member: max_velocity_scaling_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity_scaling_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity_scaling_factor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointPosition & msg, bool use_flow_style = false)
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
  const open_manipulator_msgs::msg::JointPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  open_manipulator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use open_manipulator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const open_manipulator_msgs::msg::JointPosition & msg)
{
  return open_manipulator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<open_manipulator_msgs::msg::JointPosition>()
{
  return "open_manipulator_msgs::msg::JointPosition";
}

template<>
inline const char * name<open_manipulator_msgs::msg::JointPosition>()
{
  return "open_manipulator_msgs/msg/JointPosition";
}

template<>
struct has_fixed_size<open_manipulator_msgs::msg::JointPosition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<open_manipulator_msgs::msg::JointPosition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<open_manipulator_msgs::msg::JointPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPEN_MANIPULATOR_MSGS__MSG__DETAIL__JOINT_POSITION__TRAITS_HPP_
