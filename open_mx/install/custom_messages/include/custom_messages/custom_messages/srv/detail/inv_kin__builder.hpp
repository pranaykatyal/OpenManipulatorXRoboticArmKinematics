// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:srv/InvKin.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__SRV__DETAIL__INV_KIN__BUILDER_HPP_
#define CUSTOM_MESSAGES__SRV__DETAIL__INV_KIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/srv/detail/inv_kin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace srv
{

namespace builder
{

class Init_InvKin_Request_pose
{
public:
  Init_InvKin_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_messages::srv::InvKin_Request pose(::custom_messages::srv::InvKin_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::srv::InvKin_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::srv::InvKin_Request>()
{
  return custom_messages::srv::builder::Init_InvKin_Request_pose();
}

}  // namespace custom_messages


namespace custom_messages
{

namespace srv
{

namespace builder
{

class Init_InvKin_Response_q_4
{
public:
  explicit Init_InvKin_Response_q_4(::custom_messages::srv::InvKin_Response & msg)
  : msg_(msg)
  {}
  ::custom_messages::srv::InvKin_Response q_4(::custom_messages::srv::InvKin_Response::_q_4_type arg)
  {
    msg_.q_4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::srv::InvKin_Response msg_;
};

class Init_InvKin_Response_q_3
{
public:
  explicit Init_InvKin_Response_q_3(::custom_messages::srv::InvKin_Response & msg)
  : msg_(msg)
  {}
  Init_InvKin_Response_q_4 q_3(::custom_messages::srv::InvKin_Response::_q_3_type arg)
  {
    msg_.q_3 = std::move(arg);
    return Init_InvKin_Response_q_4(msg_);
  }

private:
  ::custom_messages::srv::InvKin_Response msg_;
};

class Init_InvKin_Response_q_2
{
public:
  explicit Init_InvKin_Response_q_2(::custom_messages::srv::InvKin_Response & msg)
  : msg_(msg)
  {}
  Init_InvKin_Response_q_3 q_2(::custom_messages::srv::InvKin_Response::_q_2_type arg)
  {
    msg_.q_2 = std::move(arg);
    return Init_InvKin_Response_q_3(msg_);
  }

private:
  ::custom_messages::srv::InvKin_Response msg_;
};

class Init_InvKin_Response_q_1
{
public:
  Init_InvKin_Response_q_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InvKin_Response_q_2 q_1(::custom_messages::srv::InvKin_Response::_q_1_type arg)
  {
    msg_.q_1 = std::move(arg);
    return Init_InvKin_Response_q_2(msg_);
  }

private:
  ::custom_messages::srv::InvKin_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::srv::InvKin_Response>()
{
  return custom_messages::srv::builder::Init_InvKin_Response_q_1();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__SRV__DETAIL__INV_KIN__BUILDER_HPP_
