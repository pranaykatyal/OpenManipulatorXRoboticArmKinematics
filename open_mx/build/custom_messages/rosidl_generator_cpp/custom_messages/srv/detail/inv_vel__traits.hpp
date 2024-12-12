// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_messages:srv/InvVel.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__SRV__DETAIL__INV_VEL__TRAITS_HPP_
#define CUSTOM_MESSAGES__SRV__DETAIL__INV_VEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_messages/srv/detail/inv_vel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace custom_messages
{

namespace srv
{

inline void to_flow_style_yaml(
  const InvVel_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InvVel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InvVel_Request & msg, bool use_flow_style = false)
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

}  // namespace custom_messages

namespace rosidl_generator_traits
{

[[deprecated("use custom_messages::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_messages::srv::InvVel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_messages::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_messages::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_messages::srv::InvVel_Request & msg)
{
  return custom_messages::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_messages::srv::InvVel_Request>()
{
  return "custom_messages::srv::InvVel_Request";
}

template<>
inline const char * name<custom_messages::srv::InvVel_Request>()
{
  return "custom_messages/srv/InvVel_Request";
}

template<>
struct has_fixed_size<custom_messages::srv::InvVel_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<custom_messages::srv::InvVel_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<custom_messages::srv::InvVel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_messages
{

namespace srv
{

inline void to_flow_style_yaml(
  const InvVel_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: q_1_dot
  {
    out << "q_1_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.q_1_dot, out);
    out << ", ";
  }

  // member: q_2_dot
  {
    out << "q_2_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.q_2_dot, out);
    out << ", ";
  }

  // member: q_3_dot
  {
    out << "q_3_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.q_3_dot, out);
    out << ", ";
  }

  // member: q_4_dot
  {
    out << "q_4_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.q_4_dot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InvVel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: q_1_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q_1_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.q_1_dot, out);
    out << "\n";
  }

  // member: q_2_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q_2_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.q_2_dot, out);
    out << "\n";
  }

  // member: q_3_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q_3_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.q_3_dot, out);
    out << "\n";
  }

  // member: q_4_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q_4_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.q_4_dot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InvVel_Response & msg, bool use_flow_style = false)
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

}  // namespace custom_messages

namespace rosidl_generator_traits
{

[[deprecated("use custom_messages::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_messages::srv::InvVel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_messages::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_messages::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_messages::srv::InvVel_Response & msg)
{
  return custom_messages::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_messages::srv::InvVel_Response>()
{
  return "custom_messages::srv::InvVel_Response";
}

template<>
inline const char * name<custom_messages::srv::InvVel_Response>()
{
  return "custom_messages/srv/InvVel_Response";
}

template<>
struct has_fixed_size<custom_messages::srv::InvVel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_messages::srv::InvVel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_messages::srv::InvVel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_messages::srv::InvVel>()
{
  return "custom_messages::srv::InvVel";
}

template<>
inline const char * name<custom_messages::srv::InvVel>()
{
  return "custom_messages/srv/InvVel";
}

template<>
struct has_fixed_size<custom_messages::srv::InvVel>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_messages::srv::InvVel_Request>::value &&
    has_fixed_size<custom_messages::srv::InvVel_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_messages::srv::InvVel>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_messages::srv::InvVel_Request>::value &&
    has_bounded_size<custom_messages::srv::InvVel_Response>::value
  >
{
};

template<>
struct is_service<custom_messages::srv::InvVel>
  : std::true_type
{
};

template<>
struct is_service_request<custom_messages::srv::InvVel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_messages::srv::InvVel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MESSAGES__SRV__DETAIL__INV_VEL__TRAITS_HPP_
