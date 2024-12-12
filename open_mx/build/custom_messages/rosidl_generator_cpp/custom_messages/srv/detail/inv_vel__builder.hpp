// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:srv/InvVel.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__SRV__DETAIL__INV_VEL__BUILDER_HPP_
#define CUSTOM_MESSAGES__SRV__DETAIL__INV_VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/srv/detail/inv_vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace srv
{

namespace builder
{

class Init_InvVel_Request_twist
{
public:
  Init_InvVel_Request_twist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_messages::srv::InvVel_Request twist(::custom_messages::srv::InvVel_Request::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::srv::InvVel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::srv::InvVel_Request>()
{
  return custom_messages::srv::builder::Init_InvVel_Request_twist();
}

}  // namespace custom_messages


namespace custom_messages
{

namespace srv
{

namespace builder
{

class Init_InvVel_Response_q_4_dot
{
public:
  explicit Init_InvVel_Response_q_4_dot(::custom_messages::srv::InvVel_Response & msg)
  : msg_(msg)
  {}
  ::custom_messages::srv::InvVel_Response q_4_dot(::custom_messages::srv::InvVel_Response::_q_4_dot_type arg)
  {
    msg_.q_4_dot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::srv::InvVel_Response msg_;
};

class Init_InvVel_Response_q_3_dot
{
public:
  explicit Init_InvVel_Response_q_3_dot(::custom_messages::srv::InvVel_Response & msg)
  : msg_(msg)
  {}
  Init_InvVel_Response_q_4_dot q_3_dot(::custom_messages::srv::InvVel_Response::_q_3_dot_type arg)
  {
    msg_.q_3_dot = std::move(arg);
    return Init_InvVel_Response_q_4_dot(msg_);
  }

private:
  ::custom_messages::srv::InvVel_Response msg_;
};

class Init_InvVel_Response_q_2_dot
{
public:
  explicit Init_InvVel_Response_q_2_dot(::custom_messages::srv::InvVel_Response & msg)
  : msg_(msg)
  {}
  Init_InvVel_Response_q_3_dot q_2_dot(::custom_messages::srv::InvVel_Response::_q_2_dot_type arg)
  {
    msg_.q_2_dot = std::move(arg);
    return Init_InvVel_Response_q_3_dot(msg_);
  }

private:
  ::custom_messages::srv::InvVel_Response msg_;
};

class Init_InvVel_Response_q_1_dot
{
public:
  Init_InvVel_Response_q_1_dot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InvVel_Response_q_2_dot q_1_dot(::custom_messages::srv::InvVel_Response::_q_1_dot_type arg)
  {
    msg_.q_1_dot = std::move(arg);
    return Init_InvVel_Response_q_2_dot(msg_);
  }

private:
  ::custom_messages::srv::InvVel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::srv::InvVel_Response>()
{
  return custom_messages::srv::builder::Init_InvVel_Response_q_1_dot();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__SRV__DETAIL__INV_VEL__BUILDER_HPP_
