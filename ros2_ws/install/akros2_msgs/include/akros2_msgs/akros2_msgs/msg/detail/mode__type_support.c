// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from akros2_msgs:msg/Mode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "akros2_msgs/msg/detail/mode__rosidl_typesupport_introspection_c.h"
#include "akros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "akros2_msgs/msg/detail/mode__functions.h"
#include "akros2_msgs/msg/detail/mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void akros2_msgs__msg__Mode__rosidl_typesupport_introspection_c__Mode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  akros2_msgs__msg__Mode__init(message_memory);
}

void akros2_msgs__msg__Mode__rosidl_typesupport_introspection_c__Mode_fini_function(void * message_memory)
{
  akros2_msgs__msg__Mode__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember akros2_msgs__msg__Mode__rosidl_typesupport_introspection_c__Mode_message_member_array[2] = {
  {
    "estop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akros2_msgs__msg__Mode, estop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akros2_msgs__msg__Mode, auto_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers akros2_msgs__msg__Mode__rosidl_typesupport_introspection_c__Mode_message_members = {
  "akros2_msgs__msg",  // message namespace
  "Mode",  // message name
  2,  // number of fields
  sizeof(akros2_msgs__msg__Mode),
  akros2_msgs__msg__Mode__rosidl_typesupport_introspection_c__Mode_message_member_array,  // message members
  akros2_msgs__msg__Mode__rosidl_typesupport_introspection_c__Mode_init_function,  // function to initialize message memory (memory has to be allocated)
  akros2_msgs__msg__Mode__rosidl_typesupport_introspection_c__Mode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t akros2_msgs__msg__Mode__rosidl_typesupport_introspection_c__Mode_message_type_support_handle = {
  0,
  &akros2_msgs__msg__Mode__rosidl_typesupport_introspection_c__Mode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_akros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akros2_msgs, msg, Mode)() {
  if (!akros2_msgs__msg__Mode__rosidl_typesupport_introspection_c__Mode_message_type_support_handle.typesupport_identifier) {
    akros2_msgs__msg__Mode__rosidl_typesupport_introspection_c__Mode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &akros2_msgs__msg__Mode__rosidl_typesupport_introspection_c__Mode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
