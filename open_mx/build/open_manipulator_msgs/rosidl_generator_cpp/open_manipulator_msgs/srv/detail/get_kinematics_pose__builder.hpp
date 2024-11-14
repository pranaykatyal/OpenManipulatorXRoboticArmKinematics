// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from open_manipulator_msgs:srv/GetKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__BUILDER_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "open_manipulator_msgs/srv/detail/get_kinematics_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace open_manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_GetKinematicsPose_Request_end_effector_name
{
public:
  explicit Init_GetKinematicsPose_Request_end_effector_name(::open_manipulator_msgs::srv::GetKinematicsPose_Request & msg)
  : msg_(msg)
  {}
  ::open_manipulator_msgs::srv::GetKinematicsPose_Request end_effector_name(::open_manipulator_msgs::srv::GetKinematicsPose_Request::_end_effector_name_type arg)
  {
    msg_.end_effector_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::srv::GetKinematicsPose_Request msg_;
};

class Init_GetKinematicsPose_Request_planning_group
{
public:
  Init_GetKinematicsPose_Request_planning_group()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetKinematicsPose_Request_end_effector_name planning_group(::open_manipulator_msgs::srv::GetKinematicsPose_Request::_planning_group_type arg)
  {
    msg_.planning_group = std::move(arg);
    return Init_GetKinematicsPose_Request_end_effector_name(msg_);
  }

private:
  ::open_manipulator_msgs::srv::GetKinematicsPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::srv::GetKinematicsPose_Request>()
{
  return open_manipulator_msgs::srv::builder::Init_GetKinematicsPose_Request_planning_group();
}

}  // namespace open_manipulator_msgs


namespace open_manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_GetKinematicsPose_Response_kinematics_pose
{
public:
  explicit Init_GetKinematicsPose_Response_kinematics_pose(::open_manipulator_msgs::srv::GetKinematicsPose_Response & msg)
  : msg_(msg)
  {}
  ::open_manipulator_msgs::srv::GetKinematicsPose_Response kinematics_pose(::open_manipulator_msgs::srv::GetKinematicsPose_Response::_kinematics_pose_type arg)
  {
    msg_.kinematics_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::srv::GetKinematicsPose_Response msg_;
};

class Init_GetKinematicsPose_Response_header
{
public:
  Init_GetKinematicsPose_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetKinematicsPose_Response_kinematics_pose header(::open_manipulator_msgs::srv::GetKinematicsPose_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetKinematicsPose_Response_kinematics_pose(msg_);
  }

private:
  ::open_manipulator_msgs::srv::GetKinematicsPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::srv::GetKinematicsPose_Response>()
{
  return open_manipulator_msgs::srv::builder::Init_GetKinematicsPose_Response_header();
}

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__BUILDER_HPP_
