// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_v2x_msgs:msg/VirtualGateStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_STATUS__BUILDER_HPP_
#define AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_v2x_msgs/msg/detail/virtual_gate_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VirtualGateStatus_areas
{
public:
  Init_VirtualGateStatus_areas()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_v2x_msgs::msg::VirtualGateStatus areas(::autoware_v2x_msgs::msg::VirtualGateStatus::_areas_type arg)
  {
    msg_.areas = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_v2x_msgs::msg::VirtualGateStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_v2x_msgs::msg::VirtualGateStatus>()
{
  return autoware_v2x_msgs::msg::builder::Init_VirtualGateStatus_areas();
}

}  // namespace autoware_v2x_msgs

#endif  // AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_STATUS__BUILDER_HPP_
