// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from akros2_msgs:msg/Mode.idl
// generated code does not contain a copyright notice
#include "akros2_msgs/msg/detail/mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "akros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "akros2_msgs/msg/detail/mode__struct.h"
#include "akros2_msgs/msg/detail/mode__functions.h"
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


// forward declare type support functions


using _Mode__ros_msg_type = akros2_msgs__msg__Mode;

static bool _Mode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Mode__ros_msg_type * ros_message = static_cast<const _Mode__ros_msg_type *>(untyped_ros_message);
  // Field name: estop
  {
    cdr << (ros_message->estop ? true : false);
  }

  // Field name: auto_t
  {
    cdr << (ros_message->auto_t ? true : false);
  }

  return true;
}

static bool _Mode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Mode__ros_msg_type * ros_message = static_cast<_Mode__ros_msg_type *>(untyped_ros_message);
  // Field name: estop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->estop = tmp ? true : false;
  }

  // Field name: auto_t
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_t = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_akros2_msgs
size_t get_serialized_size_akros2_msgs__msg__Mode(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Mode__ros_msg_type * ros_message = static_cast<const _Mode__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name estop
  {
    size_t item_size = sizeof(ros_message->estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_t
  {
    size_t item_size = sizeof(ros_message->auto_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Mode__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_akros2_msgs__msg__Mode(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_akros2_msgs
size_t max_serialized_size_akros2_msgs__msg__Mode(
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

  // member: estop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_t
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
    using DataType = akros2_msgs__msg__Mode;
    is_plain =
      (
      offsetof(DataType, auto_t) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Mode__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_akros2_msgs__msg__Mode(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Mode = {
  "akros2_msgs::msg",
  "Mode",
  _Mode__cdr_serialize,
  _Mode__cdr_deserialize,
  _Mode__get_serialized_size,
  _Mode__max_serialized_size
};

static rosidl_message_type_support_t _Mode__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Mode,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akros2_msgs, msg, Mode)() {
  return &_Mode__type_support;
}

#if defined(__cplusplus)
}
#endif
