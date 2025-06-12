// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_v2x_msgs:msg/VirtualGateStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_STATUS__STRUCT_H_
#define AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'areas'
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_status__struct.h"

/// Struct defined in msg/VirtualGateStatus in the package autoware_v2x_msgs.
typedef struct autoware_v2x_msgs__msg__VirtualGateStatus
{
  autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence areas;
} autoware_v2x_msgs__msg__VirtualGateStatus;

// Struct for a sequence of autoware_v2x_msgs__msg__VirtualGateStatus.
typedef struct autoware_v2x_msgs__msg__VirtualGateStatus__Sequence
{
  autoware_v2x_msgs__msg__VirtualGateStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_v2x_msgs__msg__VirtualGateStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_STATUS__STRUCT_H_
