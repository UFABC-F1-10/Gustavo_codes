// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from akros2_msgs:msg/Mode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "akros2_msgs/msg/detail/mode__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace akros2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Mode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) akros2_msgs::msg::Mode(_init);
}

void Mode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<akros2_msgs::msg::Mode *>(message_memory);
  typed_message->~Mode();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Mode_message_member_array[2] = {
  {
    "estop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akros2_msgs::msg::Mode, estop),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "auto_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akros2_msgs::msg::Mode, auto_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Mode_message_members = {
  "akros2_msgs::msg",  // message namespace
  "Mode",  // message name
  2,  // number of fields
  sizeof(akros2_msgs::msg::Mode),
  Mode_message_member_array,  // message members
  Mode_init_function,  // function to initialize message memory (memory has to be allocated)
  Mode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Mode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Mode_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace akros2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<akros2_msgs::msg::Mode>()
{
  return &::akros2_msgs::msg::rosidl_typesupport_introspection_cpp::Mode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, akros2_msgs, msg, Mode)() {
  return &::akros2_msgs::msg::rosidl_typesupport_introspection_cpp::Mode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
