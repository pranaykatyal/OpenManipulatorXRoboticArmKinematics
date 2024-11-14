// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from open_manipulator_msgs:srv/SetActuatorState.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_ACTUATOR_STATE__TRAITS_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_ACTUATOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "open_manipulator_msgs/srv/detail/set_actuator_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace open_manipulator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetActuatorState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: set_actuator_state
  {
    out << "set_actuator_state: ";
    rosidl_generator_traits::value_to_yaml(msg.set_actuator_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetActuatorState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set_actuator_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_actuator_state: ";
    rosidl_generator_traits::value_to_yaml(msg.set_actuator_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetActuatorState_Request & msg, bool use_flow_style = false)
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
  const open_manipulator_msgs::srv::SetActuatorState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  open_manipulator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use open_manipulator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const open_manipulator_msgs::srv::SetActuatorState_Request & msg)
{
  return open_manipulator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<open_manipulator_msgs::srv::SetActuatorState_Request>()
{
  return "open_manipulator_msgs::srv::SetActuatorState_Request";
}

template<>
inline const char * name<open_manipulator_msgs::srv::SetActuatorState_Request>()
{
  return "open_manipulator_msgs/srv/SetActuatorState_Request";
}

template<>
struct has_fixed_size<open_manipulator_msgs::srv::SetActuatorState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<open_manipulator_msgs::srv::SetActuatorState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<open_manipulator_msgs::srv::SetActuatorState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace open_manipulator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetActuatorState_Response & msg,
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
  const SetActuatorState_Response & msg,
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

inline std::string to_yaml(const SetActuatorState_Response & msg, bool use_flow_style = false)
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
  const open_manipulator_msgs::srv::SetActuatorState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  open_manipulator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use open_manipulator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const open_manipulator_msgs::srv::SetActuatorState_Response & msg)
{
  return open_manipulator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<open_manipulator_msgs::srv::SetActuatorState_Response>()
{
  return "open_manipulator_msgs::srv::SetActuatorState_Response";
}

template<>
inline const char * name<open_manipulator_msgs::srv::SetActuatorState_Response>()
{
  return "open_manipulator_msgs/srv/SetActuatorState_Response";
}

template<>
struct has_fixed_size<open_manipulator_msgs::srv::SetActuatorState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<open_manipulator_msgs::srv::SetActuatorState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<open_manipulator_msgs::srv::SetActuatorState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<open_manipulator_msgs::srv::SetActuatorState>()
{
  return "open_manipulator_msgs::srv::SetActuatorState";
}

template<>
inline const char * name<open_manipulator_msgs::srv::SetActuatorState>()
{
  return "open_manipulator_msgs/srv/SetActuatorState";
}

template<>
struct has_fixed_size<open_manipulator_msgs::srv::SetActuatorState>
  : std::integral_constant<
    bool,
    has_fixed_size<open_manipulator_msgs::srv::SetActuatorState_Request>::value &&
    has_fixed_size<open_manipulator_msgs::srv::SetActuatorState_Response>::value
  >
{
};

template<>
struct has_bounded_size<open_manipulator_msgs::srv::SetActuatorState>
  : std::integral_constant<
    bool,
    has_bounded_size<open_manipulator_msgs::srv::SetActuatorState_Request>::value &&
    has_bounded_size<open_manipulator_msgs::srv::SetActuatorState_Response>::value
  >
{
};

template<>
struct is_service<open_manipulator_msgs::srv::SetActuatorState>
  : std::true_type
{
};

template<>
struct is_service_request<open_manipulator_msgs::srv::SetActuatorState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<open_manipulator_msgs::srv::SetActuatorState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_ACTUATOR_STATE__TRAITS_HPP_
