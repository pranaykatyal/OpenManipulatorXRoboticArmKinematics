// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from open_manipulator_msgs:msg/OpenManipulatorState.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__MSG__DETAIL__OPEN_MANIPULATOR_STATE__BUILDER_HPP_
#define OPEN_MANIPULATOR_MSGS__MSG__DETAIL__OPEN_MANIPULATOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "open_manipulator_msgs/msg/detail/open_manipulator_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace open_manipulator_msgs
{

namespace msg
{

namespace builder
{

class Init_OpenManipulatorState_open_manipulator_actuator_state
{
public:
  explicit Init_OpenManipulatorState_open_manipulator_actuator_state(::open_manipulator_msgs::msg::OpenManipulatorState & msg)
  : msg_(msg)
  {}
  ::open_manipulator_msgs::msg::OpenManipulatorState open_manipulator_actuator_state(::open_manipulator_msgs::msg::OpenManipulatorState::_open_manipulator_actuator_state_type arg)
  {
    msg_.open_manipulator_actuator_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::msg::OpenManipulatorState msg_;
};

class Init_OpenManipulatorState_open_manipulator_moving_state
{
public:
  Init_OpenManipulatorState_open_manipulator_moving_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenManipulatorState_open_manipulator_actuator_state open_manipulator_moving_state(::open_manipulator_msgs::msg::OpenManipulatorState::_open_manipulator_moving_state_type arg)
  {
    msg_.open_manipulator_moving_state = std::move(arg);
    return Init_OpenManipulatorState_open_manipulator_actuator_state(msg_);
  }

private:
  ::open_manipulator_msgs::msg::OpenManipulatorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::msg::OpenManipulatorState>()
{
  return open_manipulator_msgs::msg::builder::Init_OpenManipulatorState_open_manipulator_moving_state();
}

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__MSG__DETAIL__OPEN_MANIPULATOR_STATE__BUILDER_HPP_
