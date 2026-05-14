// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from quadrotor_msgs:msg/PPROutputData.idl
// generated code does not contain a copyright notice

#include "quadrotor_msgs/msg/detail/ppr_output_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_quadrotor_msgs
const rosidl_type_hash_t *
quadrotor_msgs__msg__PPROutputData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x2f, 0x53, 0x01, 0x07, 0xdc, 0x6d, 0xa6,
      0xff, 0x1c, 0x13, 0xdc, 0x0a, 0xd3, 0x34, 0x76,
      0x90, 0xa5, 0x75, 0x0f, 0x40, 0x6c, 0x01, 0xbc,
      0xd1, 0x08, 0x6e, 0x39, 0x58, 0x4d, 0x49, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char quadrotor_msgs__msg__PPROutputData__TYPE_NAME[] = "quadrotor_msgs/msg/PPROutputData";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__header[] = "header";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__quad_time[] = "quad_time";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__des_thrust[] = "des_thrust";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__des_roll[] = "des_roll";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__des_pitch[] = "des_pitch";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__des_yaw[] = "des_yaw";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_roll[] = "est_roll";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_pitch[] = "est_pitch";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_yaw[] = "est_yaw";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_angvel_x[] = "est_angvel_x";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_angvel_y[] = "est_angvel_y";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_angvel_z[] = "est_angvel_z";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_acc_x[] = "est_acc_x";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_acc_y[] = "est_acc_y";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_acc_z[] = "est_acc_z";
static char quadrotor_msgs__msg__PPROutputData__FIELD_NAME__pwm[] = "pwm";

static rosidl_runtime_c__type_description__Field quadrotor_msgs__msg__PPROutputData__FIELDS[] = {
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__quad_time, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__des_thrust, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__des_roll, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__des_pitch, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__des_yaw, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_roll, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_pitch, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_yaw, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_angvel_x, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_angvel_y, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_angvel_z, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_acc_x, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_acc_y, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__est_acc_z, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__PPROutputData__FIELD_NAME__pwm, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription quadrotor_msgs__msg__PPROutputData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
quadrotor_msgs__msg__PPROutputData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {quadrotor_msgs__msg__PPROutputData__TYPE_NAME, 32, 32},
      {quadrotor_msgs__msg__PPROutputData__FIELDS, 16, 16},
    },
    {quadrotor_msgs__msg__PPROutputData__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "uint16 quad_time\n"
  "float64 des_thrust\n"
  "float64 des_roll\n"
  "float64 des_pitch\n"
  "float64 des_yaw\n"
  "float64 est_roll\n"
  "float64 est_pitch\n"
  "float64 est_yaw\n"
  "float64 est_angvel_x\n"
  "float64 est_angvel_y\n"
  "float64 est_angvel_z\n"
  "float64 est_acc_x\n"
  "float64 est_acc_y\n"
  "float64 est_acc_z\n"
  "uint16[4] pwm";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
quadrotor_msgs__msg__PPROutputData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {quadrotor_msgs__msg__PPROutputData__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 292, 292},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadrotor_msgs__msg__PPROutputData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *quadrotor_msgs__msg__PPROutputData__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
