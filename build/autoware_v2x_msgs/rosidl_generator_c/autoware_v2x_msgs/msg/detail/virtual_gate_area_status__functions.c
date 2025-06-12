// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_v2x_msgs:msg/VirtualGateAreaStatus.idl
// generated code does not contain a copyright notice
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
// Member `expected_time_arrival`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `area_id`
// Member `gate_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_v2x_msgs__msg__VirtualGateAreaStatus__init(autoware_v2x_msgs__msg__VirtualGateAreaStatus * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_v2x_msgs__msg__VirtualGateAreaStatus__fini(msg);
    return false;
  }
  // status
  // sequence_id
  // area_id
  if (!rosidl_runtime_c__String__init(&msg->area_id)) {
    autoware_v2x_msgs__msg__VirtualGateAreaStatus__fini(msg);
    return false;
  }
  // gate_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->gate_ids, 0)) {
    autoware_v2x_msgs__msg__VirtualGateAreaStatus__fini(msg);
    return false;
  }
  // expected_time_arrival
  if (!builtin_interfaces__msg__Time__Sequence__init(&msg->expected_time_arrival, 0)) {
    autoware_v2x_msgs__msg__VirtualGateAreaStatus__fini(msg);
    return false;
  }
  return true;
}

void
autoware_v2x_msgs__msg__VirtualGateAreaStatus__fini(autoware_v2x_msgs__msg__VirtualGateAreaStatus * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // status
  // sequence_id
  // area_id
  rosidl_runtime_c__String__fini(&msg->area_id);
  // gate_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->gate_ids);
  // expected_time_arrival
  builtin_interfaces__msg__Time__Sequence__fini(&msg->expected_time_arrival);
}

bool
autoware_v2x_msgs__msg__VirtualGateAreaStatus__are_equal(const autoware_v2x_msgs__msg__VirtualGateAreaStatus * lhs, const autoware_v2x_msgs__msg__VirtualGateAreaStatus * rhs)
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
  // status
  if (lhs->status != rhs->status) {
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
autoware_v2x_msgs__msg__VirtualGateAreaStatus__copy(
  const autoware_v2x_msgs__msg__VirtualGateAreaStatus * input,
  autoware_v2x_msgs__msg__VirtualGateAreaStatus * output)
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
  // status
  output->status = input->status;
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

autoware_v2x_msgs__msg__VirtualGateAreaStatus *
autoware_v2x_msgs__msg__VirtualGateAreaStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_v2x_msgs__msg__VirtualGateAreaStatus * msg = (autoware_v2x_msgs__msg__VirtualGateAreaStatus *)allocator.allocate(sizeof(autoware_v2x_msgs__msg__VirtualGateAreaStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_v2x_msgs__msg__VirtualGateAreaStatus));
  bool success = autoware_v2x_msgs__msg__VirtualGateAreaStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_v2x_msgs__msg__VirtualGateAreaStatus__destroy(autoware_v2x_msgs__msg__VirtualGateAreaStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_v2x_msgs__msg__VirtualGateAreaStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__init(autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_v2x_msgs__msg__VirtualGateAreaStatus * data = NULL;

  if (size) {
    data = (autoware_v2x_msgs__msg__VirtualGateAreaStatus *)allocator.zero_allocate(size, sizeof(autoware_v2x_msgs__msg__VirtualGateAreaStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_v2x_msgs__msg__VirtualGateAreaStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_v2x_msgs__msg__VirtualGateAreaStatus__fini(&data[i - 1]);
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
autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__fini(autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence * array)
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
      autoware_v2x_msgs__msg__VirtualGateAreaStatus__fini(&array->data[i]);
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

autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence *
autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence * array = (autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence *)allocator.allocate(sizeof(autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__destroy(autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__are_equal(const autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence * lhs, const autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_v2x_msgs__msg__VirtualGateAreaStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__copy(
  const autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence * input,
  autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_v2x_msgs__msg__VirtualGateAreaStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_v2x_msgs__msg__VirtualGateAreaStatus * data =
      (autoware_v2x_msgs__msg__VirtualGateAreaStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_v2x_msgs__msg__VirtualGateAreaStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_v2x_msgs__msg__VirtualGateAreaStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_v2x_msgs__msg__VirtualGateAreaStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
