// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from open_manipulator_msgs:msg/OpenManipulatorState.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__MSG__DETAIL__OPEN_MANIPULATOR_STATE__STRUCT_HPP_
#define OPEN_MANIPULATOR_MSGS__MSG__DETAIL__OPEN_MANIPULATOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__open_manipulator_msgs__msg__OpenManipulatorState __attribute__((deprecated))
#else
# define DEPRECATED__open_manipulator_msgs__msg__OpenManipulatorState __declspec(deprecated)
#endif

namespace open_manipulator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OpenManipulatorState_
{
  using Type = OpenManipulatorState_<ContainerAllocator>;

  explicit OpenManipulatorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->open_manipulator_moving_state = "";
      this->open_manipulator_actuator_state = "";
    }
  }

  explicit OpenManipulatorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : open_manipulator_moving_state(_alloc),
    open_manipulator_actuator_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->open_manipulator_moving_state = "";
      this->open_manipulator_actuator_state = "";
    }
  }

  // field types and members
  using _open_manipulator_moving_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _open_manipulator_moving_state_type open_manipulator_moving_state;
  using _open_manipulator_actuator_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _open_manipulator_actuator_state_type open_manipulator_actuator_state;

  // setters for named parameter idiom
  Type & set__open_manipulator_moving_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->open_manipulator_moving_state = _arg;
    return *this;
  }
  Type & set__open_manipulator_actuator_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->open_manipulator_actuator_state = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> IS_MOVING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STOPPED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ACTUATOR_ENABLED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ACTUATOR_DISABLED;

  // pointer types
  using RawPtr =
    open_manipulator_msgs::msg::OpenManipulatorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const open_manipulator_msgs::msg::OpenManipulatorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<open_manipulator_msgs::msg::OpenManipulatorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<open_manipulator_msgs::msg::OpenManipulatorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::msg::OpenManipulatorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::msg::OpenManipulatorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::msg::OpenManipulatorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::msg::OpenManipulatorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<open_manipulator_msgs::msg::OpenManipulatorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<open_manipulator_msgs::msg::OpenManipulatorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__open_manipulator_msgs__msg__OpenManipulatorState
    std::shared_ptr<open_manipulator_msgs::msg::OpenManipulatorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__open_manipulator_msgs__msg__OpenManipulatorState
    std::shared_ptr<open_manipulator_msgs::msg::OpenManipulatorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenManipulatorState_ & other) const
  {
    if (this->open_manipulator_moving_state != other.open_manipulator_moving_state) {
      return false;
    }
    if (this->open_manipulator_actuator_state != other.open_manipulator_actuator_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenManipulatorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenManipulatorState_

// alias to use template instance with default allocator
using OpenManipulatorState =
  open_manipulator_msgs::msg::OpenManipulatorState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OpenManipulatorState_<ContainerAllocator>::IS_MOVING = "IS_MOVING";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OpenManipulatorState_<ContainerAllocator>::STOPPED = "STOPPED";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OpenManipulatorState_<ContainerAllocator>::ACTUATOR_ENABLED = "ACTUATOR_ENABLED";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OpenManipulatorState_<ContainerAllocator>::ACTUATOR_DISABLED = "ACTUATOR_DISABLED";

}  // namespace msg

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__MSG__DETAIL__OPEN_MANIPULATOR_STATE__STRUCT_HPP_
