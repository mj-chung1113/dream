// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_v2x_msgs:msg/VirtualGateCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_v2x_msgs/msg/detail/virtual_gate_command__rosidl_typesupport_introspection_c.h"
#include "autoware_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_v2x_msgs/msg/detail/virtual_gate_command__functions.h"
#include "autoware_v2x_msgs/msg/detail/virtual_gate_command__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `areas`
#include "autoware_v2x_msgs/msg/virtual_gate_area_command.h"
// Member `areas`
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_v2x_msgs__msg__VirtualGateCommand__init(message_memory);
}

void autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_fini_function(void * message_memory)
{
  autoware_v2x_msgs__msg__VirtualGateCommand__fini(message_memory);
}

size_t autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__size_function__VirtualGateCommand__areas(
  const void * untyped_member)
{
  const autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence * member =
    (const autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__get_const_function__VirtualGateCommand__areas(
  const void * untyped_member, size_t index)
{
  const autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence * member =
    (const autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__get_function__VirtualGateCommand__areas(
  void * untyped_member, size_t index)
{
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence * member =
    (autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__fetch_function__VirtualGateCommand__areas(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_v2x_msgs__msg__VirtualGateAreaCommand * item =
    ((const autoware_v2x_msgs__msg__VirtualGateAreaCommand *)
    autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__get_const_function__VirtualGateCommand__areas(untyped_member, index));
  autoware_v2x_msgs__msg__VirtualGateAreaCommand * value =
    (autoware_v2x_msgs__msg__VirtualGateAreaCommand *)(untyped_value);
  *value = *item;
}

void autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__assign_function__VirtualGateCommand__areas(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_v2x_msgs__msg__VirtualGateAreaCommand * item =
    ((autoware_v2x_msgs__msg__VirtualGateAreaCommand *)
    autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__get_function__VirtualGateCommand__areas(untyped_member, index));
  const autoware_v2x_msgs__msg__VirtualGateAreaCommand * value =
    (const autoware_v2x_msgs__msg__VirtualGateAreaCommand *)(untyped_value);
  *item = *value;
}

bool autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__resize_function__VirtualGateCommand__areas(
  void * untyped_member, size_t size)
{
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence * member =
    (autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence *)(untyped_member);
  autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__fini(member);
  return autoware_v2x_msgs__msg__VirtualGateAreaCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs__msg__VirtualGateCommand, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "areas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs__msg__VirtualGateCommand, areas),  // bytes offset in struct
    NULL,  // default value
    autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__size_function__VirtualGateCommand__areas,  // size() function pointer
    autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__get_const_function__VirtualGateCommand__areas,  // get_const(index) function pointer
    autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__get_function__VirtualGateCommand__areas,  // get(index) function pointer
    autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__fetch_function__VirtualGateCommand__areas,  // fetch(index, &value) function pointer
    autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__assign_function__VirtualGateCommand__areas,  // assign(index, value) function pointer
    autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__resize_function__VirtualGateCommand__areas  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_message_members = {
  "autoware_v2x_msgs__msg",  // message namespace
  "VirtualGateCommand",  // message name
  2,  // number of fields
  sizeof(autoware_v2x_msgs__msg__VirtualGateCommand),
  autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_message_member_array,  // message members
  autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_message_type_support_handle = {
  0,
  &autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_v2x_msgs, msg, VirtualGateCommand)() {
  autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_v2x_msgs, msg, VirtualGateAreaCommand)();
  if (!autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_message_type_support_handle.typesupport_identifier) {
    autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_v2x_msgs__msg__VirtualGateCommand__rosidl_typesupport_introspection_c__VirtualGateCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
