// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_v2x_msgs:msg/VirtualGateAreaCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_COMMAND__TRAITS_HPP_
#define AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'expected_time_arrival'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace autoware_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VirtualGateAreaCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: sequence_id
  {
    out << "sequence_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_id, out);
    out << ", ";
  }

  // member: area_id
  {
    out << "area_id: ";
    rosidl_generator_traits::value_to_yaml(msg.area_id, out);
    out << ", ";
  }

  // member: gate_ids
  {
    if (msg.gate_ids.size() == 0) {
      out << "gate_ids: []";
    } else {
      out << "gate_ids: [";
      size_t pending_items = msg.gate_ids.size();
      for (auto item : msg.gate_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: expected_time_arrival
  {
    if (msg.expected_time_arrival.size() == 0) {
      out << "expected_time_arrival: []";
    } else {
      out << "expected_time_arrival: [";
      size_t pending_items = msg.expected_time_arrival.size();
      for (auto item : msg.expected_time_arrival) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VirtualGateAreaCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: sequence_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_id, out);
    out << "\n";
  }

  // member: area_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_id: ";
    rosidl_generator_traits::value_to_yaml(msg.area_id, out);
    out << "\n";
  }

  // member: gate_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gate_ids.size() == 0) {
      out << "gate_ids: []\n";
    } else {
      out << "gate_ids:\n";
      for (auto item : msg.gate_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: expected_time_arrival
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.expected_time_arrival.size() == 0) {
      out << "expected_time_arrival: []\n";
    } else {
      out << "expected_time_arrival:\n";
      for (auto item : msg.expected_time_arrival) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VirtualGateAreaCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace autoware_v2x_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_v2x_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_v2x_msgs::msg::VirtualGateAreaCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_v2x_msgs::msg::VirtualGateAreaCommand & msg)
{
  return autoware_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_v2x_msgs::msg::VirtualGateAreaCommand>()
{
  return "autoware_v2x_msgs::msg::VirtualGateAreaCommand";
}

template<>
inline const char * name<autoware_v2x_msgs::msg::VirtualGateAreaCommand>()
{
  return "autoware_v2x_msgs/msg/VirtualGateAreaCommand";
}

template<>
struct has_fixed_size<autoware_v2x_msgs::msg::VirtualGateAreaCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_v2x_msgs::msg::VirtualGateAreaCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_v2x_msgs::msg::VirtualGateAreaCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_COMMAND__TRAITS_HPP_
