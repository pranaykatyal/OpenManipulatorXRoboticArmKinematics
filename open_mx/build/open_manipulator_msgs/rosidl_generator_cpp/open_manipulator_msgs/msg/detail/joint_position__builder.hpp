// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from open_manipulator_msgs:msg/JointPosition.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__MSG__DETAIL__JOINT_POSITION__BUILDER_HPP_
#define OPEN_MANIPULATOR_MSGS__MSG__DETAIL__JOINT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "open_manipulator_msgs/msg/detail/joint_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace open_manipulator_msgs
{

namespace msg
{

namespace builder
{

class Init_JointPosition_max_velocity_scaling_factor
{
public:
  explicit Init_JointPosition_max_velocity_scaling_factor(::open_manipulator_msgs::msg::JointPosition & msg)
  : msg_(msg)
  {}
  ::open_manipulator_msgs::msg::JointPosition max_velocity_scaling_factor(::open_manipulator_msgs::msg::JointPosition::_max_velocity_scaling_factor_type arg)
  {
    msg_.max_velocity_scaling_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::msg::JointPosition msg_;
};

class Init_JointPosition_max_accelerations_scaling_factor
{
public:
  explicit Init_JointPosition_max_accelerations_scaling_factor(::open_manipulator_msgs::msg::JointPosition & msg)
  : msg_(msg)
  {}
  Init_JointPosition_max_velocity_scaling_factor max_accelerations_scaling_factor(::open_manipulator_msgs::msg::JointPosition::_max_accelerations_scaling_factor_type arg)
  {
    msg_.max_accelerations_scaling_factor = std::move(arg);
    return Init_JointPosition_max_velocity_scaling_factor(msg_);
  }

private:
  ::open_manipulator_msgs::msg::JointPosition msg_;
};

class Init_JointPosition_position
{
public:
  explicit Init_JointPosition_position(::open_manipulator_msgs::msg::JointPosition & msg)
  : msg_(msg)
  {}
  Init_JointPosition_max_accelerations_scaling_factor position(::open_manipulator_msgs::msg::JointPosition::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointPosition_max_accelerations_scaling_factor(msg_);
  }

private:
  ::open_manipulator_msgs::msg::JointPosition msg_;
};

class Init_JointPosition_joint_name
{
public:
  Init_JointPosition_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointPosition_position joint_name(::open_manipulator_msgs::msg::JointPosition::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_JointPosition_position(msg_);
  }

private:
  ::open_manipulator_msgs::msg::JointPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::msg::JointPosition>()
{
  return open_manipulator_msgs::msg::builder::Init_JointPosition_joint_name();
}

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__MSG__DETAIL__JOINT_POSITION__BUILDER_HPP_
