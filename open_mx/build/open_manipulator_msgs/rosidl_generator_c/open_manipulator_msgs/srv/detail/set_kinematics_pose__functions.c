// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from open_manipulator_msgs:srv/SetKinematicsPose.idl
// generated code does not contain a copyright notice
#include "open_manipulator_msgs/srv/detail/set_kinematics_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `planning_group`
// Member `end_effector_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `kinematics_pose`
#include "open_manipulator_msgs/msg/detail/kinematics_pose__functions.h"

bool
open_manipulator_msgs__srv__SetKinematicsPose_Request__init(open_manipulator_msgs__srv__SetKinematicsPose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // planning_group
  if (!rosidl_runtime_c__String__init(&msg->planning_group)) {
    open_manipulator_msgs__srv__SetKinematicsPose_Request__fini(msg);
    return false;
  }
  // end_effector_name
  if (!rosidl_runtime_c__String__init(&msg->end_effector_name)) {
    open_manipulator_msgs__srv__SetKinematicsPose_Request__fini(msg);
    return false;
  }
  // kinematics_pose
  if (!open_manipulator_msgs__msg__KinematicsPose__init(&msg->kinematics_pose)) {
    open_manipulator_msgs__srv__SetKinematicsPose_Request__fini(msg);
    return false;
  }
  // path_time
  return true;
}

void
open_manipulator_msgs__srv__SetKinematicsPose_Request__fini(open_manipulator_msgs__srv__SetKinematicsPose_Request * msg)
{
  if (!msg) {
    return;
  }
  // planning_group
  rosidl_runtime_c__String__fini(&msg->planning_group);
  // end_effector_name
  rosidl_runtime_c__String__fini(&msg->end_effector_name);
  // kinematics_pose
  open_manipulator_msgs__msg__KinematicsPose__fini(&msg->kinematics_pose);
  // path_time
}

bool
open_manipulator_msgs__srv__SetKinematicsPose_Request__are_equal(const open_manipulator_msgs__srv__SetKinematicsPose_Request * lhs, const open_manipulator_msgs__srv__SetKinematicsPose_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // planning_group
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planning_group), &(rhs->planning_group)))
  {
    return false;
  }
  // end_effector_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->end_effector_name), &(rhs->end_effector_name)))
  {
    return false;
  }
  // kinematics_pose
  if (!open_manipulator_msgs__msg__KinematicsPose__are_equal(
      &(lhs->kinematics_pose), &(rhs->kinematics_pose)))
  {
    return false;
  }
  // path_time
  if (lhs->path_time != rhs->path_time) {
    return false;
  }
  return true;
}

bool
open_manipulator_msgs__srv__SetKinematicsPose_Request__copy(
  const open_manipulator_msgs__srv__SetKinematicsPose_Request * input,
  open_manipulator_msgs__srv__SetKinematicsPose_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // planning_group
  if (!rosidl_runtime_c__String__copy(
      &(input->planning_group), &(output->planning_group)))
  {
    return false;
  }
  // end_effector_name
  if (!rosidl_runtime_c__String__copy(
      &(input->end_effector_name), &(output->end_effector_name)))
  {
    return false;
  }
  // kinematics_pose
  if (!open_manipulator_msgs__msg__KinematicsPose__copy(
      &(input->kinematics_pose), &(output->kinematics_pose)))
  {
    return false;
  }
  // path_time
  output->path_time = input->path_time;
  return true;
}

open_manipulator_msgs__srv__SetKinematicsPose_Request *
open_manipulator_msgs__srv__SetKinematicsPose_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_manipulator_msgs__srv__SetKinematicsPose_Request * msg = (open_manipulator_msgs__srv__SetKinematicsPose_Request *)allocator.allocate(sizeof(open_manipulator_msgs__srv__SetKinematicsPose_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(open_manipulator_msgs__srv__SetKinematicsPose_Request));
  bool success = open_manipulator_msgs__srv__SetKinematicsPose_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
open_manipulator_msgs__srv__SetKinematicsPose_Request__destroy(open_manipulator_msgs__srv__SetKinematicsPose_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    open_manipulator_msgs__srv__SetKinematicsPose_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence__init(open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_manipulator_msgs__srv__SetKinematicsPose_Request * data = NULL;

  if (size) {
    data = (open_manipulator_msgs__srv__SetKinematicsPose_Request *)allocator.zero_allocate(size, sizeof(open_manipulator_msgs__srv__SetKinematicsPose_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = open_manipulator_msgs__srv__SetKinematicsPose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        open_manipulator_msgs__srv__SetKinematicsPose_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence__fini(open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      open_manipulator_msgs__srv__SetKinematicsPose_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence *
open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence * array = (open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence *)allocator.allocate(sizeof(open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence__destroy(open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence__are_equal(const open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence * lhs, const open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!open_manipulator_msgs__srv__SetKinematicsPose_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence__copy(
  const open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence * input,
  open_manipulator_msgs__srv__SetKinematicsPose_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(open_manipulator_msgs__srv__SetKinematicsPose_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    open_manipulator_msgs__srv__SetKinematicsPose_Request * data =
      (open_manipulator_msgs__srv__SetKinematicsPose_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!open_manipulator_msgs__srv__SetKinematicsPose_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          open_manipulator_msgs__srv__SetKinematicsPose_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!open_manipulator_msgs__srv__SetKinematicsPose_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
open_manipulator_msgs__srv__SetKinematicsPose_Response__init(open_manipulator_msgs__srv__SetKinematicsPose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // is_planned
  return true;
}

void
open_manipulator_msgs__srv__SetKinematicsPose_Response__fini(open_manipulator_msgs__srv__SetKinematicsPose_Response * msg)
{
  if (!msg) {
    return;
  }
  // is_planned
}

bool
open_manipulator_msgs__srv__SetKinematicsPose_Response__are_equal(const open_manipulator_msgs__srv__SetKinematicsPose_Response * lhs, const open_manipulator_msgs__srv__SetKinematicsPose_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_planned
  if (lhs->is_planned != rhs->is_planned) {
    return false;
  }
  return true;
}

bool
open_manipulator_msgs__srv__SetKinematicsPose_Response__copy(
  const open_manipulator_msgs__srv__SetKinematicsPose_Response * input,
  open_manipulator_msgs__srv__SetKinematicsPose_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // is_planned
  output->is_planned = input->is_planned;
  return true;
}

open_manipulator_msgs__srv__SetKinematicsPose_Response *
open_manipulator_msgs__srv__SetKinematicsPose_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_manipulator_msgs__srv__SetKinematicsPose_Response * msg = (open_manipulator_msgs__srv__SetKinematicsPose_Response *)allocator.allocate(sizeof(open_manipulator_msgs__srv__SetKinematicsPose_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(open_manipulator_msgs__srv__SetKinematicsPose_Response));
  bool success = open_manipulator_msgs__srv__SetKinematicsPose_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
open_manipulator_msgs__srv__SetKinematicsPose_Response__destroy(open_manipulator_msgs__srv__SetKinematicsPose_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    open_manipulator_msgs__srv__SetKinematicsPose_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence__init(open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_manipulator_msgs__srv__SetKinematicsPose_Response * data = NULL;

  if (size) {
    data = (open_manipulator_msgs__srv__SetKinematicsPose_Response *)allocator.zero_allocate(size, sizeof(open_manipulator_msgs__srv__SetKinematicsPose_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = open_manipulator_msgs__srv__SetKinematicsPose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        open_manipulator_msgs__srv__SetKinematicsPose_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence__fini(open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      open_manipulator_msgs__srv__SetKinematicsPose_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence *
open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence * array = (open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence *)allocator.allocate(sizeof(open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence__destroy(open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence__are_equal(const open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence * lhs, const open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!open_manipulator_msgs__srv__SetKinematicsPose_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence__copy(
  const open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence * input,
  open_manipulator_msgs__srv__SetKinematicsPose_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(open_manipulator_msgs__srv__SetKinematicsPose_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    open_manipulator_msgs__srv__SetKinematicsPose_Response * data =
      (open_manipulator_msgs__srv__SetKinematicsPose_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!open_manipulator_msgs__srv__SetKinematicsPose_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          open_manipulator_msgs__srv__SetKinematicsPose_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!open_manipulator_msgs__srv__SetKinematicsPose_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
