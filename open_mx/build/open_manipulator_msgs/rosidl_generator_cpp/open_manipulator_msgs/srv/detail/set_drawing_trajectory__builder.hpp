// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from open_manipulator_msgs:srv/SetDrawingTrajectory.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_DRAWING_TRAJECTORY__BUILDER_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_DRAWING_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "open_manipulator_msgs/srv/detail/set_drawing_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace open_manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDrawingTrajectory_Request_path_time
{
public:
  explicit Init_SetDrawingTrajectory_Request_path_time(::open_manipulator_msgs::srv::SetDrawingTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::open_manipulator_msgs::srv::SetDrawingTrajectory_Request path_time(::open_manipulator_msgs::srv::SetDrawingTrajectory_Request::_path_time_type arg)
  {
    msg_.path_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetDrawingTrajectory_Request msg_;
};

class Init_SetDrawingTrajectory_Request_param
{
public:
  explicit Init_SetDrawingTrajectory_Request_param(::open_manipulator_msgs::srv::SetDrawingTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_SetDrawingTrajectory_Request_path_time param(::open_manipulator_msgs::srv::SetDrawingTrajectory_Request::_param_type arg)
  {
    msg_.param = std::move(arg);
    return Init_SetDrawingTrajectory_Request_path_time(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetDrawingTrajectory_Request msg_;
};

class Init_SetDrawingTrajectory_Request_drawing_trajectory_name
{
public:
  explicit Init_SetDrawingTrajectory_Request_drawing_trajectory_name(::open_manipulator_msgs::srv::SetDrawingTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_SetDrawingTrajectory_Request_param drawing_trajectory_name(::open_manipulator_msgs::srv::SetDrawingTrajectory_Request::_drawing_trajectory_name_type arg)
  {
    msg_.drawing_trajectory_name = std::move(arg);
    return Init_SetDrawingTrajectory_Request_param(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetDrawingTrajectory_Request msg_;
};

class Init_SetDrawingTrajectory_Request_end_effector_name
{
public:
  Init_SetDrawingTrajectory_Request_end_effector_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDrawingTrajectory_Request_drawing_trajectory_name end_effector_name(::open_manipulator_msgs::srv::SetDrawingTrajectory_Request::_end_effector_name_type arg)
  {
    msg_.end_effector_name = std::move(arg);
    return Init_SetDrawingTrajectory_Request_drawing_trajectory_name(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetDrawingTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::srv::SetDrawingTrajectory_Request>()
{
  return open_manipulator_msgs::srv::builder::Init_SetDrawingTrajectory_Request_end_effector_name();
}

}  // namespace open_manipulator_msgs


namespace open_manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDrawingTrajectory_Response_is_planned
{
public:
  Init_SetDrawingTrajectory_Response_is_planned()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::open_manipulator_msgs::srv::SetDrawingTrajectory_Response is_planned(::open_manipulator_msgs::srv::SetDrawingTrajectory_Response::_is_planned_type arg)
  {
    msg_.is_planned = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetDrawingTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::srv::SetDrawingTrajectory_Response>()
{
  return open_manipulator_msgs::srv::builder::Init_SetDrawingTrajectory_Response_is_planned();
}

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_DRAWING_TRAJECTORY__BUILDER_HPP_
