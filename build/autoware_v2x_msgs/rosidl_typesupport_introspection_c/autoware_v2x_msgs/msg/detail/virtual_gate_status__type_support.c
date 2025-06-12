// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_v2x_msgs:msg/VirtualGateStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_v2x_msgs/msg/detail/virtual_gate_status__rosidl_typesupport_introspection_c.h"
#include "autoware_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_v2x_msgs/msg/detail/virtual_gate_status__functions.h"
#include "autoware_v2x_msgs/msg/detail/virtual_gate_status__struct.h"


// Include directives for member types
// Member `areas`
#include "autoware_v2x_msgs/msg/virtual_gate_area_status.h"
// Member `areas`
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_v2x_msgs__msg__VirtualGateStatus__init(message_memory);
}

void autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_fini_function(void * message_memory)
{
  autoware_v2x_msgs__msg__VirtualGateStatus__fini(message_memory);
}

size_t autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__size_function__VirtualGateStatus__areas(
  const void * untyped_member)
{
  const autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence * member =
    (const autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__get_const_function__VirtualGateStatus__areas(
  const void * untyped_member, size_t index)
{
  const autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence * member =
    (const autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__get_function__VirtualGateStatus__areas(
  void * untyped_member, size_t index)
{
  autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence * member =
    (autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__fetch_function__VirtualGateStatus__areas(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_v2x_msgs__msg__VirtualGateAreaStatus * item =
    ((const autoware_v2x_msgs__msg__VirtualGateAreaStatus *)
    autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__get_const_function__VirtualGateStatus__areas(untyped_member, index));
  autoware_v2x_msgs__msg__VirtualGateAreaStatus * value =
    (autoware_v2x_msgs__msg__VirtualGateAreaStatus *)(untyped_value);
  *value = *item;
}

void autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__assign_function__VirtualGateStatus__areas(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_v2x_msgs__msg__VirtualGateAreaStatus * item =
    ((autoware_v2x_msgs__msg__VirtualGateAreaStatus *)
    autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__get_function__VirtualGateStatus__areas(untyped_member, index));
  const autoware_v2x_msgs__msg__VirtualGateAreaStatus * value =
    (const autoware_v2x_msgs__msg__VirtualGateAreaStatus *)(untyped_value);
  *item = *value;
}

bool autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__resize_function__VirtualGateStatus__areas(
  void * untyped_member, size_t size)
{
  autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence * member =
    (autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence *)(untyped_member);
  autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__fini(member);
  return autoware_v2x_msgs__msg__VirtualGateAreaStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_message_member_array[1] = {
  {
    "areas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs__msg__VirtualGateStatus, areas),  // bytes offset in struct
    NULL,  // default value
    autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__size_function__VirtualGateStatus__areas,  // size() function pointer
    autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__get_const_function__VirtualGateStatus__areas,  // get_const(index) function pointer
    autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__get_function__VirtualGateStatus__areas,  // get(index) function pointer
    autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__fetch_function__VirtualGateStatus__areas,  // fetch(index, &value) function pointer
    autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__assign_function__VirtualGateStatus__areas,  // assign(index, value) function pointer
    autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__resize_function__VirtualGateStatus__areas  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_message_members = {
  "autoware_v2x_msgs__msg",  // message namespace
  "VirtualGateStatus",  // message name
  1,  // number of fields
  sizeof(autoware_v2x_msgs__msg__VirtualGateStatus),
  autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_message_member_array,  // message members
  autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_message_type_support_handle = {
  0,
  &autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_v2x_msgs, msg, VirtualGateStatus)() {
  autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_v2x_msgs, msg, VirtualGateAreaStatus)();
  if (!autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_message_type_support_handle.typesupport_identifier) {
    autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_v2x_msgs__msg__VirtualGateStatus__rosidl_typesupport_introspection_c__VirtualGateStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
