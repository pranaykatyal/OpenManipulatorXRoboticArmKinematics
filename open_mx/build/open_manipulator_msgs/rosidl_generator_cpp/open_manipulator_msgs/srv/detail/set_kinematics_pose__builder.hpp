// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from open_manipulator_msgs:srv/SetKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_KINEMATICS_POSE__BUILDER_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_KINEMATICS_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "open_manipulator_msgs/srv/detail/set_kinematics_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace open_manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_SetKinematicsPose_Request_path_time
{
public:
  explicit Init_SetKinematicsPose_Request_path_time(::open_manipulator_msgs::srv::SetKinematicsPose_Request & msg)
  : msg_(msg)
  {}
  ::open_manipulator_msgs::srv::SetKinematicsPose_Request path_time(::open_manipulator_msgs::srv::SetKinematicsPose_Request::_path_time_type arg)
  {
    msg_.path_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetKinematicsPose_Request msg_;
};

class Init_SetKinematicsPose_Request_kinematics_pose
{
public:
  explicit Init_SetKinematicsPose_Request_kinematics_pose(::open_manipulator_msgs::srv::SetKinematicsPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetKinematicsPose_Request_path_time kinematics_pose(::open_manipulator_msgs::srv::SetKinematicsPose_Request::_kinematics_pose_type arg)
  {
    msg_.kinematics_pose = std::move(arg);
    return Init_SetKinematicsPose_Request_path_time(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetKinematicsPose_Request msg_;
};

class Init_SetKinematicsPose_Request_end_effector_name
{
public:
  explicit Init_SetKinematicsPose_Request_end_effector_name(::open_manipulator_msgs::srv::SetKinematicsPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetKinematicsPose_Request_kinematics_pose end_effector_name(::open_manipulator_msgs::srv::SetKinematicsPose_Request::_end_effector_name_type arg)
  {
    msg_.end_effector_name = std::move(arg);
    return Init_SetKinematicsPose_Request_kinematics_pose(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetKinematicsPose_Request msg_;
};

class Init_SetKinematicsPose_Request_planning_group
{
public:
  Init_SetKinematicsPose_Request_planning_group()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetKinematicsPose_Request_end_effector_name planning_group(::open_manipulator_msgs::srv::SetKinematicsPose_Request::_planning_group_type arg)
  {
    msg_.planning_group = std::move(arg);
    return Init_SetKinematicsPose_Request_end_effector_name(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetKinematicsPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::srv::SetKinematicsPose_Request>()
{
  return open_manipulator_msgs::srv::builder::Init_SetKinematicsPose_Request_planning_group();
}

}  // namespace open_manipulator_msgs


namespace open_manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_SetKinematicsPose_Response_is_planned
{
public:
  Init_SetKinematicsPose_Response_is_planned()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::open_manipulator_msgs::srv::SetKinematicsPose_Response is_planned(::open_manipulator_msgs::srv::SetKinematicsPose_Response::_is_planned_type arg)
  {
    msg_.is_planned = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetKinematicsPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::srv::SetKinematicsPose_Response>()
{
  return open_manipulator_msgs::srv::builder::Init_SetKinematicsPose_Response_is_planned();
}

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_KINEMATICS_POSE__BUILDER_HPP_
