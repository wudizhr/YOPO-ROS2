// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from quadrotor_msgs:msg/Gains.idl
// generated code does not contain a copyright notice

#include "quadrotor_msgs/msg/detail/gains__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_quadrotor_msgs
const rosidl_type_hash_t *
quadrotor_msgs__msg__Gains__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x64, 0xf7, 0xff, 0x15, 0xdb, 0x7e, 0x0b,
      0xa5, 0xd7, 0x6a, 0xd9, 0xdb, 0x27, 0x4a, 0x7a,
      0xfd, 0x02, 0xc9, 0x22, 0x35, 0x7c, 0x34, 0x38,
      0x81, 0xa2, 0xc5, 0x97, 0xb0, 0xb3, 0x16, 0x08,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char quadrotor_msgs__msg__Gains__TYPE_NAME[] = "quadrotor_msgs/msg/Gains";

// Define type names, field names, and default values
static char quadrotor_msgs__msg__Gains__FIELD_NAME__kp[] = "kp";
static char quadrotor_msgs__msg__Gains__FIELD_NAME__kd[] = "kd";
static char quadrotor_msgs__msg__Gains__FIELD_NAME__kp_yaw[] = "kp_yaw";
static char quadrotor_msgs__msg__Gains__FIELD_NAME__kd_yaw[] = "kd_yaw";

static rosidl_runtime_c__type_description__Field quadrotor_msgs__msg__Gains__FIELDS[] = {
  {
    {quadrotor_msgs__msg__Gains__FIELD_NAME__kp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__Gains__FIELD_NAME__kd, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__Gains__FIELD_NAME__kp_yaw, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__Gains__FIELD_NAME__kd_yaw, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
quadrotor_msgs__msg__Gains__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {quadrotor_msgs__msg__Gains__TYPE_NAME, 24, 24},
      {quadrotor_msgs__msg__Gains__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 kp\n"
  "float64 kd\n"
  "float64 kp_yaw\n"
  "float64 kd_yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
quadrotor_msgs__msg__Gains__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {quadrotor_msgs__msg__Gains__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadrotor_msgs__msg__Gains__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *quadrotor_msgs__msg__Gains__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
