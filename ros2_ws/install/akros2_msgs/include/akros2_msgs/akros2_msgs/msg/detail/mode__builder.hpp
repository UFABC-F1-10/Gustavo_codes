// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akros2_msgs:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef AKROS2_MSGS__MSG__DETAIL__MODE__BUILDER_HPP_
#define AKROS2_MSGS__MSG__DETAIL__MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akros2_msgs/msg/detail/mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akros2_msgs
{

namespace msg
{

namespace builder
{

class Init_Mode_auto_t
{
public:
  explicit Init_Mode_auto_t(::akros2_msgs::msg::Mode & msg)
  : msg_(msg)
  {}
  ::akros2_msgs::msg::Mode auto_t(::akros2_msgs::msg::Mode::_auto_t_type arg)
  {
    msg_.auto_t = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akros2_msgs::msg::Mode msg_;
};

class Init_Mode_estop
{
public:
  Init_Mode_estop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mode_auto_t estop(::akros2_msgs::msg::Mode::_estop_type arg)
  {
    msg_.estop = std::move(arg);
    return Init_Mode_auto_t(msg_);
  }

private:
  ::akros2_msgs::msg::Mode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::akros2_msgs::msg::Mode>()
{
  return akros2_msgs::msg::builder::Init_Mode_estop();
}

}  // namespace akros2_msgs

#endif  // AKROS2_MSGS__MSG__DETAIL__MODE__BUILDER_HPP_
