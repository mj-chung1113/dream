// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_v2x_msgs:msg/VirtualGateCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_COMMAND__BUILDER_HPP_
#define AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_v2x_msgs/msg/detail/virtual_gate_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VirtualGateCommand_areas
{
public:
  explicit Init_VirtualGateCommand_areas(::autoware_v2x_msgs::msg::VirtualGateCommand & msg)
  : msg_(msg)
  {}
  ::autoware_v2x_msgs::msg::VirtualGateCommand areas(::autoware_v2x_msgs::msg::VirtualGateCommand::_areas_type arg)
  {
    msg_.areas = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_v2x_msgs::msg::VirtualGateCommand msg_;
};

class Init_VirtualGateCommand_stamp
{
public:
  Init_VirtualGateCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualGateCommand_areas stamp(::autoware_v2x_msgs::msg::VirtualGateCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VirtualGateCommand_areas(msg_);
  }

private:
  ::autoware_v2x_msgs::msg::VirtualGateCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_v2x_msgs::msg::VirtualGateCommand>()
{
  return autoware_v2x_msgs::msg::builder::Init_VirtualGateCommand_stamp();
}

}  // namespace autoware_v2x_msgs

#endif  // AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_COMMAND__BUILDER_HPP_
