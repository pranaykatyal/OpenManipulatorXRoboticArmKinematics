// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from open_manipulator_msgs:srv/SetDrawingTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "open_manipulator_msgs/srv/detail/set_drawing_trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace open_manipulator_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetDrawingTrajectory_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) open_manipulator_msgs::srv::SetDrawingTrajectory_Request(_init);
}

void SetDrawingTrajectory_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<open_manipulator_msgs::srv::SetDrawingTrajectory_Request *>(message_memory);
  typed_message->~SetDrawingTrajectory_Request();
}

size_t size_function__SetDrawingTrajectory_Request__param(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetDrawingTrajectory_Request__param(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetDrawingTrajectory_Request__param(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetDrawingTrajectory_Request__param(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetDrawingTrajectory_Request__param(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetDrawingTrajectory_Request__param(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetDrawingTrajectory_Request__param(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetDrawingTrajectory_Request__param(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetDrawingTrajectory_Request_message_member_array[4] = {
  {
    "end_effector_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs::srv::SetDrawingTrajectory_Request, end_effector_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drawing_trajectory_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs::srv::SetDrawingTrajectory_Request, drawing_trajectory_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "param",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs::srv::SetDrawingTrajectory_Request, param),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetDrawingTrajectory_Request__param,  // size() function pointer
    get_const_function__SetDrawingTrajectory_Request__param,  // get_const(index) function pointer
    get_function__SetDrawingTrajectory_Request__param,  // get(index) function pointer
    fetch_function__SetDrawingTrajectory_Request__param,  // fetch(index, &value) function pointer
    assign_function__SetDrawingTrajectory_Request__param,  // assign(index, value) function pointer
    resize_function__SetDrawingTrajectory_Request__param  // resize(index) function pointer
  },
  {
    "path_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs::srv::SetDrawingTrajectory_Request, path_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetDrawingTrajectory_Request_message_members = {
  "open_manipulator_msgs::srv",  // message namespace
  "SetDrawingTrajectory_Request",  // message name
  4,  // number of fields
  sizeof(open_manipulator_msgs::srv::SetDrawingTrajectory_Request),
  SetDrawingTrajectory_Request_message_member_array,  // message members
  SetDrawingTrajectory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetDrawingTrajectory_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetDrawingTrajectory_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetDrawingTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace open_manipulator_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<open_manipulator_msgs::srv::SetDrawingTrajectory_Request>()
{
  return &::open_manipulator_msgs::srv::rosidl_typesupport_introspection_cpp::SetDrawingTrajectory_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, open_manipulator_msgs, srv, SetDrawingTrajectory_Request)() {
  return &::open_manipulator_msgs::srv::rosidl_typesupport_introspection_cpp::SetDrawingTrajectory_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "open_manipulator_msgs/srv/detail/set_drawing_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace open_manipulator_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetDrawingTrajectory_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) open_manipulator_msgs::srv::SetDrawingTrajectory_Response(_init);
}

void SetDrawingTrajectory_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<open_manipulator_msgs::srv::SetDrawingTrajectory_Response *>(message_memory);
  typed_message->~SetDrawingTrajectory_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetDrawingTrajectory_Response_message_member_array[1] = {
  {
    "is_planned",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_manipulator_msgs::srv::SetDrawingTrajectory_Response, is_planned),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetDrawingTrajectory_Response_message_members = {
  "open_manipulator_msgs::srv",  // message namespace
  "SetDrawingTrajectory_Response",  // message name
  1,  // number of fields
  sizeof(open_manipulator_msgs::srv::SetDrawingTrajectory_Response),
  SetDrawingTrajectory_Response_message_member_array,  // message members
  SetDrawingTrajectory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetDrawingTrajectory_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetDrawingTrajectory_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetDrawingTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace open_manipulator_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<open_manipulator_msgs::srv::SetDrawingTrajectory_Response>()
{
  return &::open_manipulator_msgs::srv::rosidl_typesupport_introspection_cpp::SetDrawingTrajectory_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, open_manipulator_msgs, srv, SetDrawingTrajectory_Response)() {
  return &::open_manipulator_msgs::srv::rosidl_typesupport_introspection_cpp::SetDrawingTrajectory_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "open_manipulator_msgs/srv/detail/set_drawing_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace open_manipulator_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetDrawingTrajectory_service_members = {
  "open_manipulator_msgs::srv",  // service namespace
  "SetDrawingTrajectory",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<open_manipulator_msgs::srv::SetDrawingTrajectory>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SetDrawingTrajectory_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetDrawingTrajectory_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace open_manipulator_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<open_manipulator_msgs::srv::SetDrawingTrajectory>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::open_manipulator_msgs::srv::rosidl_typesupport_introspection_cpp::SetDrawingTrajectory_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::open_manipulator_msgs::srv::SetDrawingTrajectory_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::open_manipulator_msgs::srv::SetDrawingTrajectory_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, open_manipulator_msgs, srv, SetDrawingTrajectory)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<open_manipulator_msgs::srv::SetDrawingTrajectory>();
}

#ifdef __cplusplus
}
#endif
