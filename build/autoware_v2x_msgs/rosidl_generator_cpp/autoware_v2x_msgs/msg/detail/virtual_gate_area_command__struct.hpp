// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_v2x_msgs:msg/VirtualGateAreaCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_COMMAND__STRUCT_HPP_
#define AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'expected_time_arrival'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_v2x_msgs__msg__VirtualGateAreaCommand __attribute__((deprecated))
#else
# define DEPRECATED__autoware_v2x_msgs__msg__VirtualGateAreaCommand __declspec(deprecated)
#endif

namespace autoware_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VirtualGateAreaCommand_
{
  using Type = VirtualGateAreaCommand_<ContainerAllocator>;

  explicit VirtualGateAreaCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->sequence_id = 0;
      this->area_id = "";
    }
  }

  explicit VirtualGateAreaCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : area_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->sequence_id = 0;
      this->area_id = "";
    }
  }

  // field types and members
  using _command_type =
    uint16_t;
  _command_type command;
  using _sequence_id_type =
    uint16_t;
  _sequence_id_type sequence_id;
  using _area_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _area_id_type area_id;
  using _gate_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _gate_ids_type gate_ids;
  using _expected_time_arrival_type =
    rosidl_runtime_cpp::BoundedVector<builtin_interfaces::msg::Time_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<builtin_interfaces::msg::Time_<ContainerAllocator>>>;
  _expected_time_arrival_type expected_time_arrival;

  // setters for named parameter idiom
  Type & set__command(
    const uint16_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__sequence_id(
    const uint16_t & _arg)
  {
    this->sequence_id = _arg;
    return *this;
  }
  Type & set__area_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->area_id = _arg;
    return *this;
  }
  Type & set__gate_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->gate_ids = _arg;
    return *this;
  }
  Type & set__expected_time_arrival(
    const rosidl_runtime_cpp::BoundedVector<builtin_interfaces::msg::Time_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<builtin_interfaces::msg::Time_<ContainerAllocator>>> & _arg)
  {
    this->expected_time_arrival = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ACQUIRE =
    1u;
  static constexpr uint16_t RELEASE =
    2u;

  // pointer types
  using RawPtr =
    autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_v2x_msgs__msg__VirtualGateAreaCommand
    std::shared_ptr<autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_v2x_msgs__msg__VirtualGateAreaCommand
    std::shared_ptr<autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VirtualGateAreaCommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->sequence_id != other.sequence_id) {
      return false;
    }
    if (this->area_id != other.area_id) {
      return false;
    }
    if (this->gate_ids != other.gate_ids) {
      return false;
    }
    if (this->expected_time_arrival != other.expected_time_arrival) {
      return false;
    }
    return true;
  }
  bool operator!=(const VirtualGateAreaCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VirtualGateAreaCommand_

// alias to use template instance with default allocator
using VirtualGateAreaCommand =
  autoware_v2x_msgs::msg::VirtualGateAreaCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VirtualGateAreaCommand_<ContainerAllocator>::ACQUIRE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VirtualGateAreaCommand_<ContainerAllocator>::RELEASE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_v2x_msgs

#endif  // AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_AREA_COMMAND__STRUCT_HPP_
