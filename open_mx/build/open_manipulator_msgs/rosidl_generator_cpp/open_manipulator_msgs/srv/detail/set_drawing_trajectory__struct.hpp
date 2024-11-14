// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from open_manipulator_msgs:srv/SetDrawingTrajectory.idl
// generated code does not contain a copyright notice

#ifndef OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_DRAWING_TRAJECTORY__STRUCT_HPP_
#define OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_DRAWING_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__open_manipulator_msgs__srv__SetDrawingTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__open_manipulator_msgs__srv__SetDrawingTrajectory_Request __declspec(deprecated)
#endif

namespace open_manipulator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDrawingTrajectory_Request_
{
  using Type = SetDrawingTrajectory_Request_<ContainerAllocator>;

  explicit SetDrawingTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_effector_name = "";
      this->drawing_trajectory_name = "";
      this->path_time = 0.0;
    }
  }

  explicit SetDrawingTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_effector_name(_alloc),
    drawing_trajectory_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_effector_name = "";
      this->drawing_trajectory_name = "";
      this->path_time = 0.0;
    }
  }

  // field types and members
  using _end_effector_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _end_effector_name_type end_effector_name;
  using _drawing_trajectory_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _drawing_trajectory_name_type drawing_trajectory_name;
  using _param_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _param_type param;
  using _path_time_type =
    double;
  _path_time_type path_time;

  // setters for named parameter idiom
  Type & set__end_effector_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->end_effector_name = _arg;
    return *this;
  }
  Type & set__drawing_trajectory_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->drawing_trajectory_name = _arg;
    return *this;
  }
  Type & set__param(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->param = _arg;
    return *this;
  }
  Type & set__path_time(
    const double & _arg)
  {
    this->path_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__open_manipulator_msgs__srv__SetDrawingTrajectory_Request
    std::shared_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__open_manipulator_msgs__srv__SetDrawingTrajectory_Request
    std::shared_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDrawingTrajectory_Request_ & other) const
  {
    if (this->end_effector_name != other.end_effector_name) {
      return false;
    }
    if (this->drawing_trajectory_name != other.drawing_trajectory_name) {
      return false;
    }
    if (this->param != other.param) {
      return false;
    }
    if (this->path_time != other.path_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDrawingTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDrawingTrajectory_Request_

// alias to use template instance with default allocator
using SetDrawingTrajectory_Request =
  open_manipulator_msgs::srv::SetDrawingTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace open_manipulator_msgs


#ifndef _WIN32
# define DEPRECATED__open_manipulator_msgs__srv__SetDrawingTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__open_manipulator_msgs__srv__SetDrawingTrajectory_Response __declspec(deprecated)
#endif

namespace open_manipulator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDrawingTrajectory_Response_
{
  using Type = SetDrawingTrajectory_Response_<ContainerAllocator>;

  explicit SetDrawingTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_planned = false;
    }
  }

  explicit SetDrawingTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__open_manipulator_msgs__srv__SetDrawingTrajectory_Response
    std::shared_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__open_manipulator_msgs__srv__SetDrawingTrajectory_Response
    std::shared_ptr<open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDrawingTrajectory_Response_ & other) const
  {
    if (this->is_planned != other.is_planned) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDrawingTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDrawingTrajectory_Response_

// alias to use template instance with default allocator
using SetDrawingTrajectory_Response =
  open_manipulator_msgs::srv::SetDrawingTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace open_manipulator_msgs

namespace open_manipulator_msgs
{

namespace srv
{

struct SetDrawingTrajectory
{
  using Request = open_manipulator_msgs::srv::SetDrawingTrajectory_Request;
  using Response = open_manipulator_msgs::srv::SetDrawingTrajectory_Response;
};

}  // namespace srv

}  // namespace open_manipulator_msgs

#endif  // OPEN_MANIPULATOR_MSGS__SRV__DETAIL__SET_DRAWING_TRAJECTORY__STRUCT_HPP_
