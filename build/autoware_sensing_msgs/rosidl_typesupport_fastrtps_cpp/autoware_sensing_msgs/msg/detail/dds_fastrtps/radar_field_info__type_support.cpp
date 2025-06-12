// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_sensing_msgs:msg/RadarFieldInfo.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/radar_field_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_sensing_msgs/msg/detail/radar_field_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::String &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::String &);
size_t get_serialized_size(
  const std_msgs::msg::String &,
  size_t current_alignment);
size_t
max_serialized_size_String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace autoware_sensing_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
cdr_serialize(
  const autoware_sensing_msgs::msg::RadarFieldInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: field_name
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.field_name,
    cdr);
  // Member: min_value_available
  cdr << (ros_message.min_value_available ? true : false);
  // Member: max_value_available
  cdr << (ros_message.max_value_available ? true : false);
  // Member: resolution_available
  cdr << (ros_message.resolution_available ? true : false);
  // Member: min_value
  cdr << ros_message.min_value;
  // Member: max_value
  cdr << ros_message.max_value;
  // Member: resolution
  cdr << ros_message.resolution;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_sensing_msgs::msg::RadarFieldInfo & ros_message)
{
  // Member: field_name
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.field_name);

  // Member: min_value_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.min_value_available = tmp ? true : false;
  }

  // Member: max_value_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.max_value_available = tmp ? true : false;
  }

  // Member: resolution_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.resolution_available = tmp ? true : false;
  }

  // Member: min_value
  cdr >> ros_message.min_value;

  // Member: max_value
  cdr >> ros_message.max_value;

  // Member: resolution
  cdr >> ros_message.resolution;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
get_serialized_size(
  const autoware_sensing_msgs::msg::RadarFieldInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: field_name

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.field_name, current_alignment);
  // Member: min_value_available
  {
    size_t item_size = sizeof(ros_message.min_value_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_value_available
  {
    size_t item_size = sizeof(ros_message.max_value_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: resolution_available
  {
    size_t item_size = sizeof(ros_message.resolution_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_value
  {
    size_t item_size = sizeof(ros_message.min_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_value
  {
    size_t item_size = sizeof(ros_message.max_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: resolution
  {
    size_t item_size = sizeof(ros_message.resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
max_serialized_size_RadarFieldInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: field_name
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: min_value_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_value_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: resolution_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: min_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: resolution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autoware_sensing_msgs::msg::RadarFieldInfo;
    is_plain =
      (
      offsetof(DataType, resolution) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RadarFieldInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_sensing_msgs::msg::RadarFieldInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RadarFieldInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_sensing_msgs::msg::RadarFieldInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RadarFieldInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_sensing_msgs::msg::RadarFieldInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RadarFieldInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RadarFieldInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RadarFieldInfo__callbacks = {
  "autoware_sensing_msgs::msg",
  "RadarFieldInfo",
  _RadarFieldInfo__cdr_serialize,
  _RadarFieldInfo__cdr_deserialize,
  _RadarFieldInfo__get_serialized_size,
  _RadarFieldInfo__max_serialized_size
};

static rosidl_message_type_support_t _RadarFieldInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RadarFieldInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_sensing_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_sensing_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_sensing_msgs::msg::RadarFieldInfo>()
{
  return &autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::_RadarFieldInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_sensing_msgs, msg, RadarFieldInfo)() {
  return &autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::_RadarFieldInfo__handle;
}

#ifdef __cplusplus
}
#endif
