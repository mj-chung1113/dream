// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_v2x_msgs:msg/VirtualGateStatus.idl
// generated code does not contain a copyright notice
#include "autoware_v2x_msgs/msg/detail/virtual_gate_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `areas`
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_status__functions.h"

bool
autoware_v2x_msgs__msg__VirtualGateStatus__init(autoware_v2x_msgs__msg__VirtualGateStatus * msg)
{
  if (!msg) {
    return false;
  }
  // areas
  if (!autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__init(&msg->areas, 0)) {
    autoware_v2x_msgs__msg__VirtualGateStatus__fini(msg);
    return false;
  }
  return true;
}

void
autoware_v2x_msgs__msg__VirtualGateStatus__fini(autoware_v2x_msgs__msg__VirtualGateStatus * msg)
{
  if (!msg) {
    return;
  }
  // areas
  autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__fini(&msg->areas);
}

bool
autoware_v2x_msgs__msg__VirtualGateStatus__are_equal(const autoware_v2x_msgs__msg__VirtualGateStatus * lhs, const autoware_v2x_msgs__msg__VirtualGateStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // areas
  if (!autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__are_equal(
      &(lhs->areas), &(rhs->areas)))
  {
    return false;
  }
  return true;
}

bool
autoware_v2x_msgs__msg__VirtualGateStatus__copy(
  const autoware_v2x_msgs__msg__VirtualGateStatus * input,
  autoware_v2x_msgs__msg__VirtualGateStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // areas
  if (!autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__copy(
      &(input->areas), &(output->areas)))
  {
    return false;
  }
  return true;
}

autoware_v2x_msgs__msg__VirtualGateStatus *
autoware_v2x_msgs__msg__VirtualGateStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_v2x_msgs__msg__VirtualGateStatus * msg = (autoware_v2x_msgs__msg__VirtualGateStatus *)allocator.allocate(sizeof(autoware_v2x_msgs__msg__VirtualGateStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_v2x_msgs__msg__VirtualGateStatus));
  bool success = autoware_v2x_msgs__msg__VirtualGateStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_v2x_msgs__msg__VirtualGateStatus__destroy(autoware_v2x_msgs__msg__VirtualGateStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_v2x_msgs__msg__VirtualGateStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_v2x_msgs__msg__VirtualGateStatus__Sequence__init(autoware_v2x_msgs__msg__VirtualGateStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_v2x_msgs__msg__VirtualGateStatus * data = NULL;

  if (size) {
    data = (autoware_v2x_msgs__msg__VirtualGateStatus *)allocator.zero_allocate(size, sizeof(autoware_v2x_msgs__msg__VirtualGateStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_v2x_msgs__msg__VirtualGateStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_v2x_msgs__msg__VirtualGateStatus__fini(&data[i - 1]);
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
autoware_v2x_msgs__msg__VirtualGateStatus__Sequence__fini(autoware_v2x_msgs__msg__VirtualGateStatus__Sequence * array)
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
      autoware_v2x_msgs__msg__VirtualGateStatus__fini(&array->data[i]);
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

autoware_v2x_msgs__msg__VirtualGateStatus__Sequence *
autoware_v2x_msgs__msg__VirtualGateStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_v2x_msgs__msg__VirtualGateStatus__Sequence * array = (autoware_v2x_msgs__msg__VirtualGateStatus__Sequence *)allocator.allocate(sizeof(autoware_v2x_msgs__msg__VirtualGateStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_v2x_msgs__msg__VirtualGateStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_v2x_msgs__msg__VirtualGateStatus__Sequence__destroy(autoware_v2x_msgs__msg__VirtualGateStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_v2x_msgs__msg__VirtualGateStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_v2x_msgs__msg__VirtualGateStatus__Sequence__are_equal(const autoware_v2x_msgs__msg__VirtualGateStatus__Sequence * lhs, const autoware_v2x_msgs__msg__VirtualGateStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_v2x_msgs__msg__VirtualGateStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_v2x_msgs__msg__VirtualGateStatus__Sequence__copy(
  const autoware_v2x_msgs__msg__VirtualGateStatus__Sequence * input,
  autoware_v2x_msgs__msg__VirtualGateStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_v2x_msgs__msg__VirtualGateStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_v2x_msgs__msg__VirtualGateStatus * data =
      (autoware_v2x_msgs__msg__VirtualGateStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_v2x_msgs__msg__VirtualGateStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_v2x_msgs__msg__VirtualGateStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_v2x_msgs__msg__VirtualGateStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
