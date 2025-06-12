// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_v2x_msgs:msg/VirtualGateAreaCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_command__rosidl_typesupport_introspection_c.h"
#include "autoware_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_command__functions.h"
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_command__struct.h"


// Include directives for member types
// Member `area_id`
// Member `gate_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `expected_time_arrival`
#include "builtin_interfaces/msg/time.h"
// Member `expected_time_arrival`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__init(message_memory);
}

void autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_fini_function(void * message_memory)
{
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__fini(message_memory);
}

size_t autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__size_function__VirtualGateAreaCommand__gate_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__get_const_function__VirtualGateAreaCommand__gate_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__get_function__VirtualGateAreaCommand__gate_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__fetch_function__VirtualGateAreaCommand__gate_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__get_const_function__VirtualGateAreaCommand__gate_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__assign_function__VirtualGateAreaCommand__gate_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__get_function__VirtualGateAreaCommand__gate_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__resize_function__VirtualGateAreaCommand__gate_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__size_function__VirtualGateAreaCommand__expected_time_arrival(
  const void * untyped_member)
{
  const builtin_interfaces__msg__Time__Sequence * member =
    (const builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__get_const_function__VirtualGateAreaCommand__expected_time_arrival(
  const void * untyped_member, size_t index)
{
  const builtin_interfaces__msg__Time__Sequence * member =
    (const builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__get_function__VirtualGateAreaCommand__expected_time_arrival(
  void * untyped_member, size_t index)
{
  builtin_interfaces__msg__Time__Sequence * member =
    (builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__fetch_function__VirtualGateAreaCommand__expected_time_arrival(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const builtin_interfaces__msg__Time * item =
    ((const builtin_interfaces__msg__Time *)
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__get_const_function__VirtualGateAreaCommand__expected_time_arrival(untyped_member, index));
  builtin_interfaces__msg__Time * value =
    (builtin_interfaces__msg__Time *)(untyped_value);
  *value = *item;
}

void autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__assign_function__VirtualGateAreaCommand__expected_time_arrival(
  void * untyped_member, size_t index, const void * untyped_value)
{
  builtin_interfaces__msg__Time * item =
    ((builtin_interfaces__msg__Time *)
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__get_function__VirtualGateAreaCommand__expected_time_arrival(untyped_member, index));
  const builtin_interfaces__msg__Time * value =
    (const builtin_interfaces__msg__Time *)(untyped_value);
  *item = *value;
}

bool autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__resize_function__VirtualGateAreaCommand__expected_time_arrival(
  void * untyped_member, size_t size)
{
  builtin_interfaces__msg__Time__Sequence * member =
    (builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  builtin_interfaces__msg__Time__Sequence__fini(member);
  return builtin_interfaces__msg__Time__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_message_member_array[5] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs__msg__VirtualGateAreaCommand, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs__msg__VirtualGateAreaCommand, sequence_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs__msg__VirtualGateAreaCommand, area_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gate_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs__msg__VirtualGateAreaCommand, gate_ids),  // bytes offset in struct
    NULL,  // default value
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__size_function__VirtualGateAreaCommand__gate_ids,  // size() function pointer
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__get_const_function__VirtualGateAreaCommand__gate_ids,  // get_const(index) function pointer
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__get_function__VirtualGateAreaCommand__gate_ids,  // get(index) function pointer
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__fetch_function__VirtualGateAreaCommand__gate_ids,  // fetch(index, &value) function pointer
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__assign_function__VirtualGateAreaCommand__gate_ids,  // assign(index, value) function pointer
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__resize_function__VirtualGateAreaCommand__gate_ids  // resize(index) function pointer
  },
  {
    "expected_time_arrival",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(autoware_v2x_msgs__msg__VirtualGateAreaCommand, expected_time_arrival),  // bytes offset in struct
    NULL,  // default value
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__size_function__VirtualGateAreaCommand__expected_time_arrival,  // size() function pointer
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__get_const_function__VirtualGateAreaCommand__expected_time_arrival,  // get_const(index) function pointer
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__get_function__VirtualGateAreaCommand__expected_time_arrival,  // get(index) function pointer
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__fetch_function__VirtualGateAreaCommand__expected_time_arrival,  // fetch(index, &value) function pointer
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__assign_function__VirtualGateAreaCommand__expected_time_arrival,  // assign(index, value) function pointer
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__resize_function__VirtualGateAreaCommand__expected_time_arrival  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_message_members = {
  "autoware_v2x_msgs__msg",  // message namespace
  "VirtualGateAreaCommand",  // message name
  5,  // number of fields
  sizeof(autoware_v2x_msgs__msg__VirtualGateAreaCommand),
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_message_member_array,  // message members
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_message_type_support_handle = {
  0,
  &autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_v2x_msgs, msg, VirtualGateAreaCommand)() {
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_message_type_support_handle.typesupport_identifier) {
    autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_v2x_msgs__msg__VirtualGateAreaCommand__rosidl_typesupport_introspection_c__VirtualGateAreaCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
