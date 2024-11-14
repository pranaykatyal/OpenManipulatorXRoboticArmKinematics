// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from open_manipulator_msgs:srv/GetJointPosition.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_JOINT_POSITION__BUILDER_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_JOINT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "open_manipulator_msgs/srv/detail/get_joint_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace open_manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointPosition_Request_planning_group
{
public:
  Init_GetJointPosition_Request_planning_group()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::open_manipulator_msgs::srv::GetJointPosition_Request planning_group(::open_manipulator_msgs::srv::GetJointPosition_Request::_planning_group_type arg)
  {
    msg_.planning_group = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::srv::GetJointPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::srv::GetJointPosition_Request>()
{
  return open_manipulator_msgs::srv::builder::Init_GetJointPosition_Request_planning_group();
}

}  // namespace open_manipulator_msgs


namespace open_manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointPosition_Response_joint_position
{
public:
  Init_GetJointPosition_Response_joint_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::open_manipulator_msgs::srv::GetJointPosition_Response joint_position(::open_manipulator_msgs::srv::GetJointPosition_Response::_joint_position_type arg)
  {
    msg_.joint_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::srv::GetJointPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::srv::GetJointPosition_Response>()
{
  return open_manipulator_msgs::srv::builder::Init_GetJointPosition_Response_joint_position();
}

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_JOINT_POSITION__BUILDER_HPP_
