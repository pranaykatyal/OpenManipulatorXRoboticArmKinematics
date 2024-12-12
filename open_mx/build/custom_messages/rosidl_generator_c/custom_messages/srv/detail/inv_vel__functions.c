// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_messages:srv/InvVel.idl
// generated code does not contain a copyright notice
#include "custom_messages/srv/detail/inv_vel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
custom_messages__srv__InvVel_Request__init(custom_messages__srv__InvVel_Request * msg)
{
  if (!msg) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    custom_messages__srv__InvVel_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_messages__srv__InvVel_Request__fini(custom_messages__srv__InvVel_Request * msg)
{
  if (!msg) {
    return;
  }
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
}

bool
custom_messages__srv__InvVel_Request__are_equal(const custom_messages__srv__InvVel_Request * lhs, const custom_messages__srv__InvVel_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  return true;
}

bool
custom_messages__srv__InvVel_Request__copy(
  const custom_messages__srv__InvVel_Request * input,
  custom_messages__srv__InvVel_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  return true;
}

custom_messages__srv__InvVel_Request *
custom_messages__srv__InvVel_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__srv__InvVel_Request * msg = (custom_messages__srv__InvVel_Request *)allocator.allocate(sizeof(custom_messages__srv__InvVel_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_messages__srv__InvVel_Request));
  bool success = custom_messages__srv__InvVel_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_messages__srv__InvVel_Request__destroy(custom_messages__srv__InvVel_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_messages__srv__InvVel_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_messages__srv__InvVel_Request__Sequence__init(custom_messages__srv__InvVel_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__srv__InvVel_Request * data = NULL;

  if (size) {
    data = (custom_messages__srv__InvVel_Request *)allocator.zero_allocate(size, sizeof(custom_messages__srv__InvVel_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_messages__srv__InvVel_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_messages__srv__InvVel_Request__fini(&data[i - 1]);
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
custom_messages__srv__InvVel_Request__Sequence__fini(custom_messages__srv__InvVel_Request__Sequence * array)
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
      custom_messages__srv__InvVel_Request__fini(&array->data[i]);
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

custom_messages__srv__InvVel_Request__Sequence *
custom_messages__srv__InvVel_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__srv__InvVel_Request__Sequence * array = (custom_messages__srv__InvVel_Request__Sequence *)allocator.allocate(sizeof(custom_messages__srv__InvVel_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_messages__srv__InvVel_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_messages__srv__InvVel_Request__Sequence__destroy(custom_messages__srv__InvVel_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_messages__srv__InvVel_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_messages__srv__InvVel_Request__Sequence__are_equal(const custom_messages__srv__InvVel_Request__Sequence * lhs, const custom_messages__srv__InvVel_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_messages__srv__InvVel_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_messages__srv__InvVel_Request__Sequence__copy(
  const custom_messages__srv__InvVel_Request__Sequence * input,
  custom_messages__srv__InvVel_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_messages__srv__InvVel_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_messages__srv__InvVel_Request * data =
      (custom_messages__srv__InvVel_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_messages__srv__InvVel_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_messages__srv__InvVel_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_messages__srv__InvVel_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
custom_messages__srv__InvVel_Response__init(custom_messages__srv__InvVel_Response * msg)
{
  if (!msg) {
    return false;
  }
  // q_1_dot
  // q_2_dot
  // q_3_dot
  // q_4_dot
  return true;
}

void
custom_messages__srv__InvVel_Response__fini(custom_messages__srv__InvVel_Response * msg)
{
  if (!msg) {
    return;
  }
  // q_1_dot
  // q_2_dot
  // q_3_dot
  // q_4_dot
}

bool
custom_messages__srv__InvVel_Response__are_equal(const custom_messages__srv__InvVel_Response * lhs, const custom_messages__srv__InvVel_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // q_1_dot
  if (lhs->q_1_dot != rhs->q_1_dot) {
    return false;
  }
  // q_2_dot
  if (lhs->q_2_dot != rhs->q_2_dot) {
    return false;
  }
  // q_3_dot
  if (lhs->q_3_dot != rhs->q_3_dot) {
    return false;
  }
  // q_4_dot
  if (lhs->q_4_dot != rhs->q_4_dot) {
    return false;
  }
  return true;
}

bool
custom_messages__srv__InvVel_Response__copy(
  const custom_messages__srv__InvVel_Response * input,
  custom_messages__srv__InvVel_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // q_1_dot
  output->q_1_dot = input->q_1_dot;
  // q_2_dot
  output->q_2_dot = input->q_2_dot;
  // q_3_dot
  output->q_3_dot = input->q_3_dot;
  // q_4_dot
  output->q_4_dot = input->q_4_dot;
  return true;
}

custom_messages__srv__InvVel_Response *
custom_messages__srv__InvVel_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__srv__InvVel_Response * msg = (custom_messages__srv__InvVel_Response *)allocator.allocate(sizeof(custom_messages__srv__InvVel_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_messages__srv__InvVel_Response));
  bool success = custom_messages__srv__InvVel_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_messages__srv__InvVel_Response__destroy(custom_messages__srv__InvVel_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_messages__srv__InvVel_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_messages__srv__InvVel_Response__Sequence__init(custom_messages__srv__InvVel_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__srv__InvVel_Response * data = NULL;

  if (size) {
    data = (custom_messages__srv__InvVel_Response *)allocator.zero_allocate(size, sizeof(custom_messages__srv__InvVel_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_messages__srv__InvVel_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_messages__srv__InvVel_Response__fini(&data[i - 1]);
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
custom_messages__srv__InvVel_Response__Sequence__fini(custom_messages__srv__InvVel_Response__Sequence * array)
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
      custom_messages__srv__InvVel_Response__fini(&array->data[i]);
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

custom_messages__srv__InvVel_Response__Sequence *
custom_messages__srv__InvVel_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__srv__InvVel_Response__Sequence * array = (custom_messages__srv__InvVel_Response__Sequence *)allocator.allocate(sizeof(custom_messages__srv__InvVel_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_messages__srv__InvVel_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_messages__srv__InvVel_Response__Sequence__destroy(custom_messages__srv__InvVel_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_messages__srv__InvVel_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_messages__srv__InvVel_Response__Sequence__are_equal(const custom_messages__srv__InvVel_Response__Sequence * lhs, const custom_messages__srv__InvVel_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_messages__srv__InvVel_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_messages__srv__InvVel_Response__Sequence__copy(
  const custom_messages__srv__InvVel_Response__Sequence * input,
  custom_messages__srv__InvVel_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_messages__srv__InvVel_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_messages__srv__InvVel_Response * data =
      (custom_messages__srv__InvVel_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_messages__srv__InvVel_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_messages__srv__InvVel_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_messages__srv__InvVel_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
