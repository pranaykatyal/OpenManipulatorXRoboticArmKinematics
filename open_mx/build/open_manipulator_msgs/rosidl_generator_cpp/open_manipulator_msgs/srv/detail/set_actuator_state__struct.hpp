// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from open_manipulator_msgs:srv/SetActuatorState.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_ACTUATOR_STATE__STRUCT_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_ACTUATOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__open_manipulator_msgs__srv__SetActuatorState_Request __attribute__((deprecated))
#else
# define DEPRECATED__open_manipulator_msgs__srv__SetActuatorState_Request __declspec(deprecated)
#endif

namespace open_manipulator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetActuatorState_Request_
{
  using Type = SetActuatorState_Request_<ContainerAllocator>;

  explicit SetActuatorState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_actuator_state = false;
    }
  }

  explicit SetActuatorState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_actuator_state = false;
    }
  }

  // field types and members
  using _set_actuator_state_type =
    bool;
  _set_actuator_state_type set_actuator_state;

  // setters for named parameter idiom
  Type & set__set_actuator_state(
    const bool & _arg)
  {
    this->set_actuator_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    open_manipulator_msgs::srv::SetActuatorState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const open_manipulator_msgs::srv::SetActuatorState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::SetActuatorState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::SetActuatorState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::SetActuatorState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::SetActuatorState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::SetActuatorState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::SetActuatorState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::SetActuatorState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::SetActuatorState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__open_manipulator_msgs__srv__SetActuatorState_Request
    std::shared_ptr<open_manipulator_msgs::srv::SetActuatorState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__open_manipulator_msgs__srv__SetActuatorState_Request
    std::shared_ptr<open_manipulator_msgs::srv::SetActuatorState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetActuatorState_Request_ & other) const
  {
    if (this->set_actuator_state != other.set_actuator_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetActuatorState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetActuatorState_Request_

// alias to use template instance with default allocator
using SetActuatorState_Request =
  open_manipulator_msgs::srv::SetActuatorState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace open_manipulator_msgs


#ifndef _WIN32
# define DEPRECATED__open_manipulator_msgs__srv__SetActuatorState_Response __attribute__((deprecated))
#else
# define DEPRECATED__open_manipulator_msgs__srv__SetActuatorState_Response __declspec(deprecated)
#endif

namespace open_manipulator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetActuatorState_Response_
{
  using Type = SetActuatorState_Response_<ContainerAllocator>;

  explicit SetActuatorState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_planned = false;
    }
  }

  explicit SetActuatorState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_planned = false;
    }
  }

  // field types and members
  using _is_planned_type =
    bool;
  _is_planned_type is_planned;

  // setters for named parameter idiom
  Type & set__is_planned(
    const bool & _arg)
  {
    this->is_planned = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    open_manipulator_msgs::srv::SetActuatorState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const open_manipulator_msgs::srv::SetActuatorState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::SetActuatorState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::SetActuatorState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::SetActuatorState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::SetActuatorState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::SetActuatorState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::SetActuatorState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::SetActuatorState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::SetActuatorState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__open_manipulator_msgs__srv__SetActuatorState_Response
    std::shared_ptr<open_manipulator_msgs::srv::SetActuatorState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__open_manipulator_msgs__srv__SetActuatorState_Response
    std::shared_ptr<open_manipulator_msgs::srv::SetActuatorState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetActuatorState_Response_ & other) const
  {
    if (this->is_planned != other.is_planned) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetActuatorState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetActuatorState_Response_

// alias to use template instance with default allocator
using SetActuatorState_Response =
  open_manipulator_msgs::srv::SetActuatorState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace open_manipulator_msgs

namespace open_manipulator_msgs
{

namespace srv
{

struct SetActuatorState
{
  using Request = open_manipulator_msgs::srv::SetActuatorState_Request;
  using Response = open_manipulator_msgs::srv::SetActuatorState_Response;
};

}  // namespace srv

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_ACTUATOR_STATE__STRUCT_HPP_
