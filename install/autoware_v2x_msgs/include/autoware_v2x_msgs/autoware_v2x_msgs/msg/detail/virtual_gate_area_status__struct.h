// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_v2x_msgs:msg/VirtualGateAreaStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_STATUS__STRUCT_H_
#define AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESERVED'.
enum
{
  autoware_v2x_msgs__msg__VirtualGateAreaStatus__RESERVED = 1
};

/// Constant 'ACQUIRED'.
enum
{
  autoware_v2x_msgs__msg__VirtualGateAreaStatus__ACQUIRED = 2
};

/// Constant 'RELEASED'.
enum
{
  autoware_v2x_msgs__msg__VirtualGateAreaStatus__RELEASED = 3
};

// Include directives for member types
// Member 'stamp'
// Member 'expected_time_arrival'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'area_id'
// Member 'gate_ids'
#include "rosidl_runtime_c/string.h"

// constants for array fields with an upper bound
// expected_time_arrival
enum
{
  autoware_v2x_msgs__msg__VirtualGateAreaStatus__expected_time_arrival__MAX_SIZE = 1
};

/// Struct defined in msg/VirtualGateAreaStatus in the package autoware_v2x_msgs.
/**
  * constants for status
 */
typedef struct autoware_v2x_msgs__msg__VirtualGateAreaStatus
{
  /// variables for lock
  builtin_interfaces__msg__Time stamp;
  uint16_t status;
  /// Used to check correspondence with commands.
  uint16_t sequence_id;
  /// Target area ID.
  rosidl_runtime_c__String area_id;
  /// Entry and exit gate ID.
  rosidl_runtime_c__String__Sequence gate_ids;
  /// variables for scheduling
  builtin_interfaces__msg__Time__Sequence expected_time_arrival;
} autoware_v2x_msgs__msg__VirtualGateAreaStatus;

// Struct for a sequence of autoware_v2x_msgs__msg__VirtualGateAreaStatus.
typedef struct autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence
{
  autoware_v2x_msgs__msg__VirtualGateAreaStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_STATUS__STRUCT_H_
