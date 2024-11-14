// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from open_manipulator_msgs:msg/OpenManipulatorState.idl
// generated code does not contain a copyright notice
#include "open_manipulator_msgs/msg/detail/open_manipulator_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `open_manipulator_moving_state`
// Member `open_manipulator_actuator_state`
#include "rosidl_runtime_c/string_functions.h"

bool
open_manipulator_msgs__msg__OpenManipulatorState__init(open_manipulator_msgs__msg__OpenManipulatorState * msg)
{
  if (!msg) {
    return false;
  }
  // open_manipulator_moving_state
  if (!rosidl_runtime_c__String__init(&msg->open_manipulator_moving_state)) {
    open_manipulator_msgs__msg__OpenManipulatorState__fini(msg);
    return false;
  }
  // open_manipulator_actuator_state
  if (!rosidl_runtime_c__String__init(&msg->open_manipulator_actuator_state)) {
    open_manipulator_msgs__msg__OpenManipulatorState__fini(msg);
    return false;
  }
  return true;
}

void
open_manipulator_msgs__msg__OpenManipulatorState__fini(open_manipulator_msgs__msg__OpenManipulatorState * msg)
{
  if (!msg) {
    return;
  }
  // open_manipulator_moving_state
  rosidl_runtime_c__String__fini(&msg->open_manipulator_moving_state);
  // open_manipulator_actuator_state
  rosidl_runtime_c__String__fini(&msg->open_manipulator_actuator_state);
}

bool
open_manipulator_msgs__msg__OpenManipulatorState__are_equal(const open_manipulator_msgs__msg__OpenManipulatorState * lhs, const open_manipulator_msgs__msg__OpenManipulatorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // open_manipulator_moving_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->open_manipulator_moving_state), &(rhs->open_manipulator_moving_state)))
  {
    return false;
  }
  // open_manipulator_actuator_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->open_manipulator_actuator_state), &(rhs->open_manipulator_actuator_state)))
  {
    return false;
  }
  return true;
}

bool
open_manipulator_msgs__msg__OpenManipulatorState__copy(
  const open_manipulator_msgs__msg__OpenManipulatorState * input,
  open_manipulator_msgs__msg__OpenManipulatorState * output)
{
  if (!input || !output) {
    return false;
  }
  // open_manipulator_moving_state
  if (!rosidl_runtime_c__String__copy(
      &(input->open_manipulator_moving_state), &(output->open_manipulator_moving_state)))
  {
    return false;
  }
  // open_manipulator_actuator_state
  if (!rosidl_runtime_c__String__copy(
      &(input->open_manipulator_actuator_state), &(output->open_manipulator_actuator_state)))
  {
    return false;
  }
  return true;
}

open_manipulator_msgs__msg__OpenManipulatorState *
open_manipulator_msgs__msg__OpenManipulatorState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_manipulator_msgs__msg__OpenManipulatorState * msg = (open_manipulator_msgs__msg__OpenManipulatorState *)allocator.allocate(sizeof(open_manipulator_msgs__msg__OpenManipulatorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(open_manipulator_msgs__msg__OpenManipulatorState));
  bool success = open_manipulator_msgs__msg__OpenManipulatorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
open_manipulator_msgs__msg__OpenManipulatorState__destroy(open_manipulator_msgs__msg__OpenManipulatorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    open_manipulator_msgs__msg__OpenManipulatorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
open_manipulator_msgs__msg__OpenManipulatorState__Sequence__init(open_manipulator_msgs__msg__OpenManipulatorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_manipulator_msgs__msg__OpenManipulatorState * data = NULL;

  if (size) {
    data = (open_manipulator_msgs__msg__OpenManipulatorState *)allocator.zero_allocate(size, sizeof(open_manipulator_msgs__msg__OpenManipulatorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = open_manipulator_msgs__msg__OpenManipulatorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        open_manipulator_msgs__msg__OpenManipulatorState__fini(&data[i - 1]);
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
open_manipulator_msgs__msg__OpenManipulatorState__Sequence__fini(open_manipulator_msgs__msg__OpenManipulatorState__Sequence * array)
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
      open_manipulator_msgs__msg__OpenManipulatorState__fini(&array->data[i]);
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

open_manipulator_msgs__msg__OpenManipulatorState__Sequence *
open_manipulator_msgs__msg__OpenManipulatorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_manipulator_msgs__msg__OpenManipulatorState__Sequence * array = (open_manipulator_msgs__msg__OpenManipulatorState__Sequence *)allocator.allocate(sizeof(open_manipulator_msgs__msg__OpenManipulatorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = open_manipulator_msgs__msg__OpenManipulatorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
open_manipulator_msgs__msg__OpenManipulatorState__Sequence__destroy(open_manipulator_msgs__msg__OpenManipulatorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    open_manipulator_msgs__msg__OpenManipulatorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
open_manipulator_msgs__msg__OpenManipulatorState__Sequence__are_equal(const open_manipulator_msgs__msg__OpenManipulatorState__Sequence * lhs, const open_manipulator_msgs__msg__OpenManipulatorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!open_manipulator_msgs__msg__OpenManipulatorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
open_manipulator_msgs__msg__OpenManipulatorState__Sequence__copy(
  const open_manipulator_msgs__msg__OpenManipulatorState__Sequence * input,
  open_manipulator_msgs__msg__OpenManipulatorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(open_manipulator_msgs__msg__OpenManipulatorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    open_manipulator_msgs__msg__OpenManipulatorState * data =
      (open_manipulator_msgs__msg__OpenManipulatorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!open_manipulator_msgs__msg__OpenManipulatorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          open_manipulator_msgs__msg__OpenManipulatorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!open_manipulator_msgs__msg__OpenManipulatorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
