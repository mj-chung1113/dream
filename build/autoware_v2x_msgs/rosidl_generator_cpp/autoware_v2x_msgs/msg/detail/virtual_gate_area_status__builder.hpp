// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_v2x_msgs:msg/VirtualGateAreaStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_STATUS__BUILDER_HPP_
#define AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VirtualGateAreaStatus_expected_time_arrival
{
public:
  explicit Init_VirtualGateAreaStatus_expected_time_arrival(::autoware_v2x_msgs::msg::VirtualGateAreaStatus & msg)
  : msg_(msg)
  {}
  ::autoware_v2x_msgs::msg::VirtualGateAreaStatus expected_time_arrival(::autoware_v2x_msgs::msg::VirtualGateAreaStatus::_expected_time_arrival_type arg)
  {
    msg_.expected_time_arrival = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_v2x_msgs::msg::VirtualGateAreaStatus msg_;
};

class Init_VirtualGateAreaStatus_gate_ids
{
public:
  explicit Init_VirtualGateAreaStatus_gate_ids(::autoware_v2x_msgs::msg::VirtualGateAreaStatus & msg)
  : msg_(msg)
  {}
  Init_VirtualGateAreaStatus_expected_time_arrival gate_ids(::autoware_v2x_msgs::msg::VirtualGateAreaStatus::_gate_ids_type arg)
  {
    msg_.gate_ids = std::move(arg);
    return Init_VirtualGateAreaStatus_expected_time_arrival(msg_);
  }

private:
  ::autoware_v2x_msgs::msg::VirtualGateAreaStatus msg_;
};

class Init_VirtualGateAreaStatus_area_id
{
public:
  explicit Init_VirtualGateAreaStatus_area_id(::autoware_v2x_msgs::msg::VirtualGateAreaStatus & msg)
  : msg_(msg)
  {}
  Init_VirtualGateAreaStatus_gate_ids area_id(::autoware_v2x_msgs::msg::VirtualGateAreaStatus::_area_id_type arg)
  {
    msg_.area_id = std::move(arg);
    return Init_VirtualGateAreaStatus_gate_ids(msg_);
  }

private:
  ::autoware_v2x_msgs::msg::VirtualGateAreaStatus msg_;
};

class Init_VirtualGateAreaStatus_sequence_id
{
public:
  explicit Init_VirtualGateAreaStatus_sequence_id(::autoware_v2x_msgs::msg::VirtualGateAreaStatus & msg)
  : msg_(msg)
  {}
  Init_VirtualGateAreaStatus_area_id sequence_id(::autoware_v2x_msgs::msg::VirtualGateAreaStatus::_sequence_id_type arg)
  {
    msg_.sequence_id = std::move(arg);
    return Init_VirtualGateAreaStatus_area_id(msg_);
  }

private:
  ::autoware_v2x_msgs::msg::VirtualGateAreaStatus msg_;
};

class Init_VirtualGateAreaStatus_status
{
public:
  explicit Init_VirtualGateAreaStatus_status(::autoware_v2x_msgs::msg::VirtualGateAreaStatus & msg)
  : msg_(msg)
  {}
  Init_VirtualGateAreaStatus_sequence_id status(::autoware_v2x_msgs::msg::VirtualGateAreaStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_VirtualGateAreaStatus_sequence_id(msg_);
  }

private:
  ::autoware_v2x_msgs::msg::VirtualGateAreaStatus msg_;
};

class Init_VirtualGateAreaStatus_stamp
{
public:
  Init_VirtualGateAreaStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualGateAreaStatus_status stamp(::autoware_v2x_msgs::msg::VirtualGateAreaStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VirtualGateAreaStatus_status(msg_);
  }

private:
  ::autoware_v2x_msgs::msg::VirtualGateAreaStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_v2x_msgs::msg::VirtualGateAreaStatus>()
{
  return autoware_v2x_msgs::msg::builder::Init_VirtualGateAreaStatus_stamp();
}

}  // namespace autoware_v2x_msgs

#endif  // AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_STATUS__BUILDER_HPP_
