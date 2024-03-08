// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from akros2_msgs:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef AKROS2_MSGS__MSG__DETAIL__MODE__STRUCT_HPP_
#define AKROS2_MSGS__MSG__DETAIL__MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__akros2_msgs__msg__Mode __attribute__((deprecated))
#else
# define DEPRECATED__akros2_msgs__msg__Mode __declspec(deprecated)
#endif

namespace akros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mode_
{
  using Type = Mode_<ContainerAllocator>;

  explicit Mode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->estop = false;
      this->auto_t = false;
    }
  }

  explicit Mode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->estop = false;
      this->auto_t = false;
    }
  }

  // field types and members
  using _estop_type =
    bool;
  _estop_type estop;
  using _auto_t_type =
    bool;
  _auto_t_type auto_t;

  // setters for named parameter idiom
  Type & set__estop(
    const bool & _arg)
  {
    this->estop = _arg;
    return *this;
  }
  Type & set__auto_t(
    const bool & _arg)
  {
    this->auto_t = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akros2_msgs::msg::Mode_<ContainerAllocator> *;
  using ConstRawPtr =
    const akros2_msgs::msg::Mode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akros2_msgs::msg::Mode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akros2_msgs::msg::Mode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akros2_msgs::msg::Mode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akros2_msgs::msg::Mode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akros2_msgs::msg::Mode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akros2_msgs::msg::Mode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akros2_msgs::msg::Mode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akros2_msgs::msg::Mode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akros2_msgs__msg__Mode
    std::shared_ptr<akros2_msgs::msg::Mode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akros2_msgs__msg__Mode
    std::shared_ptr<akros2_msgs::msg::Mode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mode_ & other) const
  {
    if (this->estop != other.estop) {
      return false;
    }
    if (this->auto_t != other.auto_t) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mode_

// alias to use template instance with default allocator
using Mode =
  akros2_msgs::msg::Mode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace akros2_msgs

#endif  // AKROS2_MSGS__MSG__DETAIL__MODE__STRUCT_HPP_
