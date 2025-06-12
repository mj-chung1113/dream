// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_v2x_msgs:msg/VirtualGateCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_COMMAND__TRAITS_HPP_
#define AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_v2x_msgs/msg/detail/virtual_gate_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'areas'
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_command__traits.hpp"

namespace autoware_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VirtualGateCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: areas
  {
    if (msg.areas.size() == 0) {
      out << "areas: []";
    } else {
      out << "areas: [";
      size_t pending_items = msg.areas.size();
      for (auto item : msg.areas) {
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
  const VirtualGateCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: areas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.areas.size() == 0) {
      out << "areas: []\n";
    } else {
      out << "areas:\n";
      for (auto item : msg.areas) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VirtualGateCommand & msg, bool use_flow_style = false)
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
  const autoware_v2x_msgs::msg::VirtualGateCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_v2x_msgs::msg::VirtualGateCommand & msg)
{
  return autoware_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_v2x_msgs::msg::VirtualGateCommand>()
{
  return "autoware_v2x_msgs::msg::VirtualGateCommand";
}

template<>
inline const char * name<autoware_v2x_msgs::msg::VirtualGateCommand>()
{
  return "autoware_v2x_msgs/msg/VirtualGateCommand";
}

template<>
struct has_fixed_size<autoware_v2x_msgs::msg::VirtualGateCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_v2x_msgs::msg::VirtualGateCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_v2x_msgs::msg::VirtualGateCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_COMMAND__TRAITS_HPP_
