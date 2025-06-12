// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_v2x_msgs:msg/VirtualGateCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_COMMAND__STRUCT_HPP_
#define AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'areas'
#include "autoware_v2x_msgs/msg/detail/virtual_gate_area_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_v2x_msgs__msg__VirtualGateCommand __attribute__((deprecated))
#else
# define DEPRECATED__autoware_v2x_msgs__msg__VirtualGateCommand __declspec(deprecated)
#endif

namespace autoware_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VirtualGateCommand_
{
  using Type = VirtualGateCommand_<ContainerAllocator>;

  explicit VirtualGateCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit VirtualGateCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _areas_type =
    std::vector<autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator>>>;
  _areas_type areas;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__areas(
    const std::vector<autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_v2x_msgs::msg::VirtualGateAreaCommand_<ContainerAllocator>>> & _arg)
  {
    this->areas = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_v2x_msgs::msg::VirtualGateCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_v2x_msgs::msg::VirtualGateCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_v2x_msgs::msg::VirtualGateCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_v2x_msgs::msg::VirtualGateCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_v2x_msgs::msg::VirtualGateCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_v2x_msgs::msg::VirtualGateCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_v2x_msgs::msg::VirtualGateCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_v2x_msgs::msg::VirtualGateCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_v2x_msgs::msg::VirtualGateCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_v2x_msgs::msg::VirtualGateCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_v2x_msgs__msg__VirtualGateCommand
    std::shared_ptr<autoware_v2x_msgs::msg::VirtualGateCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_v2x_msgs__msg__VirtualGateCommand
    std::shared_ptr<autoware_v2x_msgs::msg::VirtualGateCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VirtualGateCommand_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->areas != other.areas) {
      return false;
    }
    return true;
  }
  bool operator!=(const VirtualGateCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VirtualGateCommand_

// alias to use template instance with default allocator
using VirtualGateCommand =
  autoware_v2x_msgs::msg::VirtualGateCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_v2x_msgs

#endif  // AUTOWARE_V2X_MSGS__MSG__DETAIL__VIRTUAL_GATE_COMMAND__STRUCT_HPP_
