// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_v2x_msgs:msg/VirtualGateAreaCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_COMMAND__STRUCT_H_
#define AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACQUIRE'.
enum
{
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__ACQUIRE = 1
};

/// Constant 'RELEASE'.
enum
{
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__RELEASE = 2
};

// Include directives for member types
// Member 'area_id'
// Member 'gate_ids'
#include "rosidl_runtime_c/string.h"
// Member 'expected_time_arrival'
#include "builtin_interfaces/msg/detail/time__struct.h"

// constants for array fields with an upper bound
// expected_time_arrival
enum
{
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__expected_time_arrival__MAX_SIZE = 1
};

/// Struct defined in msg/VirtualGateAreaCommand in the package autoware_v2x_msgs.
/**
  * constants for command
 */
typedef struct autoware_v2x_msgs__msg__VirtualGateAreaCommand
{
  /// variables for lock
  uint16_t command;
  /// Used to check correspondence with status messages.
  uint16_t sequence_id;
  /// Target area ID.
  rosidl_runtime_c__String area_id;
  /// Entry and exit gate ID.
  rosidl_runtime_c__String__Sequence gate_ids;
  /// variables for scheduling
  builtin_interfaces__msg__Time__Sequence expected_time_arrival;
} autoware_v2x_msgs__msg__VirtualGateAreaCommand;

// Struct for a sequence of autoware_v2x_msgs__msg__VirtualGateAreaCommand.
typedef struct autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence
{
  autoware_v2x_msgs__msg__VirtualGateAreaCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_COMMAND__STRUCT_H_
