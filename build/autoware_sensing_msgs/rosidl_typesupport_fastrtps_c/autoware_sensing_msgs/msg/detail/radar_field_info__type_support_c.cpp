// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_sensing_msgs:msg/RadarFieldInfo.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/radar_field_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_sensing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_sensing_msgs/msg/detail/radar_field_info__struct.h"
#include "autoware_sensing_msgs/msg/detail/radar_field_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/string__functions.h"  // field_name

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_sensing_msgs
size_t get_serialized_size_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_sensing_msgs
size_t max_serialized_size_std_msgs__msg__String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_sensing_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, String)();


using _RadarFieldInfo__ros_msg_type = autoware_sensing_msgs__msg__RadarFieldInfo;

static bool _RadarFieldInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RadarFieldInfo__ros_msg_type * ros_message = static_cast<const _RadarFieldInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: field_name
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->field_name, cdr))
    {
      return false;
    }
  }

  // Field name: min_value_available
  {
    cdr << (ros_message->min_value_available ? true : false);
  }

  // Field name: max_value_available
  {
    cdr << (ros_message->max_value_available ? true : false);
  }

  // Field name: resolution_available
  {
    cdr << (ros_message->resolution_available ? true : false);
  }

  // Field name: min_value
  {
    cdr << ros_message->min_value;
  }

  // Field name: max_value
  {
    cdr << ros_message->max_value;
  }

  // Field name: resolution
  {
    cdr << ros_message->resolution;
  }

  return true;
}

static bool _RadarFieldInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RadarFieldInfo__ros_msg_type * ros_message = static_cast<_RadarFieldInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: field_name
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->field_name))
    {
      return false;
    }
  }

  // Field name: min_value_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->min_value_available = tmp ? true : false;
  }

  // Field name: max_value_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->max_value_available = tmp ? true : false;
  }

  // Field name: resolution_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->resolution_available = tmp ? true : false;
  }

  // Field name: min_value
  {
    cdr >> ros_message->min_value;
  }

  // Field name: max_value
  {
    cdr >> ros_message->max_value;
  }

  // Field name: resolution
  {
    cdr >> ros_message->resolution;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_sensing_msgs
size_t get_serialized_size_autoware_sensing_msgs__msg__RadarFieldInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RadarFieldInfo__ros_msg_type * ros_message = static_cast<const _RadarFieldInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name field_name

  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->field_name), current_alignment);
  // field.name min_value_available
  {
    size_t item_size = sizeof(ros_message->min_value_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_value_available
  {
    size_t item_size = sizeof(ros_message->max_value_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name resolution_available
  {
    size_t item_size = sizeof(ros_message->resolution_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_value
  {
    size_t item_size = sizeof(ros_message->min_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_value
  {
    size_t item_size = sizeof(ros_message->max_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name resolution
  {
    size_t item_size = sizeof(ros_message->resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RadarFieldInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_sensing_msgs__msg__RadarFieldInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_sensing_msgs
size_t max_serialized_size_autoware_sensing_msgs__msg__RadarFieldInfo(
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

  // member: field_name
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: min_value_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_value_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: resolution_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: min_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: resolution
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
    using DataType = autoware_sensing_msgs__msg__RadarFieldInfo;
    is_plain =
      (
      offsetof(DataType, resolution) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RadarFieldInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_sensing_msgs__msg__RadarFieldInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RadarFieldInfo = {
  "autoware_sensing_msgs::msg",
  "RadarFieldInfo",
  _RadarFieldInfo__cdr_serialize,
  _RadarFieldInfo__cdr_deserialize,
  _RadarFieldInfo__get_serialized_size,
  _RadarFieldInfo__max_serialized_size
};

static rosidl_message_type_support_t _RadarFieldInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RadarFieldInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_sensing_msgs, msg, RadarFieldInfo)() {
  return &_RadarFieldInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
