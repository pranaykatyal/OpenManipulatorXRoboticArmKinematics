// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from open_manipulator_msgs:msg/KinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__MSG__DETAIL__KINEMATICS_POSE__BUILDER_HPP_
#define OPEN_MANIPULATOR_MSGS__MSG__DETAIL__KINEMATICS_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "open_manipulator_msgs/msg/detail/kinematics_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace open_manipulator_msgs
{

namespace msg
{

namespace builder
{

class Init_KinematicsPose_tolerance
{
public:
  explicit Init_KinematicsPose_tolerance(::open_manipulator_msgs::msg::KinematicsPose & msg)
  : msg_(msg)
  {}
  ::open_manipulator_msgs::msg::KinematicsPose tolerance(::open_manipulator_msgs::msg::KinematicsPose::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::msg::KinematicsPose msg_;
};

class Init_KinematicsPose_max_velocity_scaling_factor
{
public:
  explicit Init_KinematicsPose_max_velocity_scaling_factor(::open_manipulator_msgs::msg::KinematicsPose & msg)
  : msg_(msg)
  {}
  Init_KinematicsPose_tolerance max_velocity_scaling_factor(::open_manipulator_msgs::msg::KinematicsPose::_max_velocity_scaling_factor_type arg)
  {
    msg_.max_velocity_scaling_factor = std::move(arg);
    return Init_KinematicsPose_tolerance(msg_);
  }

private:
  ::open_manipulator_msgs::msg::KinematicsPose msg_;
};

class Init_KinematicsPose_max_accelerations_scaling_factor
{
public:
  explicit Init_KinematicsPose_max_accelerations_scaling_factor(::open_manipulator_msgs::msg::KinematicsPose & msg)
  : msg_(msg)
  {}
  Init_KinematicsPose_max_velocity_scaling_factor max_accelerations_scaling_factor(::open_manipulator_msgs::msg::KinematicsPose::_max_accelerations_scaling_factor_type arg)
  {
    msg_.max_accelerations_scaling_factor = std::move(arg);
    return Init_KinematicsPose_max_velocity_scaling_factor(msg_);
  }

private:
  ::open_manipulator_msgs::msg::KinematicsPose msg_;
};

class Init_KinematicsPose_pose
{
public:
  Init_KinematicsPose_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KinematicsPose_max_accelerations_scaling_factor pose(::open_manipulator_msgs::msg::KinematicsPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_KinematicsPose_max_accelerations_scaling_factor(msg_);
  }

private:
  ::open_manipulator_msgs::msg::KinematicsPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::msg::KinematicsPose>()
{
  return open_manipulator_msgs::msg::builder::Init_KinematicsPose_pose();
}

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__MSG__DETAIL__KINEMATICS_POSE__BUILDER_HPP_
