// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_v2x_msgs:msg/VirtualGateAreaCommand.idl
// generated code does not contain a copyright notice
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `area_id`
// Member `gate_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `expected_time_arrival`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_v2x_msgs__msg__VirtualGateAreaCommand__init(autoware_v2x_msgs__msg__VirtualGateAreaCommand * msg)
{
  if (!msg) {
    return false;
  }
  // command
  // sequence_id
  // area_id
  if (!rosidl_runtime_c__String__init(&msg->area_id)) {
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__fini(msg);
    return false;
  }
  // gate_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->gate_ids, 0)) {
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__fini(msg);
    return false;
  }
  // expected_time_arrival
  if (!builtin_interfaces__msg__Time__Sequence__init(&msg->expected_time_arrival, 0)) {
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__fini(msg);
    return false;
  }
  return true;
}

void
autoware_v2x_msgs__msg__VirtualGateAreaCommand__fini(autoware_v2x_msgs__msg__VirtualGateAreaCommand * msg)
{
  if (!msg) {
    return;
  }
  // command
  // sequence_id
  // area_id
  rosidl_runtime_c__String__fini(&msg->area_id);
  // gate_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->gate_ids);
  // expected_time_arrival
  builtin_interfaces__msg__Time__Sequence__fini(&msg->expected_time_arrival);
}

bool
autoware_v2x_msgs__msg__VirtualGateAreaCommand__are_equal(const autoware_v2x_msgs__msg__VirtualGateAreaCommand * lhs, const autoware_v2x_msgs__msg__VirtualGateAreaCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  // sequence_id
  if (lhs->sequence_id != rhs->sequence_id) {
    return false;
  }
  // area_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->area_id), &(rhs->area_id)))
  {
    return false;
  }
  // gate_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->gate_ids), &(rhs->gate_ids)))
  {
    return false;
  }
  // expected_time_arrival
  if (!builtin_interfaces__msg__Time__Sequence__are_equal(
      &(lhs->expected_time_arrival), &(rhs->expected_time_arrival)))
  {
    return false;
  }
  return true;
}

bool
autoware_v2x_msgs__msg__VirtualGateAreaCommand__copy(
  const autoware_v2x_msgs__msg__VirtualGateAreaCommand * input,
  autoware_v2x_msgs__msg__VirtualGateAreaCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  output->command = input->command;
  // sequence_id
  output->sequence_id = input->sequence_id;
  // area_id
  if (!rosidl_runtime_c__String__copy(
      &(input->area_id), &(output->area_id)))
  {
    return false;
  }
  // gate_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->gate_ids), &(output->gate_ids)))
  {
    return false;
  }
  // expected_time_arrival
  if (!builtin_interfaces__msg__Time__Sequence__copy(
      &(input->expected_time_arrival), &(output->expected_time_arrival)))
  {
    return false;
  }
  return true;
}

autoware_v2x_msgs__msg__VirtualGateAreaCommand *
autoware_v2x_msgs__msg__VirtualGateAreaCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_v2x_msgs__msg__VirtualGateAreaCommand * msg = (autoware_v2x_msgs__msg__VirtualGateAreaCommand *)allocator.allocate(sizeof(autoware_v2x_msgs__msg__VirtualGateAreaCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_v2x_msgs__msg__VirtualGateAreaCommand));
  bool success = autoware_v2x_msgs__msg__VirtualGateAreaCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_v2x_msgs__msg__VirtualGateAreaCommand__destroy(autoware_v2x_msgs__msg__VirtualGateAreaCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__init(autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_v2x_msgs__msg__VirtualGateAreaCommand * data = NULL;

  if (size) {
    data = (autoware_v2x_msgs__msg__VirtualGateAreaCommand *)allocator.zero_allocate(size, sizeof(autoware_v2x_msgs__msg__VirtualGateAreaCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_v2x_msgs__msg__VirtualGateAreaCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_v2x_msgs__msg__VirtualGateAreaCommand__fini(&data[i - 1]);
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
autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__fini(autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence * array)
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
      autoware_v2x_msgs__msg__VirtualGateAreaCommand__fini(&array->data[i]);
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

autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence *
autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence * array = (autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence *)allocator.allocate(sizeof(autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__destroy(autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__are_equal(const autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence * lhs, const autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_v2x_msgs__msg__VirtualGateAreaCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__copy(
  const autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence * input,
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_v2x_msgs__msg__VirtualGateAreaCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_v2x_msgs__msg__VirtualGateAreaCommand * data =
      (autoware_v2x_msgs__msg__VirtualGateAreaCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_v2x_msgs__msg__VirtualGateAreaCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_v2x_msgs__msg__VirtualGateAreaCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_v2x_msgs__msg__VirtualGateAreaCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
