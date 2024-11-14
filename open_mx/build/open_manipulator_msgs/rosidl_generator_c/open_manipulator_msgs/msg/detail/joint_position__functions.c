// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from open_manipulator_msgs:msg/JointPosition.idl
// generated code does not contain a copyright notice
#include "open_manipulator_msgs/msg/detail/joint_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
open_manipulator_msgs__msg__JointPosition__init(open_manipulator_msgs__msg__JointPosition * msg)
{
  if (!msg) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_name, 0)) {
    open_manipulator_msgs__msg__JointPosition__fini(msg);
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    open_manipulator_msgs__msg__JointPosition__fini(msg);
    return false;
  }
  // max_accelerations_scaling_factor
  // max_velocity_scaling_factor
  return true;
}

void
open_manipulator_msgs__msg__JointPosition__fini(open_manipulator_msgs__msg__JointPosition * msg)
{
  if (!msg) {
    return;
  }
  // joint_name
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_name);
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
  // max_accelerations_scaling_factor
  // max_velocity_scaling_factor
}

bool
open_manipulator_msgs__msg__JointPosition__are_equal(const open_manipulator_msgs__msg__JointPosition * lhs, const open_manipulator_msgs__msg__JointPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint_name), &(rhs->joint_name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // max_accelerations_scaling_factor
  if (lhs->max_accelerations_scaling_factor != rhs->max_accelerations_scaling_factor) {
    return false;
  }
  // max_velocity_scaling_factor
  if (lhs->max_velocity_scaling_factor != rhs->max_velocity_scaling_factor) {
    return false;
  }
  return true;
}

bool
open_manipulator_msgs__msg__JointPosition__copy(
  const open_manipulator_msgs__msg__JointPosition * input,
  open_manipulator_msgs__msg__JointPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint_name), &(output->joint_name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // max_accelerations_scaling_factor
  output->max_accelerations_scaling_factor = input->max_accelerations_scaling_factor;
  // max_velocity_scaling_factor
  output->max_velocity_scaling_factor = input->max_velocity_scaling_factor;
  return true;
}

open_manipulator_msgs__msg__JointPosition *
open_manipulator_msgs__msg__JointPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_manipulator_msgs__msg__JointPosition * msg = (open_manipulator_msgs__msg__JointPosition *)allocator.allocate(sizeof(open_manipulator_msgs__msg__JointPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(open_manipulator_msgs__msg__JointPosition));
  bool success = open_manipulator_msgs__msg__JointPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
open_manipulator_msgs__msg__JointPosition__destroy(open_manipulator_msgs__msg__JointPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    open_manipulator_msgs__msg__JointPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
open_manipulator_msgs__msg__JointPosition__Sequence__init(open_manipulator_msgs__msg__JointPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_manipulator_msgs__msg__JointPosition * data = NULL;

  if (size) {
    data = (open_manipulator_msgs__msg__JointPosition *)allocator.zero_allocate(size, sizeof(open_manipulator_msgs__msg__JointPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = open_manipulator_msgs__msg__JointPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        open_manipulator_msgs__msg__JointPosition__fini(&data[i - 1]);
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
open_manipulator_msgs__msg__JointPosition__Sequence__fini(open_manipulator_msgs__msg__JointPosition__Sequence * array)
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
      open_manipulator_msgs__msg__JointPosition__fini(&array->data[i]);
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

open_manipulator_msgs__msg__JointPosition__Sequence *
open_manipulator_msgs__msg__JointPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_manipulator_msgs__msg__JointPosition__Sequence * array = (open_manipulator_msgs__msg__JointPosition__Sequence *)allocator.allocate(sizeof(open_manipulator_msgs__msg__JointPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = open_manipulator_msgs__msg__JointPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
open_manipulator_msgs__msg__JointPosition__Sequence__destroy(open_manipulator_msgs__msg__JointPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    open_manipulator_msgs__msg__JointPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
open_manipulator_msgs__msg__JointPosition__Sequence__are_equal(const open_manipulator_msgs__msg__JointPosition__Sequence * lhs, const open_manipulator_msgs__msg__JointPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!open_manipulator_msgs__msg__JointPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
open_manipulator_msgs__msg__JointPosition__Sequence__copy(
  const open_manipulator_msgs__msg__JointPosition__Sequence * input,
  open_manipulator_msgs__msg__JointPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(open_manipulator_msgs__msg__JointPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    open_manipulator_msgs__msg__JointPosition * data =
      (open_manipulator_msgs__msg__JointPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!open_manipulator_msgs__msg__JointPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          open_manipulator_msgs__msg__JointPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!open_manipulator_msgs__msg__JointPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
