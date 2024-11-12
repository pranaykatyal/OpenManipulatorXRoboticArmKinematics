// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_messages:srv/InvKin.idl
// generated code does not contain a copyright notice
#include "custom_messages/srv/detail/inv_kin__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
custom_messages__srv__InvKin_Request__init(custom_messages__srv__InvKin_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    custom_messages__srv__InvKin_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_messages__srv__InvKin_Request__fini(custom_messages__srv__InvKin_Request * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
custom_messages__srv__InvKin_Request__are_equal(const custom_messages__srv__InvKin_Request * lhs, const custom_messages__srv__InvKin_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
custom_messages__srv__InvKin_Request__copy(
  const custom_messages__srv__InvKin_Request * input,
  custom_messages__srv__InvKin_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

custom_messages__srv__InvKin_Request *
custom_messages__srv__InvKin_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__srv__InvKin_Request * msg = (custom_messages__srv__InvKin_Request *)allocator.allocate(sizeof(custom_messages__srv__InvKin_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_messages__srv__InvKin_Request));
  bool success = custom_messages__srv__InvKin_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_messages__srv__InvKin_Request__destroy(custom_messages__srv__InvKin_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_messages__srv__InvKin_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_messages__srv__InvKin_Request__Sequence__init(custom_messages__srv__InvKin_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__srv__InvKin_Request * data = NULL;

  if (size) {
    data = (custom_messages__srv__InvKin_Request *)allocator.zero_allocate(size, sizeof(custom_messages__srv__InvKin_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_messages__srv__InvKin_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_messages__srv__InvKin_Request__fini(&data[i - 1]);
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
custom_messages__srv__InvKin_Request__Sequence__fini(custom_messages__srv__InvKin_Request__Sequence * array)
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
      custom_messages__srv__InvKin_Request__fini(&array->data[i]);
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

custom_messages__srv__InvKin_Request__Sequence *
custom_messages__srv__InvKin_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__srv__InvKin_Request__Sequence * array = (custom_messages__srv__InvKin_Request__Sequence *)allocator.allocate(sizeof(custom_messages__srv__InvKin_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_messages__srv__InvKin_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_messages__srv__InvKin_Request__Sequence__destroy(custom_messages__srv__InvKin_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_messages__srv__InvKin_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_messages__srv__InvKin_Request__Sequence__are_equal(const custom_messages__srv__InvKin_Request__Sequence * lhs, const custom_messages__srv__InvKin_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_messages__srv__InvKin_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_messages__srv__InvKin_Request__Sequence__copy(
  const custom_messages__srv__InvKin_Request__Sequence * input,
  custom_messages__srv__InvKin_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_messages__srv__InvKin_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_messages__srv__InvKin_Request * data =
      (custom_messages__srv__InvKin_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_messages__srv__InvKin_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_messages__srv__InvKin_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_messages__srv__InvKin_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
custom_messages__srv__InvKin_Response__init(custom_messages__srv__InvKin_Response * msg)
{
  if (!msg) {
    return false;
  }
  // q_1
  // q_2
  // q_3
  // q_4
  return true;
}

void
custom_messages__srv__InvKin_Response__fini(custom_messages__srv__InvKin_Response * msg)
{
  if (!msg) {
    return;
  }
  // q_1
  // q_2
  // q_3
  // q_4
}

bool
custom_messages__srv__InvKin_Response__are_equal(const custom_messages__srv__InvKin_Response * lhs, const custom_messages__srv__InvKin_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // q_1
  if (lhs->q_1 != rhs->q_1) {
    return false;
  }
  // q_2
  if (lhs->q_2 != rhs->q_2) {
    return false;
  }
  // q_3
  if (lhs->q_3 != rhs->q_3) {
    return false;
  }
  // q_4
  if (lhs->q_4 != rhs->q_4) {
    return false;
  }
  return true;
}

bool
custom_messages__srv__InvKin_Response__copy(
  const custom_messages__srv__InvKin_Response * input,
  custom_messages__srv__InvKin_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // q_1
  output->q_1 = input->q_1;
  // q_2
  output->q_2 = input->q_2;
  // q_3
  output->q_3 = input->q_3;
  // q_4
  output->q_4 = input->q_4;
  return true;
}

custom_messages__srv__InvKin_Response *
custom_messages__srv__InvKin_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__srv__InvKin_Response * msg = (custom_messages__srv__InvKin_Response *)allocator.allocate(sizeof(custom_messages__srv__InvKin_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_messages__srv__InvKin_Response));
  bool success = custom_messages__srv__InvKin_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_messages__srv__InvKin_Response__destroy(custom_messages__srv__InvKin_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_messages__srv__InvKin_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_messages__srv__InvKin_Response__Sequence__init(custom_messages__srv__InvKin_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__srv__InvKin_Response * data = NULL;

  if (size) {
    data = (custom_messages__srv__InvKin_Response *)allocator.zero_allocate(size, sizeof(custom_messages__srv__InvKin_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_messages__srv__InvKin_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_messages__srv__InvKin_Response__fini(&data[i - 1]);
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
custom_messages__srv__InvKin_Response__Sequence__fini(custom_messages__srv__InvKin_Response__Sequence * array)
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
      custom_messages__srv__InvKin_Response__fini(&array->data[i]);
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

custom_messages__srv__InvKin_Response__Sequence *
custom_messages__srv__InvKin_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__srv__InvKin_Response__Sequence * array = (custom_messages__srv__InvKin_Response__Sequence *)allocator.allocate(sizeof(custom_messages__srv__InvKin_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_messages__srv__InvKin_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_messages__srv__InvKin_Response__Sequence__destroy(custom_messages__srv__InvKin_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_messages__srv__InvKin_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_messages__srv__InvKin_Response__Sequence__are_equal(const custom_messages__srv__InvKin_Response__Sequence * lhs, const custom_messages__srv__InvKin_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_messages__srv__InvKin_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_messages__srv__InvKin_Response__Sequence__copy(
  const custom_messages__srv__InvKin_Response__Sequence * input,
  custom_messages__srv__InvKin_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_messages__srv__InvKin_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_messages__srv__InvKin_Response * data =
      (custom_messages__srv__InvKin_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_messages__srv__InvKin_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_messages__srv__InvKin_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_messages__srv__InvKin_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
