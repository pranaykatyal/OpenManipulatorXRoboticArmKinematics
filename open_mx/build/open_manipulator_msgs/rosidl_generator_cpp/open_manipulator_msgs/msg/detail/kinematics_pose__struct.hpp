// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from open_manipulator_msgs:msg/KinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__MSG__DETAIL__KINEMATICS_POSE__STRUCT_HPP_
#define OPEN_MANIPULATOR_MSGS__MSG__DETAIL__KINEMATICS_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__open_manipulator_msgs__msg__KinematicsPose __attribute__((deprecated))
#else
# define DEPRECATED__open_manipulator_msgs__msg__KinematicsPose __declspec(deprecated)
#endif

namespace open_manipulator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KinematicsPose_
{
  using Type = KinematicsPose_<ContainerAllocator>;

  explicit KinematicsPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_accelerations_scaling_factor = 0.0;
      this->max_velocity_scaling_factor = 0.0;
      this->tolerance = 0.0;
    }
  }

  explicit KinematicsPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_accelerations_scaling_factor = 0.0;
      this->max_velocity_scaling_factor = 0.0;
      this->tolerance = 0.0;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _max_accelerations_scaling_factor_type =
    double;
  _max_accelerations_scaling_factor_type max_accelerations_scaling_factor;
  using _max_velocity_scaling_factor_type =
    double;
  _max_velocity_scaling_factor_type max_velocity_scaling_factor;
  using _tolerance_type =
    double;
  _tolerance_type tolerance;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
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
  Type & set__tolerance(
    const double & _arg)
  {
    this->tolerance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__open_manipulator_msgs__msg__KinematicsPose
    std::shared_ptr<open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__open_manipulator_msgs__msg__KinematicsPose
    std::shared_ptr<open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KinematicsPose_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->max_accelerations_scaling_factor != other.max_accelerations_scaling_factor) {
      return false;
    }
    if (this->max_velocity_scaling_factor != other.max_velocity_scaling_factor) {
      return false;
    }
    if (this->tolerance != other.tolerance) {
      return false;
    }
    return true;
  }
  bool operator!=(const KinematicsPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KinematicsPose_

// alias to use template instance with default allocator
using KinematicsPose =
  open_manipulator_msgs::msg::KinematicsPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__MSG__DETAIL__KINEMATICS_POSE__STRUCT_HPP_
