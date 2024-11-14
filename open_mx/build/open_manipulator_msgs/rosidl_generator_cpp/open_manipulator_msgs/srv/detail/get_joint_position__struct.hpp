// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from open_manipulator_msgs:srv/GetJointPosition.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_JOINT_POSITION__STRUCT_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_JOINT_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__open_manipulator_msgs__srv__GetJointPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__open_manipulator_msgs__srv__GetJointPosition_Request __declspec(deprecated)
#endif

namespace open_manipulator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetJointPosition_Request_
{
  using Type = GetJointPosition_Request_<ContainerAllocator>;

  explicit GetJointPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_group = "";
    }
  }

  explicit GetJointPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planning_group(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_group = "";
    }
  }

  // field types and members
  using _planning_group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planning_group_type planning_group;

  // setters for named parameter idiom
  Type & set__planning_group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planning_group = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    open_manipulator_msgs::srv::GetJointPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const open_manipulator_msgs::srv::GetJointPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::GetJointPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::GetJointPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::GetJointPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::GetJointPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::GetJointPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::GetJointPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::GetJointPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::GetJointPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__open_manipulator_msgs__srv__GetJointPosition_Request
    std::shared_ptr<open_manipulator_msgs::srv::GetJointPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__open_manipulator_msgs__srv__GetJointPosition_Request
    std::shared_ptr<open_manipulator_msgs::srv::GetJointPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetJointPosition_Request_ & other) const
  {
    if (this->planning_group != other.planning_group) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetJointPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetJointPosition_Request_

// alias to use template instance with default allocator
using GetJointPosition_Request =
  open_manipulator_msgs::srv::GetJointPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace open_manipulator_msgs


// Include directives for member types
// Member 'joint_position'
#include "open_manipulator_msgs/msg/detail/joint_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__open_manipulator_msgs__srv__GetJointPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__open_manipulator_msgs__srv__GetJointPosition_Response __declspec(deprecated)
#endif

namespace open_manipulator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetJointPosition_Response_
{
  using Type = GetJointPosition_Response_<ContainerAllocator>;

  explicit GetJointPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_position(_init)
  {
    (void)_init;
  }

  explicit GetJointPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_position(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joint_position_type =
    open_manipulator_msgs::msg::JointPosition_<ContainerAllocator>;
  _joint_position_type joint_position;

  // setters for named parameter idiom
  Type & set__joint_position(
    const open_manipulator_msgs::msg::JointPosition_<ContainerAllocator> & _arg)
  {
    this->joint_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    open_manipulator_msgs::srv::GetJointPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const open_manipulator_msgs::srv::GetJointPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::GetJointPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::GetJointPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::GetJointPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::GetJointPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::GetJointPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::GetJointPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::GetJointPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::GetJointPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__open_manipulator_msgs__srv__GetJointPosition_Response
    std::shared_ptr<open_manipulator_msgs::srv::GetJointPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__open_manipulator_msgs__srv__GetJointPosition_Response
    std::shared_ptr<open_manipulator_msgs::srv::GetJointPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetJointPosition_Response_ & other) const
  {
    if (this->joint_position != other.joint_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetJointPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetJointPosition_Response_

// alias to use template instance with default allocator
using GetJointPosition_Response =
  open_manipulator_msgs::srv::GetJointPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace open_manipulator_msgs

namespace open_manipulator_msgs
{

namespace srv
{

struct GetJointPosition
{
  using Request = open_manipulator_msgs::srv::GetJointPosition_Request;
  using Response = open_manipulator_msgs::srv::GetJointPosition_Response;
};

}  // namespace srv

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__GET_JOINT_POSITION__STRUCT_HPP_
