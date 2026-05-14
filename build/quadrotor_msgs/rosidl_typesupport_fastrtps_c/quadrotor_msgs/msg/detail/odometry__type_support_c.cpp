// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from quadrotor_msgs:msg/Odometry.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/odometry__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "quadrotor_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "quadrotor_msgs/msg/detail/odometry__struct.h"
#include "quadrotor_msgs/msg/detail/odometry__functions.h"
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

#include "nav_msgs/msg/detail/odometry__functions.h"  // curodom, kfodom

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
bool cdr_serialize_nav_msgs__msg__Odometry(
  const nav_msgs__msg__Odometry * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
bool cdr_deserialize_nav_msgs__msg__Odometry(
  eprosima::fastcdr::Cdr & cdr,
  nav_msgs__msg__Odometry * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
size_t get_serialized_size_nav_msgs__msg__Odometry(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
size_t max_serialized_size_nav_msgs__msg__Odometry(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
bool cdr_serialize_key_nav_msgs__msg__Odometry(
  const nav_msgs__msg__Odometry * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
size_t get_serialized_size_key_nav_msgs__msg__Odometry(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
size_t max_serialized_size_key_nav_msgs__msg__Odometry(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry)();


using _Odometry__ros_msg_type = quadrotor_msgs__msg__Odometry;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadrotor_msgs
bool cdr_serialize_quadrotor_msgs__msg__Odometry(
  const quadrotor_msgs__msg__Odometry * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: curodom
  {
    cdr_serialize_nav_msgs__msg__Odometry(
      &ros_message->curodom, cdr);
  }

  // Field name: kfodom
  {
    cdr_serialize_nav_msgs__msg__Odometry(
      &ros_message->kfodom, cdr);
  }

  // Field name: kfid
  {
    cdr << ros_message->kfid;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadrotor_msgs
bool cdr_deserialize_quadrotor_msgs__msg__Odometry(
  eprosima::fastcdr::Cdr & cdr,
  quadrotor_msgs__msg__Odometry * ros_message)
{
  // Field name: curodom
  {
    cdr_deserialize_nav_msgs__msg__Odometry(cdr, &ros_message->curodom);
  }

  // Field name: kfodom
  {
    cdr_deserialize_nav_msgs__msg__Odometry(cdr, &ros_message->kfodom);
  }

  // Field name: kfid
  {
    cdr >> ros_message->kfid;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadrotor_msgs
size_t get_serialized_size_quadrotor_msgs__msg__Odometry(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Odometry__ros_msg_type * ros_message = static_cast<const _Odometry__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: curodom
  current_alignment += get_serialized_size_nav_msgs__msg__Odometry(
    &(ros_message->curodom), current_alignment);

  // Field name: kfodom
  current_alignment += get_serialized_size_nav_msgs__msg__Odometry(
    &(ros_message->kfodom), current_alignment);

  // Field name: kfid
  {
    size_t item_size = sizeof(ros_message->kfid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadrotor_msgs
size_t max_serialized_size_quadrotor_msgs__msg__Odometry(
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

  // Field name: curodom
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_msgs__msg__Odometry(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: kfodom
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_msgs__msg__Odometry(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: kfid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status
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
    using DataType = quadrotor_msgs__msg__Odometry;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadrotor_msgs
bool cdr_serialize_key_quadrotor_msgs__msg__Odometry(
  const quadrotor_msgs__msg__Odometry * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: curodom
  {
    cdr_serialize_key_nav_msgs__msg__Odometry(
      &ros_message->curodom, cdr);
  }

  // Field name: kfodom
  {
    cdr_serialize_key_nav_msgs__msg__Odometry(
      &ros_message->kfodom, cdr);
  }

  // Field name: kfid
  {
    cdr << ros_message->kfid;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadrotor_msgs
size_t get_serialized_size_key_quadrotor_msgs__msg__Odometry(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Odometry__ros_msg_type * ros_message = static_cast<const _Odometry__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: curodom
  current_alignment += get_serialized_size_key_nav_msgs__msg__Odometry(
    &(ros_message->curodom), current_alignment);

  // Field name: kfodom
  current_alignment += get_serialized_size_key_nav_msgs__msg__Odometry(
    &(ros_message->kfodom), current_alignment);

  // Field name: kfid
  {
    size_t item_size = sizeof(ros_message->kfid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadrotor_msgs
size_t max_serialized_size_key_quadrotor_msgs__msg__Odometry(
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
  // Field name: curodom
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_nav_msgs__msg__Odometry(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: kfodom
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_nav_msgs__msg__Odometry(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: kfid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status
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
    using DataType = quadrotor_msgs__msg__Odometry;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Odometry__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const quadrotor_msgs__msg__Odometry * ros_message = static_cast<const quadrotor_msgs__msg__Odometry *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_quadrotor_msgs__msg__Odometry(ros_message, cdr);
}

static bool _Odometry__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  quadrotor_msgs__msg__Odometry * ros_message = static_cast<quadrotor_msgs__msg__Odometry *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_quadrotor_msgs__msg__Odometry(cdr, ros_message);
}

static uint32_t _Odometry__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_quadrotor_msgs__msg__Odometry(
      untyped_ros_message, 0));
}

static size_t _Odometry__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_quadrotor_msgs__msg__Odometry(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Odometry = {
  "quadrotor_msgs::msg",
  "Odometry",
  _Odometry__cdr_serialize,
  _Odometry__cdr_deserialize,
  _Odometry__get_serialized_size,
  _Odometry__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Odometry__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Odometry,
  get_message_typesupport_handle_function,
  &quadrotor_msgs__msg__Odometry__get_type_hash,
  &quadrotor_msgs__msg__Odometry__get_type_description,
  &quadrotor_msgs__msg__Odometry__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, Odometry)() {
  return &_Odometry__type_support;
}

#if defined(__cplusplus)
}
#endif
