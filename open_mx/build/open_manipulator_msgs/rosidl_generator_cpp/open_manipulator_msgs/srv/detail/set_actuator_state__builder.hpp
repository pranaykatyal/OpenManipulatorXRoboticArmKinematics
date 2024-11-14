// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from open_manipulator_msgs:srv/SetActuatorState.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_ACTUATOR_STATE__BUILDER_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_ACTUATOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "open_manipulator_msgs/srv/detail/set_actuator_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace open_manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_SetActuatorState_Request_set_actuator_state
{
public:
  Init_SetActuatorState_Request_set_actuator_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::open_manipulator_msgs::srv::SetActuatorState_Request set_actuator_state(::open_manipulator_msgs::srv::SetActuatorState_Request::_set_actuator_state_type arg)
  {
    msg_.set_actuator_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetActuatorState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::srv::SetActuatorState_Request>()
{
  return open_manipulator_msgs::srv::builder::Init_SetActuatorState_Request_set_actuator_state();
}

}  // namespace open_manipulator_msgs


namespace open_manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_SetActuatorState_Response_is_planned
{
public:
  Init_SetActuatorState_Response_is_planned()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::open_manipulator_msgs::srv::SetActuatorState_Response is_planned(::open_manipulator_msgs::srv::SetActuatorState_Response::_is_planned_type arg)
  {
    msg_.is_planned = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_manipulator_msgs::srv::SetActuatorState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_manipulator_msgs::srv::SetActuatorState_Response>()
{
  return open_manipulator_msgs::srv::builder::Init_SetActuatorState_Response_is_planned();
}

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_ACTUATOR_STATE__BUILDER_HPP_
