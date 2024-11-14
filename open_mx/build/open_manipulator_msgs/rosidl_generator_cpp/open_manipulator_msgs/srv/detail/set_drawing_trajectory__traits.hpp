// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from open_manipulator_msgs:srv/SetDrawingTrajectory.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_DRAWING_TRAJECTORY__TRAITS_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_DRAWING_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "open_manipulator_msgs/srv/detail/set_drawing_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace open_manipulator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDrawingTrajectory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: end_effector_name
  {
    out << "end_effector_name: ";
    rosidl_generator_traits::value_to_yaml(msg.end_effector_name, out);
    out << ", ";
  }

  // member: drawing_trajectory_name
  {
    out << "drawing_trajectory_name: ";
    rosidl_generator_traits::value_to_yaml(msg.drawing_trajectory_name, out);
    out << ", ";
  }

  // member: param
  {
    if (msg.param.size() == 0) {
      out << "param: []";
    } else {
      out << "param: [";
      size_t pending_items = msg.param.size();
      for (auto item : msg.param) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const SetDrawingTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: end_effector_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_effector_name: ";
    rosidl_generator_traits::value_to_yaml(msg.end_effector_name, out);
    out << "\n";
  }

  // member: drawing_trajectory_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drawing_trajectory_name: ";
    rosidl_generator_traits::value_to_yaml(msg.drawing_trajectory_name, out);
    out << "\n";
  }

  // member: param
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.param.size() == 0) {
      out << "param: []\n";
    } else {
      out << "param:\n";
      for (auto item : msg.param) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const SetDrawingTrajectory_Request & msg, bool use_flow_style = false)
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
  const open_manipulator_msgs::srv::SetDrawingTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  open_manipulator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use open_manipulator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const open_manipulator_msgs::srv::SetDrawingTrajectory_Request & msg)
{
  return open_manipulator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<open_manipulator_msgs::srv::SetDrawingTrajectory_Request>()
{
  return "open_manipulator_msgs::srv::SetDrawingTrajectory_Request";
}

template<>
inline const char * name<open_manipulator_msgs::srv::SetDrawingTrajectory_Request>()
{
  return "open_manipulator_msgs/srv/SetDrawingTrajectory_Request";
}

template<>
struct has_fixed_size<open_manipulator_msgs::srv::SetDrawingTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<open_manipulator_msgs::srv::SetDrawingTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<open_manipulator_msgs::srv::SetDrawingTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace open_manipulator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDrawingTrajectory_Response & msg,
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
  const SetDrawingTrajectory_Response & msg,
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

inline std::string to_yaml(const SetDrawingTrajectory_Response & msg, bool use_flow_style = false)
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
  const open_manipulator_msgs::srv::SetDrawingTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  open_manipulator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use open_manipulator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const open_manipulator_msgs::srv::SetDrawingTrajectory_Response & msg)
{
  return open_manipulator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<open_manipulator_msgs::srv::SetDrawingTrajectory_Response>()
{
  return "open_manipulator_msgs::srv::SetDrawingTrajectory_Response";
}

template<>
inline const char * name<open_manipulator_msgs::srv::SetDrawingTrajectory_Response>()
{
  return "open_manipulator_msgs/srv/SetDrawingTrajectory_Response";
}

template<>
struct has_fixed_size<open_manipulator_msgs::srv::SetDrawingTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<open_manipulator_msgs::srv::SetDrawingTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<open_manipulator_msgs::srv::SetDrawingTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<open_manipulator_msgs::srv::SetDrawingTrajectory>()
{
  return "open_manipulator_msgs::srv::SetDrawingTrajectory";
}

template<>
inline const char * name<open_manipulator_msgs::srv::SetDrawingTrajectory>()
{
  return "open_manipulator_msgs/srv/SetDrawingTrajectory";
}

template<>
struct has_fixed_size<open_manipulator_msgs::srv::SetDrawingTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<open_manipulator_msgs::srv::SetDrawingTrajectory_Request>::value &&
    has_fixed_size<open_manipulator_msgs::srv::SetDrawingTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<open_manipulator_msgs::srv::SetDrawingTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<open_manipulator_msgs::srv::SetDrawingTrajectory_Request>::value &&
    has_bounded_size<open_manipulator_msgs::srv::SetDrawingTrajectory_Response>::value
  >
{
};

template<>
struct is_service<open_manipulator_msgs::srv::SetDrawingTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<open_manipulator_msgs::srv::SetDrawingTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<open_manipulator_msgs::srv::SetDrawingTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_DRAWING_TRAJECTORY__TRAITS_HPP_
