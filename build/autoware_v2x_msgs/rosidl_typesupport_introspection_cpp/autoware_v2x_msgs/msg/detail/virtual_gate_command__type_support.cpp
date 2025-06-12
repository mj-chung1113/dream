// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_v2x_msgs:msg/VirtualGateCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_v2x_msgs/msg/detail/virtual_gate_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_v2x_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VirtualGateCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_v2x_msgs::msg::VirtualGateCommand(_init);
}

void VirtualGateCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_v2x_msgs::msg::VirtualGateCommand *>(message_memory);
  typed_message->~VirtualGateCommand();
}

size_t size_function__VirtualGateCommand__areas(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_v2x_msgs::msg::VirtualGateAreaCommand> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualGateCommand__areas(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_v2x_msgs::msg::VirtualGateAreaCommand> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualGateCommand__areas(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_v2x_msgs::msg::VirtualGateAreaCommand> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualGateCommand__areas(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autoware_v2x_msgs::msg::VirtualGateAreaCommand *>(
    get_const_function__VirtualGateCommand__areas(untyped_member, index));
  auto & value = *reinterpret_cast<autoware_v2x_msgs::msg::VirtualGateAreaCommand *>(untyped_value);
  value = item;
}

void assign_function__VirtualGateCommand__areas(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autoware_v2x_msgs::msg::VirtualGateAreaCommand *>(
    get_function__VirtualGateCommand__areas(untyped_member, index));
  const auto & value = *reinterpret_cast<const autoware_v2x_msgs::msg::VirtualGateAreaCommand *>(untyped_value);
  item = value;
}

void resize_function__VirtualGateCommand__areas(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_v2x_msgs::msg::VirtualGateAreaCommand> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VirtualGateCommand_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs::msg::VirtualGateCommand, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "areas",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_v2x_msgs::msg::VirtualGateAreaCommand>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs::msg::VirtualGateCommand, areas),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualGateCommand__areas,  // size() function pointer
    get_const_function__VirtualGateCommand__areas,  // get_const(index) function pointer
    get_function__VirtualGateCommand__areas,  // get(index) function pointer
    fetch_function__VirtualGateCommand__areas,  // fetch(index, &value) function pointer
    assign_function__VirtualGateCommand__areas,  // assign(index, value) function pointer
    resize_function__VirtualGateCommand__areas  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VirtualGateCommand_message_members = {
  "autoware_v2x_msgs::msg",  // message namespace
  "VirtualGateCommand",  // message name
  2,  // number of fields
  sizeof(autoware_v2x_msgs::msg::VirtualGateCommand),
  VirtualGateCommand_message_member_array,  // message members
  VirtualGateCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  VirtualGateCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VirtualGateCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VirtualGateCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_v2x_msgs::msg::VirtualGateCommand>()
{
  return &::autoware_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::VirtualGateCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_v2x_msgs, msg, VirtualGateCommand)() {
  return &::autoware_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::VirtualGateCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
