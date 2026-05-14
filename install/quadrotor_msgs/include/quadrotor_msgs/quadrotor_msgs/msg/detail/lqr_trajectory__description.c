// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from quadrotor_msgs:msg/LQRTrajectory.idl
// generated code does not contain a copyright notice

#include "quadrotor_msgs/msg/detail/lqr_trajectory__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_quadrotor_msgs
const rosidl_type_hash_t *
quadrotor_msgs__msg__LQRTrajectory__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0x02, 0x36, 0xc8, 0xc8, 0x54, 0x3b, 0x54,
      0xb8, 0x61, 0xa7, 0x3b, 0xdd, 0x21, 0xf8, 0x42,
      0x1a, 0x8c, 0xc1, 0x84, 0x0d, 0x75, 0xb8, 0xc1,
      0x16, 0x03, 0x21, 0x0c, 0xbc, 0x92, 0x4e, 0x85,
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

static char quadrotor_msgs__msg__LQRTrajectory__TYPE_NAME[] = "quadrotor_msgs/msg/LQRTrajectory";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__header[] = "header";
static char quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__trajectory_id[] = "trajectory_id";
static char quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__action[] = "action";
static char quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__r[] = "r";
static char quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__start_yaw[] = "start_yaw";
static char quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__final_yaw[] = "final_yaw";
static char quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__s0[] = "s0";
static char quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__ut[] = "ut";
static char quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__sf[] = "sf";
static char quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__t_f[] = "t_f";
static char quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__debug_info[] = "debug_info";

static rosidl_runtime_c__type_description__Field quadrotor_msgs__msg__LQRTrajectory__FIELDS[] = {
  {
    {quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__trajectory_id, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__action, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__r, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__start_yaw, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__final_yaw, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__s0, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__ut, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__sf, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__t_f, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadrotor_msgs__msg__LQRTrajectory__FIELD_NAME__debug_info, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription quadrotor_msgs__msg__LQRTrajectory__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
quadrotor_msgs__msg__LQRTrajectory__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {quadrotor_msgs__msg__LQRTrajectory__TYPE_NAME, 32, 32},
      {quadrotor_msgs__msg__LQRTrajectory__FIELDS, 11, 11},
    },
    {quadrotor_msgs__msg__LQRTrajectory__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "\n"
  "# the trajectory id, starts from \"1\".\n"
  "uint32 trajectory_id\n"
  "\n"
  "# the action command for trajectory server.\n"
  "uint32 ACTION_ADD           =   1\n"
  "uint32 ACTION_ABORT         =   2\n"
  "uint32 ACTION_WARN_START    =   3\n"
  "uint32 ACTION_WARN_FINAL    =   4\n"
  "uint32 ACTION_WARN_IMPOSSIBLE = 5\n"
  "uint32 action\n"
  "\n"
  "# the weight coefficient of the control effort\n"
  "float64 r\n"
  "\n"
  "# the yaw command\n"
  "float64 start_yaw\n"
  "float64 final_yaw\n"
  "\n"
  "# the initial and final state\n"
  "float64[6] s0\n"
  "float64[3] ut\n"
  " \n"
  "float64[6] sf \n"
  "\n"
  "# the optimal arrival time\n"
  "float64 t_f\n"
  "\n"
  "string debug_info";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
quadrotor_msgs__msg__LQRTrajectory__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {quadrotor_msgs__msg__LQRTrajectory__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 559, 559},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadrotor_msgs__msg__LQRTrajectory__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *quadrotor_msgs__msg__LQRTrajectory__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
