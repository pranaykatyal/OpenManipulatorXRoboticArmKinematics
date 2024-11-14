// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from open_manipulator_msgs:srv/SetJointPosition.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_JOINT_POSITION__BUILDER_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_JOINT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "open_manipulator_msgs/srv/detail/set_joint_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace open_manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointPosition_Request_path_time
{
public:
  explicit Init_SetJointPosition_Request_path_time(::open_manipulator_msgs::srv::SetJointPosition_Request & msg)
  : msg_(msg)
  {}
  ::open_manipulator_msgs::srv::SetJointPosition_Request path_time(::open_manipulator_msgs::srv::SetJointPosition_Request::_path_time_type arg)
  {
    msg_.path_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetJointPosition_Request msg_;
};

class Init_SetJointPosition_Request_joint_position
{
public:
  explicit Init_SetJointPosition_Request_joint_position(::open_manipulator_msgs::srv::SetJointPosition_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointPosition_Request_path_time joint_position(::open_manipulator_msgs::srv::SetJointPosition_Request::_joint_position_type arg)
  {
    msg_.joint_position = std::move(arg);
    return Init_SetJointPosition_Request_path_time(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetJointPosition_Request msg_;
};

class Init_SetJointPosition_Request_planning_group
{
public:
  Init_SetJointPosition_Request_planning_group()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPosition_Request_joint_position planning_group(::open_manipulator_msgs::srv::SetJointPosition_Request::_planning_group_type arg)
  {
    msg_.planning_group = std::move(arg);
    return Init_SetJointPosition_Request_joint_position(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetJointPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::srv::SetJointPosition_Request>()
{
  return open_manipulator_msgs::srv::builder::Init_SetJointPosition_Request_planning_group();
}

}  // namespace open_manipulator_msgs


namespace open_manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointPosition_Response_is_planned
{
public:
  Init_SetJointPosition_Response_is_planned()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::open_manipulator_msgs::srv::SetJointPosition_Response is_planned(::open_manipulator_msgs::srv::SetJointPosition_Response::_is_planned_type arg)
  {
    msg_.is_planned = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetJointPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::srv::SetJointPosition_Response>()
{
  return open_manipulator_msgs::srv::builder::Init_SetJointPosition_Response_is_planned();
}

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_JOINT_POSITION__BUILDER_HPP_
