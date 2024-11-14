// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from open_manipulator_msgs:srv/GetKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__STRUCT_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__open_manipulator_msgs__srv__GetKinematicsPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__open_manipulator_msgs__srv__GetKinematicsPose_Request __declspec(deprecated)
#endif

namespace open_manipulator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetKinematicsPose_Request_
{
  using Type = GetKinematicsPose_Request_<ContainerAllocator>;

  explicit GetKinematicsPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_group = "";
      this->end_effector_name = "";
    }
  }

  explicit GetKinematicsPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planning_group(_alloc),
    end_effector_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_group = "";
      this->end_effector_name = "";
    }
  }

  // field types and members
  using _planning_group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planning_group_type planning_group;
  using _end_effector_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _end_effector_name_type end_effector_name;

  // setters for named parameter idiom
  Type & set__planning_group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planning_group = _arg;
    return *this;
  }
  Type & set__end_effector_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->end_effector_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    open_manipulator_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const open_manipulator_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__open_manipulator_msgs__srv__GetKinematicsPose_Request
    std::shared_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__open_manipulator_msgs__srv__GetKinematicsPose_Request
    std::shared_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetKinematicsPose_Request_ & other) const
  {
    if (this->planning_group != other.planning_group) {
      return false;
    }
    if (this->end_effector_name != other.end_effector_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetKinematicsPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetKinematicsPose_Request_

// alias to use template instance with default allocator
using GetKinematicsPose_Request =
  open_manipulator_msgs::srv::GetKinematicsPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace open_manipulator_msgs


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'kinematics_pose'
#include "open_manipulator_msgs/msg/detail/kinematics_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__open_manipulator_msgs__srv__GetKinematicsPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__open_manipulator_msgs__srv__GetKinematicsPose_Response __declspec(deprecated)
#endif

namespace open_manipulator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetKinematicsPose_Response_
{
  using Type = GetKinematicsPose_Response_<ContainerAllocator>;

  explicit GetKinematicsPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    kinematics_pose(_init)
  {
    (void)_init;
  }

  explicit GetKinematicsPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    kinematics_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _kinematics_pose_type =
    open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator>;
  _kinematics_pose_type kinematics_pose;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__kinematics_pose(
    const open_manipulator_msgs::msg::KinematicsPose_<ContainerAllocator> & _arg)
  {
    this->kinematics_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    open_manipulator_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const open_manipulator_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__open_manipulator_msgs__srv__GetKinematicsPose_Response
    std::shared_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__open_manipulator_msgs__srv__GetKinematicsPose_Response
    std::shared_ptr<open_manipulator_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetKinematicsPose_Response_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->kinematics_pose != other.kinematics_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetKinematicsPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetKinematicsPose_Response_

// alias to use template instance with default allocator
using GetKinematicsPose_Response =
  open_manipulator_msgs::srv::GetKinematicsPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace open_manipulator_msgs

namespace open_manipulator_msgs
{

namespace srv
{

struct GetKinematicsPose
{
  using Request = open_manipulator_msgs::srv::GetKinematicsPose_Request;
  using Response = open_manipulator_msgs::srv::GetKinematicsPose_Response;
};

}  // namespace srv

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__STRUCT_HPP_
