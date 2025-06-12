// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_sensing_msgs:msg/RadarInfo.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/radar_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_sensing_msgs/msg/detail/radar_info__struct.hpp"

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
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
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
bool cdr_serialize(
  const autoware_sensing_msgs::msg::RadarFieldInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_sensing_msgs::msg::RadarFieldInfo &);
size_t get_serialized_size(
  const autoware_sensing_msgs::msg::RadarFieldInfo &,
  size_t current_alignment);
size_t
max_serialized_size_RadarFieldInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_sensing_msgs

// functions for autoware_sensing_msgs::msg::RadarFieldInfo already declared above


namespace autoware_sensing_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
cdr_serialize(
  const autoware_sensing_msgs::msg::RadarInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: object_fields_info
  {
    size_t size = ros_message.object_fields_info.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.object_fields_info[i],
        cdr);
    }
  }
  // Member: detection_fields_info
  {
    size_t size = ros_message.detection_fields_info.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.detection_fields_info[i],
        cdr);
    }
  }
  // Member: available_classes
  {
    cdr << ros_message.available_classes;
  }
  // Member: absolute_dynamics
  cdr << (ros_message.absolute_dynamics ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_sensing_msgs::msg::RadarInfo & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: object_fields_info
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.object_fields_info.resize(size);
    for (size_t i = 0; i < size; i++) {
      autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.object_fields_info[i]);
    }
  }

  // Member: detection_fields_info
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.detection_fields_info.resize(size);
    for (size_t i = 0; i < size; i++) {
      autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.detection_fields_info[i]);
    }
  }

  // Member: available_classes
  {
    cdr >> ros_message.available_classes;
  }

  // Member: absolute_dynamics
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.absolute_dynamics = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
get_serialized_size(
  const autoware_sensing_msgs::msg::RadarInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: object_fields_info
  {
    size_t array_size = ros_message.object_fields_info.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.object_fields_info[index], current_alignment);
    }
  }
  // Member: detection_fields_info
  {
    size_t array_size = ros_message.detection_fields_info.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.detection_fields_info[index], current_alignment);
    }
  }
  // Member: available_classes
  {
    size_t array_size = ros_message.available_classes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.available_classes[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: absolute_dynamics
  {
    size_t item_size = sizeof(ros_message.absolute_dynamics);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
max_serialized_size_RadarInfo(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: object_fields_info
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RadarFieldInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: detection_fields_info
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RadarFieldInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: available_classes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: absolute_dynamics
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autoware_sensing_msgs::msg::RadarInfo;
    is_plain =
      (
      offsetof(DataType, absolute_dynamics) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RadarInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_sensing_msgs::msg::RadarInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RadarInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_sensing_msgs::msg::RadarInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RadarInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_sensing_msgs::msg::RadarInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RadarInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RadarInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RadarInfo__callbacks = {
  "autoware_sensing_msgs::msg",
  "RadarInfo",
  _RadarInfo__cdr_serialize,
  _RadarInfo__cdr_deserialize,
  _RadarInfo__get_serialized_size,
  _RadarInfo__max_serialized_size
};

static rosidl_message_type_support_t _RadarInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RadarInfo__callbacks,
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
get_message_type_support_handle<autoware_sensing_msgs::msg::RadarInfo>()
{
  return &autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::_RadarInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_sensing_msgs, msg, RadarInfo)() {
  return &autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::_RadarInfo__handle;
}

#ifdef __cplusplus
}
#endif
