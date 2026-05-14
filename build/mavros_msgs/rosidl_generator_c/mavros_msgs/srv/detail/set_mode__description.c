// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mavros_msgs:srv/SetMode.idl
// generated code does not contain a copyright notice

#include "mavros_msgs/srv/detail/set_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
const rosidl_type_hash_t *
mavros_msgs__srv__SetMode__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0xfc, 0x7c, 0xe0, 0x85, 0xf4, 0xd0, 0x7d,
      0x5d, 0xd6, 0x77, 0x23, 0x8b, 0x42, 0xef, 0x92,
      0x2d, 0x2a, 0x8a, 0xef, 0x71, 0xfa, 0xbe, 0x6a,
      0xd1, 0x8b, 0x2e, 0xa5, 0x2c, 0x91, 0x24, 0xda,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
const rosidl_type_hash_t *
mavros_msgs__srv__SetMode_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0x30, 0xd9, 0xd5, 0xf7, 0x5c, 0xef, 0x3a,
      0x56, 0x83, 0x20, 0x8e, 0x7f, 0x53, 0xbf, 0xf7,
      0x7a, 0x18, 0x5d, 0x73, 0xee, 0x1b, 0xd8, 0x72,
      0x93, 0xb1, 0xf8, 0x8d, 0xda, 0xe2, 0x2f, 0x3f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
const rosidl_type_hash_t *
mavros_msgs__srv__SetMode_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x81, 0xf2, 0xdb, 0x42, 0x2e, 0xf0, 0x50, 0x9e,
      0x6b, 0x17, 0xb2, 0xf6, 0x41, 0x90, 0xee, 0x5a,
      0xc6, 0x45, 0xfc, 0x94, 0x80, 0x62, 0x7b, 0x3e,
      0x3c, 0x91, 0x3d, 0xd7, 0x81, 0xab, 0xe0, 0x77,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
const rosidl_type_hash_t *
mavros_msgs__srv__SetMode_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0xcc, 0x7e, 0xb2, 0x1e, 0x20, 0x22, 0x96,
      0x50, 0x07, 0x52, 0xfd, 0xf5, 0xa0, 0xd8, 0x17,
      0x75, 0x87, 0x9d, 0xc3, 0x97, 0x39, 0xa6, 0x2d,
      0x16, 0xbe, 0xfa, 0x1f, 0xb2, 0xbf, 0x01, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char mavros_msgs__srv__SetMode__TYPE_NAME[] = "mavros_msgs/srv/SetMode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mavros_msgs__srv__SetMode_Event__TYPE_NAME[] = "mavros_msgs/srv/SetMode_Event";
static char mavros_msgs__srv__SetMode_Request__TYPE_NAME[] = "mavros_msgs/srv/SetMode_Request";
static char mavros_msgs__srv__SetMode_Response__TYPE_NAME[] = "mavros_msgs/srv/SetMode_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char mavros_msgs__srv__SetMode__FIELD_NAME__request_message[] = "request_message";
static char mavros_msgs__srv__SetMode__FIELD_NAME__response_message[] = "response_message";
static char mavros_msgs__srv__SetMode__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mavros_msgs__srv__SetMode__FIELDS[] = {
  {
    {mavros_msgs__srv__SetMode__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mavros_msgs__srv__SetMode_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__SetMode__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mavros_msgs__srv__SetMode_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__SetMode__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mavros_msgs__srv__SetMode_Event__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mavros_msgs__srv__SetMode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__SetMode_Event__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__SetMode_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__SetMode_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mavros_msgs__srv__SetMode__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mavros_msgs__srv__SetMode__TYPE_NAME, 23, 23},
      {mavros_msgs__srv__SetMode__FIELDS, 3, 3},
    },
    {mavros_msgs__srv__SetMode__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mavros_msgs__srv__SetMode_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mavros_msgs__srv__SetMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mavros_msgs__srv__SetMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mavros_msgs__srv__SetMode_Request__FIELD_NAME__base_mode[] = "base_mode";
static char mavros_msgs__srv__SetMode_Request__FIELD_NAME__custom_mode[] = "custom_mode";

static rosidl_runtime_c__type_description__Field mavros_msgs__srv__SetMode_Request__FIELDS[] = {
  {
    {mavros_msgs__srv__SetMode_Request__FIELD_NAME__base_mode, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__SetMode_Request__FIELD_NAME__custom_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mavros_msgs__srv__SetMode_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mavros_msgs__srv__SetMode_Request__TYPE_NAME, 31, 31},
      {mavros_msgs__srv__SetMode_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mavros_msgs__srv__SetMode_Response__FIELD_NAME__mode_sent[] = "mode_sent";

static rosidl_runtime_c__type_description__Field mavros_msgs__srv__SetMode_Response__FIELDS[] = {
  {
    {mavros_msgs__srv__SetMode_Response__FIELD_NAME__mode_sent, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mavros_msgs__srv__SetMode_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mavros_msgs__srv__SetMode_Response__TYPE_NAME, 32, 32},
      {mavros_msgs__srv__SetMode_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mavros_msgs__srv__SetMode_Event__FIELD_NAME__info[] = "info";
static char mavros_msgs__srv__SetMode_Event__FIELD_NAME__request[] = "request";
static char mavros_msgs__srv__SetMode_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mavros_msgs__srv__SetMode_Event__FIELDS[] = {
  {
    {mavros_msgs__srv__SetMode_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__SetMode_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mavros_msgs__srv__SetMode_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__SetMode_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mavros_msgs__srv__SetMode_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mavros_msgs__srv__SetMode_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__SetMode_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__SetMode_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mavros_msgs__srv__SetMode_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mavros_msgs__srv__SetMode_Event__TYPE_NAME, 29, 29},
      {mavros_msgs__srv__SetMode_Event__FIELDS, 3, 3},
    },
    {mavros_msgs__srv__SetMode_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mavros_msgs__srv__SetMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mavros_msgs__srv__SetMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# set FCU mode\n"
  "#\n"
  "# Known custom modes listed here:\n"
  "# http://wiki.ros.org/mavros/CustomModes\n"
  "\n"
  "# basic modes from MAV_MODE\n"
  "uint8 MAV_MODE_PREFLIGHT\\t\\t= 0\n"
  "uint8 MAV_MODE_STABILIZE_DISARMED\\t= 80\n"
  "uint8 MAV_MODE_STABILIZE_ARMED\\t\\t= 208\n"
  "uint8 MAV_MODE_MANUAL_DISARMED\\t\\t= 64\n"
  "uint8 MAV_MODE_MANUAL_ARMED\\t\\t= 192\n"
  "uint8 MAV_MODE_GUIDED_DISARMED\\t\\t= 88\n"
  "uint8 MAV_MODE_GUIDED_ARMED\\t\\t= 216\n"
  "uint8 MAV_MODE_AUTO_DISARMED\\t\\t= 92\n"
  "uint8 MAV_MODE_AUTO_ARMED\\t\\t= 220\n"
  "uint8 MAV_MODE_TEST_DISARMED\\t\\t= 66\n"
  "uint8 MAV_MODE_TEST_ARMED\\t\\t= 194\n"
  "\n"
  "uint8 base_mode\\t\\t# filled by MAV_MODE enum value or 0 if custom_mode != ''\n"
  "string custom_mode\\t# string mode representation or integer\n"
  "---\n"
  "bool mode_sent\\t\\t# Mode known/parsed correctly and SET_MODE are sent";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mavros_msgs__srv__SetMode__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mavros_msgs__srv__SetMode__TYPE_NAME, 23, 23},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 715, 715},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mavros_msgs__srv__SetMode_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mavros_msgs__srv__SetMode_Request__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mavros_msgs__srv__SetMode_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mavros_msgs__srv__SetMode_Response__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mavros_msgs__srv__SetMode_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mavros_msgs__srv__SetMode_Event__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mavros_msgs__srv__SetMode__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mavros_msgs__srv__SetMode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mavros_msgs__srv__SetMode_Event__get_individual_type_description_source(NULL);
    sources[3] = *mavros_msgs__srv__SetMode_Request__get_individual_type_description_source(NULL);
    sources[4] = *mavros_msgs__srv__SetMode_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mavros_msgs__srv__SetMode_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mavros_msgs__srv__SetMode_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mavros_msgs__srv__SetMode_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mavros_msgs__srv__SetMode_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mavros_msgs__srv__SetMode_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mavros_msgs__srv__SetMode_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mavros_msgs__srv__SetMode_Request__get_individual_type_description_source(NULL);
    sources[3] = *mavros_msgs__srv__SetMode_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
