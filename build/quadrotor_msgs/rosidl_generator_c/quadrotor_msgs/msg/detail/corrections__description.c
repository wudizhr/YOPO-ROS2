// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from quadrotor_msgs:msg/Corrections.idl
// generated code does not contain a copyright notice

#include "quadrotor_msgs/msg/detail/corrections__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_quadrotor_msgs
const rosidl_type_hash_t *
quadrotor_msgs__msg__Corrections__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x43, 0x35, 0xac, 0xbd, 0xa2, 0x03, 0x2a, 0x55,
      0x37, 0x6e, 0x76, 0xa8, 0x0f, 0x12, 0xb4, 0x72,
      0x5a, 0xfd, 0x94, 0xa5, 0x13, 0x2e, 0x1c, 0x8e,
      0x0b, 0x15, 0x23, 0xeb, 0x3f, 0xdf, 0x5f, 0x97,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char quadrotor_msgs__msg__Corrections__TYPE_NAME[] = "quadrotor_msgs/msg/Corrections";

// Define type names, field names, and default values
static char quadrotor_msgs__msg__Corrections__FIELD_NAME__kf_correction[] = "kf_correction";
static char quadrotor_msgs__msg__Corrections__FIELD_NAME__angle_corrections[] = "angle_corrections";

static rosidl_runtime_c__type_description__Field quadrotor_msgs__msg__Corrections__FIELDS[] = {
  {
    {quadrotor_msgs__msg__Corrections__FIELD_NAME__kf_correction, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__Corrections__FIELD_NAME__angle_corrections, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
quadrotor_msgs__msg__Corrections__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {quadrotor_msgs__msg__Corrections__TYPE_NAME, 30, 30},
      {quadrotor_msgs__msg__Corrections__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 kf_correction\n"
  "float64[2] angle_corrections";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
quadrotor_msgs__msg__Corrections__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {quadrotor_msgs__msg__Corrections__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadrotor_msgs__msg__Corrections__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *quadrotor_msgs__msg__Corrections__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
