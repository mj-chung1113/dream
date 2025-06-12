// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_v2x_msgs:msg/VirtualGateCommand.idl
// generated code does not contain a copyright notice
#include "autoware_v2x_msgs/msg/detail/virtual_gate_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `areas`
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_command__functions.h"

bool
autoware_v2x_msgs__msg__VirtualGateCommand__init(autoware_v2x_msgs__msg__VirtualGateCommand * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_v2x_msgs__msg__VirtualGateCommand__fini(msg);
    return false;
  }
  // areas
  if (!autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__init(&msg->areas, 0)) {
    autoware_v2x_msgs__msg__VirtualGateCommand__fini(msg);
    return false;
  }
  return true;
}

void
autoware_v2x_msgs__msg__VirtualGateCommand__fini(autoware_v2x_msgs__msg__VirtualGateCommand * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // areas
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__fini(&msg->areas);
}

bool
autoware_v2x_msgs__msg__VirtualGateCommand__are_equal(const autoware_v2x_msgs__msg__VirtualGateCommand * lhs, const autoware_v2x_msgs__msg__VirtualGateCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // areas
  if (!autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__are_equal(
      &(lhs->areas), &(rhs->areas)))
  {
    return false;
  }
  return true;
}

bool
autoware_v2x_msgs__msg__VirtualGateCommand__copy(
  const autoware_v2x_msgs__msg__VirtualGateCommand * input,
  autoware_v2x_msgs__msg__VirtualGateCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // areas
  if (!autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__copy(
      &(input->areas), &(output->areas)))
  {
    return false;
  }
  return true;
}

autoware_v2x_msgs__msg__VirtualGateCommand *
autoware_v2x_msgs__msg__VirtualGateCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_v2x_msgs__msg__VirtualGateCommand * msg = (autoware_v2x_msgs__msg__VirtualGateCommand *)allocator.allocate(sizeof(autoware_v2x_msgs__msg__VirtualGateCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_v2x_msgs__msg__VirtualGateCommand));
  bool success = autoware_v2x_msgs__msg__VirtualGateCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_v2x_msgs__msg__VirtualGateCommand__destroy(autoware_v2x_msgs__msg__VirtualGateCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_v2x_msgs__msg__VirtualGateCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_v2x_msgs__msg__VirtualGateCommand__Sequence__init(autoware_v2x_msgs__msg__VirtualGateCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_v2x_msgs__msg__VirtualGateCommand * data = NULL;

  if (size) {
    data = (autoware_v2x_msgs__msg__VirtualGateCommand *)allocator.zero_allocate(size, sizeof(autoware_v2x_msgs__msg__VirtualGateCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_v2x_msgs__msg__VirtualGateCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_v2x_msgs__msg__VirtualGateCommand__fini(&data[i - 1]);
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
autoware_v2x_msgs__msg__VirtualGateCommand__Sequence__fini(autoware_v2x_msgs__msg__VirtualGateCommand__Sequence * array)
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
      autoware_v2x_msgs__msg__VirtualGateCommand__fini(&array->data[i]);
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

autoware_v2x_msgs__msg__VirtualGateCommand__Sequence *
autoware_v2x_msgs__msg__VirtualGateCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_v2x_msgs__msg__VirtualGateCommand__Sequence * array = (autoware_v2x_msgs__msg__VirtualGateCommand__Sequence *)allocator.allocate(sizeof(autoware_v2x_msgs__msg__VirtualGateCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_v2x_msgs__msg__VirtualGateCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_v2x_msgs__msg__VirtualGateCommand__Sequence__destroy(autoware_v2x_msgs__msg__VirtualGateCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_v2x_msgs__msg__VirtualGateCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_v2x_msgs__msg__VirtualGateCommand__Sequence__are_equal(const autoware_v2x_msgs__msg__VirtualGateCommand__Sequence * lhs, const autoware_v2x_msgs__msg__VirtualGateCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_v2x_msgs__msg__VirtualGateCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_v2x_msgs__msg__VirtualGateCommand__Sequence__copy(
  const autoware_v2x_msgs__msg__VirtualGateCommand__Sequence * input,
  autoware_v2x_msgs__msg__VirtualGateCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_v2x_msgs__msg__VirtualGateCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_v2x_msgs__msg__VirtualGateCommand * data =
      (autoware_v2x_msgs__msg__VirtualGateCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_v2x_msgs__msg__VirtualGateCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_v2x_msgs__msg__VirtualGateCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_v2x_msgs__msg__VirtualGateCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
