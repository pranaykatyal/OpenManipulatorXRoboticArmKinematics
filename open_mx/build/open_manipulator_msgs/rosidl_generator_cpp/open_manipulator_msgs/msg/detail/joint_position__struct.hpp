// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from open_manipulator_msgs:msg/JointPosition.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__MSG__DETAIL__JOINT_POSITION__STRUCT_HPP_
#define OPEN_MANIPULATOR_MSGS__MSG__DETAIL__JOINT_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__open_manipulator_msgs__msg__JointPosition __attribute__((deprecated))
#else
# define DEPRECATED__open_manipulator_msgs__msg__JointPosition __declspec(deprecated)
#endif

namespace open_manipulator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointPosition_
{
  using Type = JointPosition_<ContainerAllocator>;

  explicit JointPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_accelerations_scaling_factor = 0.0;
      this->max_velocity_scaling_factor = 0.0;
    }
  }

  explicit JointPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_accelerations_scaling_factor = 0.0;
      this->max_velocity_scaling_factor = 0.0;
    }
  }

  // field types and members
  using _joint_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_name_type joint_name;
  using _position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _position_type position;
  using _max_accelerations_scaling_factor_type =
    double;
  _max_accelerations_scaling_factor_type max_accelerations_scaling_factor;
  using _max_velocity_scaling_factor_type =
    double;
  _max_velocity_scaling_factor_type max_velocity_scaling_factor;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__max_accelerations_scaling_factor(
    const double & _arg)
  {
    this->max_accelerations_scaling_factor = _arg;
    return *this;
  }
  Type & set__max_velocity_scaling_factor(
    const double & _arg)
  {
    this->max_velocity_scaling_factor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    open_manipulator_msgs::msg::JointPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const open_manipulator_msgs::msg::JointPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<open_manipulator_msgs::msg::JointPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<open_manipulator_msgs::msg::JointPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::msg::JointPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::msg::JointPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::msg::JointPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::msg::JointPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<open_manipulator_msgs::msg::JointPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<open_manipulator_msgs::msg::JointPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__open_manipulator_msgs__msg__JointPosition
    std::shared_ptr<open_manipulator_msgs::msg::JointPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__open_manipulator_msgs__msg__JointPosition
    std::shared_ptr<open_manipulator_msgs::msg::JointPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointPosition_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->max_accelerations_scaling_factor != other.max_accelerations_scaling_factor) {
      return false;
    }
    if (this->max_velocity_scaling_factor != other.max_velocity_scaling_factor) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointPosition_

// alias to use template instance with default allocator
using JointPosition =
  open_manipulator_msgs::msg::JointPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__MSG__DETAIL__JOINT_POSITION__STRUCT_HPP_
