// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_messages:srv/InvKin.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__SRV__DETAIL__INV_KIN__STRUCT_HPP_
#define CUSTOM_MESSAGES__SRV__DETAIL__INV_KIN__STRUCT_HPP_

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
# define DEPRECATED__custom_messages__srv__InvKin_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__srv__InvKin_Request __declspec(deprecated)
#endif

namespace custom_messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InvKin_Request_
{
  using Type = InvKin_Request_<ContainerAllocator>;

  explicit InvKin_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit InvKin_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::srv::InvKin_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::srv::InvKin_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::srv::InvKin_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::srv::InvKin_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::srv::InvKin_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::srv::InvKin_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::srv::InvKin_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::srv::InvKin_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::srv::InvKin_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::srv::InvKin_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__srv__InvKin_Request
    std::shared_ptr<custom_messages::srv::InvKin_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__srv__InvKin_Request
    std::shared_ptr<custom_messages::srv::InvKin_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InvKin_Request_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const InvKin_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InvKin_Request_

// alias to use template instance with default allocator
using InvKin_Request =
  custom_messages::srv::InvKin_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_messages


#ifndef _WIN32
# define DEPRECATED__custom_messages__srv__InvKin_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__srv__InvKin_Response __declspec(deprecated)
#endif

namespace custom_messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InvKin_Response_
{
  using Type = InvKin_Response_<ContainerAllocator>;

  explicit InvKin_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->q_1 = 0.0f;
      this->q_2 = 0.0f;
      this->q_3 = 0.0f;
      this->q_4 = 0.0f;
    }
  }

  explicit InvKin_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->q_1 = 0.0f;
      this->q_2 = 0.0f;
      this->q_3 = 0.0f;
      this->q_4 = 0.0f;
    }
  }

  // field types and members
  using _q_1_type =
    float;
  _q_1_type q_1;
  using _q_2_type =
    float;
  _q_2_type q_2;
  using _q_3_type =
    float;
  _q_3_type q_3;
  using _q_4_type =
    float;
  _q_4_type q_4;

  // setters for named parameter idiom
  Type & set__q_1(
    const float & _arg)
  {
    this->q_1 = _arg;
    return *this;
  }
  Type & set__q_2(
    const float & _arg)
  {
    this->q_2 = _arg;
    return *this;
  }
  Type & set__q_3(
    const float & _arg)
  {
    this->q_3 = _arg;
    return *this;
  }
  Type & set__q_4(
    const float & _arg)
  {
    this->q_4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::srv::InvKin_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::srv::InvKin_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::srv::InvKin_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::srv::InvKin_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::srv::InvKin_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::srv::InvKin_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::srv::InvKin_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::srv::InvKin_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::srv::InvKin_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::srv::InvKin_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__srv__InvKin_Response
    std::shared_ptr<custom_messages::srv::InvKin_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__srv__InvKin_Response
    std::shared_ptr<custom_messages::srv::InvKin_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InvKin_Response_ & other) const
  {
    if (this->q_1 != other.q_1) {
      return false;
    }
    if (this->q_2 != other.q_2) {
      return false;
    }
    if (this->q_3 != other.q_3) {
      return false;
    }
    if (this->q_4 != other.q_4) {
      return false;
    }
    return true;
  }
  bool operator!=(const InvKin_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InvKin_Response_

// alias to use template instance with default allocator
using InvKin_Response =
  custom_messages::srv::InvKin_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_messages

namespace custom_messages
{

namespace srv
{

struct InvKin
{
  using Request = custom_messages::srv::InvKin_Request;
  using Response = custom_messages::srv::InvKin_Response;
};

}  // namespace srv

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__SRV__DETAIL__INV_KIN__STRUCT_HPP_
