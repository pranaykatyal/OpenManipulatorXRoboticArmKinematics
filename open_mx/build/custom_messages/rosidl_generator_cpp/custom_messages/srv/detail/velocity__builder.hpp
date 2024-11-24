// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:srv/Velocity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__SRV__DETAIL__VELOCITY__BUILDER_HPP_
#define CUSTOM_MESSAGES__SRV__DETAIL__VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/srv/detail/velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace srv
{

namespace builder
{

class Init_Velocity_Request_q_4_dot
{
public:
  explicit Init_Velocity_Request_q_4_dot(::custom_messages::srv::Velocity_Request & msg)
  : msg_(msg)
  {}
  ::custom_messages::srv::Velocity_Request q_4_dot(::custom_messages::srv::Velocity_Request::_q_4_dot_type arg)
  {
    msg_.q_4_dot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::srv::Velocity_Request msg_;
};

class Init_Velocity_Request_q_3_dot
{
public:
  explicit Init_Velocity_Request_q_3_dot(::custom_messages::srv::Velocity_Request & msg)
  : msg_(msg)
  {}
  Init_Velocity_Request_q_4_dot q_3_dot(::custom_messages::srv::Velocity_Request::_q_3_dot_type arg)
  {
    msg_.q_3_dot = std::move(arg);
    return Init_Velocity_Request_q_4_dot(msg_);
  }

private:
  ::custom_messages::srv::Velocity_Request msg_;
};

class Init_Velocity_Request_q_2_dot
{
public:
  explicit Init_Velocity_Request_q_2_dot(::custom_messages::srv::Velocity_Request & msg)
  : msg_(msg)
  {}
  Init_Velocity_Request_q_3_dot q_2_dot(::custom_messages::srv::Velocity_Request::_q_2_dot_type arg)
  {
    msg_.q_2_dot = std::move(arg);
    return Init_Velocity_Request_q_3_dot(msg_);
  }

private:
  ::custom_messages::srv::Velocity_Request msg_;
};

class Init_Velocity_Request_q_1_dot
{
public:
  explicit Init_Velocity_Request_q_1_dot(::custom_messages::srv::Velocity_Request & msg)
  : msg_(msg)
  {}
  Init_Velocity_Request_q_2_dot q_1_dot(::custom_messages::srv::Velocity_Request::_q_1_dot_type arg)
  {
    msg_.q_1_dot = std::move(arg);
    return Init_Velocity_Request_q_2_dot(msg_);
  }

private:
  ::custom_messages::srv::Velocity_Request msg_;
};

class Init_Velocity_Request_q_4
{
public:
  explicit Init_Velocity_Request_q_4(::custom_messages::srv::Velocity_Request & msg)
  : msg_(msg)
  {}
  Init_Velocity_Request_q_1_dot q_4(::custom_messages::srv::Velocity_Request::_q_4_type arg)
  {
    msg_.q_4 = std::move(arg);
    return Init_Velocity_Request_q_1_dot(msg_);
  }

private:
  ::custom_messages::srv::Velocity_Request msg_;
};

class Init_Velocity_Request_q_3
{
public:
  explicit Init_Velocity_Request_q_3(::custom_messages::srv::Velocity_Request & msg)
  : msg_(msg)
  {}
  Init_Velocity_Request_q_4 q_3(::custom_messages::srv::Velocity_Request::_q_3_type arg)
  {
    msg_.q_3 = std::move(arg);
    return Init_Velocity_Request_q_4(msg_);
  }

private:
  ::custom_messages::srv::Velocity_Request msg_;
};

class Init_Velocity_Request_q_2
{
public:
  explicit Init_Velocity_Request_q_2(::custom_messages::srv::Velocity_Request & msg)
  : msg_(msg)
  {}
  Init_Velocity_Request_q_3 q_2(::custom_messages::srv::Velocity_Request::_q_2_type arg)
  {
    msg_.q_2 = std::move(arg);
    return Init_Velocity_Request_q_3(msg_);
  }

private:
  ::custom_messages::srv::Velocity_Request msg_;
};

class Init_Velocity_Request_q_1
{
public:
  Init_Velocity_Request_q_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_Request_q_2 q_1(::custom_messages::srv::Velocity_Request::_q_1_type arg)
  {
    msg_.q_1 = std::move(arg);
    return Init_Velocity_Request_q_2(msg_);
  }

private:
  ::custom_messages::srv::Velocity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::srv::Velocity_Request>()
{
  return custom_messages::srv::builder::Init_Velocity_Request_q_1();
}

}  // namespace custom_messages


namespace custom_messages
{

namespace srv
{

namespace builder
{

class Init_Velocity_Response_twist
{
public:
  Init_Velocity_Response_twist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_messages::srv::Velocity_Response twist(::custom_messages::srv::Velocity_Response::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::srv::Velocity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::srv::Velocity_Response>()
{
  return custom_messages::srv::builder::Init_Velocity_Response_twist();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__SRV__DETAIL__VELOCITY__BUILDER_HPP_
