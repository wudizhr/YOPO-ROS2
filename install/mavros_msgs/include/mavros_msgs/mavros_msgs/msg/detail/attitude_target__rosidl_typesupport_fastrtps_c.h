// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from mavros_msgs:msg/AttitudeTarget.idl
// generated code does not contain a copyright notice
#ifndef MAVROS_MSGS__MSG__DETAIL__ATTITUDE_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MAVROS_MSGS__MSG__DETAIL__ATTITUDE_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mavros_msgs/msg/detail/attitude_target__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
bool cdr_serialize_mavros_msgs__msg__AttitudeTarget(
  const mavros_msgs__msg__AttitudeTarget * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
bool cdr_deserialize_mavros_msgs__msg__AttitudeTarget(
  eprosima::fastcdr::Cdr &,
  mavros_msgs__msg__AttitudeTarget * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__msg__AttitudeTarget(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__msg__AttitudeTarget(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
bool cdr_serialize_key_mavros_msgs__msg__AttitudeTarget(
  const mavros_msgs__msg__AttitudeTarget * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_key_mavros_msgs__msg__AttitudeTarget(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_key_mavros_msgs__msg__AttitudeTarget(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, msg, AttitudeTarget)();

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__ATTITUDE_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
