// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mavros_msgs:msg/State.idl
// generated code does not contain a copyright notice

#include "mavros_msgs/msg/detail/state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
const rosidl_type_hash_t *
mavros_msgs__msg__State__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0xba, 0x76, 0x86, 0x16, 0x3d, 0x22, 0x28,
      0x18, 0x71, 0xf1, 0xcb, 0x42, 0x55, 0x7e, 0x89,
      0x57, 0x40, 0x74, 0x69, 0xb0, 0xbe, 0x81, 0x3b,
      0xdb, 0x1a, 0x89, 0x22, 0xc6, 0x6e, 0x31, 0x31,
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

static char mavros_msgs__msg__State__TYPE_NAME[] = "mavros_msgs/msg/State";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mavros_msgs__msg__State__FIELD_NAME__header[] = "header";
static char mavros_msgs__msg__State__FIELD_NAME__connected[] = "connected";
static char mavros_msgs__msg__State__FIELD_NAME__armed[] = "armed";
static char mavros_msgs__msg__State__FIELD_NAME__guided[] = "guided";
static char mavros_msgs__msg__State__FIELD_NAME__manual_input[] = "manual_input";
static char mavros_msgs__msg__State__FIELD_NAME__mode[] = "mode";
static char mavros_msgs__msg__State__FIELD_NAME__system_status[] = "system_status";

static rosidl_runtime_c__type_description__Field mavros_msgs__msg__State__FIELDS[] = {
  {
    {mavros_msgs__msg__State__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__msg__State__FIELD_NAME__connected, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__msg__State__FIELD_NAME__armed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__msg__State__FIELD_NAME__guided, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__msg__State__FIELD_NAME__manual_input, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__msg__State__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__msg__State__FIELD_NAME__system_status, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mavros_msgs__msg__State__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
mavros_msgs__msg__State__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mavros_msgs__msg__State__TYPE_NAME, 21, 21},
      {mavros_msgs__msg__State__FIELDS, 7, 7},
    },
    {mavros_msgs__msg__State__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Current autopilot state\n"
  "#\n"
  "# Known modes listed here:\n"
  "# http://wiki.ros.org/mavros/CustomModes\n"
  "#\n"
  "# For system_status values\n"
  "# see https://mavlink.io/en/messages/common.html#MAV_STATE\n"
  "#\n"
  "\n"
  "std_msgs/Header header\n"
  "bool connected\n"
  "bool armed\n"
  "bool guided\n"
  "bool manual_input\n"
  "string mode\n"
  "uint8 system_status\n"
  "\n"
  "string MODE_APM_PLANE_MANUAL = MANUAL\n"
  "string MODE_APM_PLANE_CIRCLE = CIRCLE\n"
  "string MODE_APM_PLANE_STABILIZE = STABILIZE\n"
  "string MODE_APM_PLANE_TRAINING = TRAINING\n"
  "string MODE_APM_PLANE_ACRO = ACRO\n"
  "string MODE_APM_PLANE_FBWA = FBWA\n"
  "string MODE_APM_PLANE_FBWB = FBWB\n"
  "string MODE_APM_PLANE_CRUISE = CRUISE\n"
  "string MODE_APM_PLANE_AUTOTUNE = AUTOTUNE\n"
  "string MODE_APM_PLANE_AUTO = AUTO\n"
  "string MODE_APM_PLANE_RTL = RTL\n"
  "string MODE_APM_PLANE_LOITER = LOITER\n"
  "string MODE_APM_PLANE_LAND = LAND\n"
  "string MODE_APM_PLANE_GUIDED = GUIDED\n"
  "string MODE_APM_PLANE_INITIALISING = INITIALISING\n"
  "string MODE_APM_PLANE_QSTABILIZE = QSTABILIZE\n"
  "string MODE_APM_PLANE_QHOVER = QHOVER\n"
  "string MODE_APM_PLANE_QLOITER = QLOITER\n"
  "string MODE_APM_PLANE_QLAND = QLAND\n"
  "string MODE_APM_PLANE_QRTL = QRTL\n"
  "\n"
  "string MODE_APM_COPTER_STABILIZE = STABILIZE\n"
  "string MODE_APM_COPTER_ACRO = ACRO\n"
  "string MODE_APM_COPTER_ALT_HOLD = ALT_HOLD\n"
  "string MODE_APM_COPTER_AUTO = AUTO\n"
  "string MODE_APM_COPTER_GUIDED = GUIDED\n"
  "string MODE_APM_COPTER_LOITER = LOITER\n"
  "string MODE_APM_COPTER_RTL = RTL\n"
  "string MODE_APM_COPTER_CIRCLE = CIRCLE\n"
  "string MODE_APM_COPTER_POSITION = POSITION\n"
  "string MODE_APM_COPTER_LAND = LAND\n"
  "string MODE_APM_COPTER_OF_LOITER = OF_LOITER\n"
  "string MODE_APM_COPTER_DRIFT = DRIFT\n"
  "string MODE_APM_COPTER_SPORT = SPORT\n"
  "string MODE_APM_COPTER_FLIP = FLIP\n"
  "string MODE_APM_COPTER_AUTOTUNE = AUTOTUNE\n"
  "string MODE_APM_COPTER_POSHOLD = POSHOLD\n"
  "string MODE_APM_COPTER_BRAKE = BRAKE\n"
  "string MODE_APM_COPTER_THROW = THROW\n"
  "string MODE_APM_COPTER_AVOID_ADSB = AVOID_ADSB\n"
  "string MODE_APM_COPTER_GUIDED_NOGPS = GUIDED_NOGPS\n"
  "\n"
  "string MODE_APM_ROVER_MANUAL = MANUAL\n"
  "string MODE_APM_ROVER_LEARNING = LEARNING\n"
  "string MODE_APM_ROVER_STEERING = STEERING\n"
  "string MODE_APM_ROVER_HOLD = HOLD\n"
  "string MODE_APM_ROVER_AUTO = AUTO\n"
  "string MODE_APM_ROVER_RTL = RTL\n"
  "string MODE_APM_ROVER_GUIDED = GUIDED\n"
  "string MODE_APM_ROVER_INITIALISING = INITIALISING\n"
  "\n"
  "string MODE_PX4_MANUAL = MANUAL\n"
  "string MODE_PX4_ACRO = ACRO\n"
  "string MODE_PX4_ALTITUDE = ALTCTL\n"
  "string MODE_PX4_POSITION = POSCTL\n"
  "string MODE_PX4_OFFBOARD = OFFBOARD\n"
  "string MODE_PX4_STABILIZED = STABILIZED\n"
  "string MODE_PX4_RATTITUDE = RATTITUDE\n"
  "string MODE_PX4_MISSION = AUTO.MISSION\n"
  "string MODE_PX4_LOITER = AUTO.LOITER\n"
  "string MODE_PX4_RTL = AUTO.RTL\n"
  "string MODE_PX4_LAND = AUTO.LAND\n"
  "string MODE_PX4_RTGS = AUTO.RTGS\n"
  "string MODE_PX4_READY = AUTO.READY\n"
  "string MODE_PX4_TAKEOFF = AUTO.TAKEOFF";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mavros_msgs__msg__State__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mavros_msgs__msg__State__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2661, 2661},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mavros_msgs__msg__State__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mavros_msgs__msg__State__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
