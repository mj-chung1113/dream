// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_map_msgs:msg/LaneletMapCellMetaData.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/msg/detail/lanelet_map_cell_meta_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_map_msgs/msg/detail/lanelet_map_cell_meta_data__struct.hpp"

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

namespace autoware_map_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_map_msgs
cdr_serialize(
  const autoware_map_msgs::msg::LaneletMapCellMetaData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cell_id
  cdr << ros_message.cell_id;
  // Member: min_x
  cdr << ros_message.min_x;
  // Member: max_x
  cdr << ros_message.max_x;
  // Member: min_y
  cdr << ros_message.min_y;
  // Member: max_y
  cdr << ros_message.max_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_map_msgs::msg::LaneletMapCellMetaData & ros_message)
{
  // Member: cell_id
  cdr >> ros_message.cell_id;

  // Member: min_x
  cdr >> ros_message.min_x;

  // Member: max_x
  cdr >> ros_message.max_x;

  // Member: min_y
  cdr >> ros_message.min_y;

  // Member: max_y
  cdr >> ros_message.max_y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_map_msgs
get_serialized_size(
  const autoware_map_msgs::msg::LaneletMapCellMetaData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cell_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.cell_id.size() + 1);
  // Member: min_x
  {
    size_t item_size = sizeof(ros_message.min_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_x
  {
    size_t item_size = sizeof(ros_message.max_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_y
  {
    size_t item_size = sizeof(ros_message.min_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_y
  {
    size_t item_size = sizeof(ros_message.max_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_map_msgs
max_serialized_size_LaneletMapCellMetaData(
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


  // Member: cell_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: min_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autoware_map_msgs::msg::LaneletMapCellMetaData;
    is_plain =
      (
      offsetof(DataType, max_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LaneletMapCellMetaData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_map_msgs::msg::LaneletMapCellMetaData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneletMapCellMetaData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_map_msgs::msg::LaneletMapCellMetaData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneletMapCellMetaData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_map_msgs::msg::LaneletMapCellMetaData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneletMapCellMetaData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LaneletMapCellMetaData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LaneletMapCellMetaData__callbacks = {
  "autoware_map_msgs::msg",
  "LaneletMapCellMetaData",
  _LaneletMapCellMetaData__cdr_serialize,
  _LaneletMapCellMetaData__cdr_deserialize,
  _LaneletMapCellMetaData__get_serialized_size,
  _LaneletMapCellMetaData__max_serialized_size
};

static rosidl_message_type_support_t _LaneletMapCellMetaData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneletMapCellMetaData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_map_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_map_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_map_msgs::msg::LaneletMapCellMetaData>()
{
  return &autoware_map_msgs::msg::typesupport_fastrtps_cpp::_LaneletMapCellMetaData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_map_msgs, msg, LaneletMapCellMetaData)() {
  return &autoware_map_msgs::msg::typesupport_fastrtps_cpp::_LaneletMapCellMetaData__handle;
}

#ifdef __cplusplus
}
#endif
