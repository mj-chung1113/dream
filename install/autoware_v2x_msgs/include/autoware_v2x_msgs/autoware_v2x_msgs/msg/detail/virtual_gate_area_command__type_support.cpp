// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_v2x_msgs:msg/VirtualGateAreaCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_command__struct.hpp"
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

void VirtualGateAreaCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_v2x_msgs::msg::VirtualGateAreaCommand(_init);
}

void VirtualGateAreaCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_v2x_msgs::msg::VirtualGateAreaCommand *>(message_memory);
  typed_message->~VirtualGateAreaCommand();
}

size_t size_function__VirtualGateAreaCommand__gate_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualGateAreaCommand__gate_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualGateAreaCommand__gate_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualGateAreaCommand__gate_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__VirtualGateAreaCommand__gate_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__VirtualGateAreaCommand__gate_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__VirtualGateAreaCommand__gate_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__VirtualGateAreaCommand__gate_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VirtualGateAreaCommand__expected_time_arrival(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualGateAreaCommand__expected_time_arrival(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualGateAreaCommand__expected_time_arrival(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualGateAreaCommand__expected_time_arrival(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const builtin_interfaces::msg::Time *>(
    get_const_function__VirtualGateAreaCommand__expected_time_arrival(untyped_member, index));
  auto & value = *reinterpret_cast<builtin_interfaces::msg::Time *>(untyped_value);
  value = item;
}

void assign_function__VirtualGateAreaCommand__expected_time_arrival(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<builtin_interfaces::msg::Time *>(
    get_function__VirtualGateAreaCommand__expected_time_arrival(untyped_member, index));
  const auto & value = *reinterpret_cast<const builtin_interfaces::msg::Time *>(untyped_value);
  item = value;
}

void resize_function__VirtualGateAreaCommand__expected_time_arrival(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VirtualGateAreaCommand_message_member_array[5] = {
  {
    "command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs::msg::VirtualGateAreaCommand, command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sequence_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs::msg::VirtualGateAreaCommand, sequence_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "area_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs::msg::VirtualGateAreaCommand, area_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gate_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_v2x_msgs::msg::VirtualGateAreaCommand, gate_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualGateAreaCommand__gate_ids,  // size() function pointer
    get_const_function__VirtualGateAreaCommand__gate_ids,  // get_const(index) function pointer
    get_function__VirtualGateAreaCommand__gate_ids,  // get(index) function pointer
    fetch_function__VirtualGateAreaCommand__gate_ids,  // fetch(index, &value) function pointer
    assign_function__VirtualGateAreaCommand__gate_ids,  // assign(index, value) function pointer
    resize_function__VirtualGateAreaCommand__gate_ids  // resize(index) function pointer
  },
  {
    "expected_time_arrival",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(autoware_v2x_msgs::msg::VirtualGateAreaCommand, expected_time_arrival),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualGateAreaCommand__expected_time_arrival,  // size() function pointer
    get_const_function__VirtualGateAreaCommand__expected_time_arrival,  // get_const(index) function pointer
    get_function__VirtualGateAreaCommand__expected_time_arrival,  // get(index) function pointer
    fetch_function__VirtualGateAreaCommand__expected_time_arrival,  // fetch(index, &value) function pointer
    assign_function__VirtualGateAreaCommand__expected_time_arrival,  // assign(index, value) function pointer
    resize_function__VirtualGateAreaCommand__expected_time_arrival  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VirtualGateAreaCommand_message_members = {
  "autoware_v2x_msgs::msg",  // message namespace
  "VirtualGateAreaCommand",  // message name
  5,  // number of fields
  sizeof(autoware_v2x_msgs::msg::VirtualGateAreaCommand),
  VirtualGateAreaCommand_message_member_array,  // message members
  VirtualGateAreaCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  VirtualGateAreaCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VirtualGateAreaCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VirtualGateAreaCommand_message_members,
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
get_message_type_support_handle<autoware_v2x_msgs::msg::VirtualGateAreaCommand>()
{
  return &::autoware_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::VirtualGateAreaCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_v2x_msgs, msg, VirtualGateAreaCommand)() {
  return &::autoware_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::VirtualGateAreaCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
