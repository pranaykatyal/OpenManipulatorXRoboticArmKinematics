// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_messages:srv/InvVel.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__SRV__DETAIL__INV_VEL__STRUCT_HPP_
#define CUSTOM_MESSAGES__SRV__DETAIL__INV_VEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_messages__srv__InvVel_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__srv__InvVel_Request __declspec(deprecated)
#endif

namespace custom_messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InvVel_Request_
{
  using Type = InvVel_Request_<ContainerAllocator>;

  explicit InvVel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_init)
  {
    (void)_init;
  }

  explicit InvVel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;

  // setters for named parameter idiom
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::srv::InvVel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::srv::InvVel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::srv::InvVel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::srv::InvVel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::srv::InvVel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::srv::InvVel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::srv::InvVel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::srv::InvVel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::srv::InvVel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::srv::InvVel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__srv__InvVel_Request
    std::shared_ptr<custom_messages::srv::InvVel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__srv__InvVel_Request
    std::shared_ptr<custom_messages::srv::InvVel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InvVel_Request_ & other) const
  {
    if (this->twist != other.twist) {
      return false;
    }
    return true;
  }
  bool operator!=(const InvVel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InvVel_Request_

// alias to use template instance with default allocator
using InvVel_Request =
  custom_messages::srv::InvVel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_messages


#ifndef _WIN32
# define DEPRECATED__custom_messages__srv__InvVel_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__srv__InvVel_Response __declspec(deprecated)
#endif

namespace custom_messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InvVel_Response_
{
  using Type = InvVel_Response_<ContainerAllocator>;

  explicit InvVel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->q_1_dot = 0.0f;
      this->q_2_dot = 0.0f;
      this->q_3_dot = 0.0f;
      this->q_4_dot = 0.0f;
    }
  }

  explicit InvVel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->q_1_dot = 0.0f;
      this->q_2_dot = 0.0f;
      this->q_3_dot = 0.0f;
      this->q_4_dot = 0.0f;
    }
  }

  // field types and members
  using _q_1_dot_type =
    float;
  _q_1_dot_type q_1_dot;
  using _q_2_dot_type =
    float;
  _q_2_dot_type q_2_dot;
  using _q_3_dot_type =
    float;
  _q_3_dot_type q_3_dot;
  using _q_4_dot_type =
    float;
  _q_4_dot_type q_4_dot;

  // setters for named parameter idiom
  Type & set__q_1_dot(
    const float & _arg)
  {
    this->q_1_dot = _arg;
    return *this;
  }
  Type & set__q_2_dot(
    const float & _arg)
  {
    this->q_2_dot = _arg;
    return *this;
  }
  Type & set__q_3_dot(
    const float & _arg)
  {
    this->q_3_dot = _arg;
    return *this;
  }
  Type & set__q_4_dot(
    const float & _arg)
  {
    this->q_4_dot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::srv::InvVel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::srv::InvVel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::srv::InvVel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::srv::InvVel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::srv::InvVel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::srv::InvVel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::srv::InvVel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::srv::InvVel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::srv::InvVel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::srv::InvVel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__srv__InvVel_Response
    std::shared_ptr<custom_messages::srv::InvVel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__srv__InvVel_Response
    std::shared_ptr<custom_messages::srv::InvVel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InvVel_Response_ & other) const
  {
    if (this->q_1_dot != other.q_1_dot) {
      return false;
    }
    if (this->q_2_dot != other.q_2_dot) {
      return false;
    }
    if (this->q_3_dot != other.q_3_dot) {
      return false;
    }
    if (this->q_4_dot != other.q_4_dot) {
      return false;
    }
    return true;
  }
  bool operator!=(const InvVel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InvVel_Response_

// alias to use template instance with default allocator
using InvVel_Response =
  custom_messages::srv::InvVel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_messages

namespace custom_messages
{

namespace srv
{

struct InvVel
{
  using Request = custom_messages::srv::InvVel_Request;
  using Response = custom_messages::srv::InvVel_Response;
};

}  // namespace srv

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__SRV__DETAIL__INV_VEL__STRUCT_HPP_
