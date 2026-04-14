// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mavros_msgs:srv/CommandBool.idl
// generated code does not contain a copyright notice

#include "mavros_msgs/srv/detail/command_bool__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
const rosidl_type_hash_t *
mavros_msgs__srv__CommandBool__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0xa7, 0x38, 0x29, 0xda, 0x4a, 0xf6, 0x5d,
      0x10, 0x19, 0x13, 0x1d, 0x82, 0xf8, 0xec, 0xca,
      0xe1, 0x5d, 0x38, 0x71, 0x7b, 0xf2, 0x14, 0x09,
      0xed, 0x51, 0x87, 0xdd, 0x9b, 0xae, 0x73, 0xdc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
const rosidl_type_hash_t *
mavros_msgs__srv__CommandBool_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x98, 0x3e, 0x93, 0xfc, 0xa1, 0x5a, 0x6c, 0xf1,
      0x26, 0x89, 0xa4, 0xef, 0x28, 0xa1, 0x0b, 0xaf,
      0xbe, 0x57, 0x6a, 0x98, 0x4f, 0x59, 0x08, 0xbf,
      0x4d, 0xa7, 0x0a, 0xf8, 0x93, 0x6b, 0x61, 0xc5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
const rosidl_type_hash_t *
mavros_msgs__srv__CommandBool_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0xec, 0x1c, 0xc0, 0x43, 0xad, 0xba, 0xf7,
      0xfc, 0x28, 0xa4, 0x48, 0x02, 0xc2, 0x7f, 0xb8,
      0xd3, 0x40, 0x18, 0xe1, 0x9a, 0xc3, 0x05, 0xd9,
      0x35, 0x7b, 0x4e, 0xc1, 0xde, 0x53, 0xb3, 0x8c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
const rosidl_type_hash_t *
mavros_msgs__srv__CommandBool_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x49, 0x40, 0xf6, 0x4b, 0x39, 0x7a, 0xaf, 0xf1,
      0x4c, 0xea, 0x99, 0x03, 0x11, 0xf5, 0xe2, 0x3c,
      0x79, 0x7c, 0x90, 0x41, 0x55, 0x27, 0x1b, 0x6a,
      0xec, 0x31, 0xec, 0x4f, 0xb5, 0xbe, 0x30, 0x1e,
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

static char mavros_msgs__srv__CommandBool__TYPE_NAME[] = "mavros_msgs/srv/CommandBool";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mavros_msgs__srv__CommandBool_Event__TYPE_NAME[] = "mavros_msgs/srv/CommandBool_Event";
static char mavros_msgs__srv__CommandBool_Request__TYPE_NAME[] = "mavros_msgs/srv/CommandBool_Request";
static char mavros_msgs__srv__CommandBool_Response__TYPE_NAME[] = "mavros_msgs/srv/CommandBool_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char mavros_msgs__srv__CommandBool__FIELD_NAME__request_message[] = "request_message";
static char mavros_msgs__srv__CommandBool__FIELD_NAME__response_message[] = "response_message";
static char mavros_msgs__srv__CommandBool__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mavros_msgs__srv__CommandBool__FIELDS[] = {
  {
    {mavros_msgs__srv__CommandBool__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mavros_msgs__srv__CommandBool_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__CommandBool__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mavros_msgs__srv__CommandBool_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__CommandBool__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mavros_msgs__srv__CommandBool_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mavros_msgs__srv__CommandBool__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__CommandBool_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__CommandBool_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__CommandBool_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mavros_msgs__srv__CommandBool__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mavros_msgs__srv__CommandBool__TYPE_NAME, 27, 27},
      {mavros_msgs__srv__CommandBool__FIELDS, 3, 3},
    },
    {mavros_msgs__srv__CommandBool__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mavros_msgs__srv__CommandBool_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mavros_msgs__srv__CommandBool_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mavros_msgs__srv__CommandBool_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mavros_msgs__srv__CommandBool_Request__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field mavros_msgs__srv__CommandBool_Request__FIELDS[] = {
  {
    {mavros_msgs__srv__CommandBool_Request__FIELD_NAME__value, 5, 5},
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
mavros_msgs__srv__CommandBool_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mavros_msgs__srv__CommandBool_Request__TYPE_NAME, 35, 35},
      {mavros_msgs__srv__CommandBool_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mavros_msgs__srv__CommandBool_Response__FIELD_NAME__success[] = "success";
static char mavros_msgs__srv__CommandBool_Response__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field mavros_msgs__srv__CommandBool_Response__FIELDS[] = {
  {
    {mavros_msgs__srv__CommandBool_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__CommandBool_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mavros_msgs__srv__CommandBool_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mavros_msgs__srv__CommandBool_Response__TYPE_NAME, 36, 36},
      {mavros_msgs__srv__CommandBool_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mavros_msgs__srv__CommandBool_Event__FIELD_NAME__info[] = "info";
static char mavros_msgs__srv__CommandBool_Event__FIELD_NAME__request[] = "request";
static char mavros_msgs__srv__CommandBool_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mavros_msgs__srv__CommandBool_Event__FIELDS[] = {
  {
    {mavros_msgs__srv__CommandBool_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__CommandBool_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mavros_msgs__srv__CommandBool_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__CommandBool_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mavros_msgs__srv__CommandBool_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mavros_msgs__srv__CommandBool_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__CommandBool_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {mavros_msgs__srv__CommandBool_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mavros_msgs__srv__CommandBool_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mavros_msgs__srv__CommandBool_Event__TYPE_NAME, 33, 33},
      {mavros_msgs__srv__CommandBool_Event__FIELDS, 3, 3},
    },
    {mavros_msgs__srv__CommandBool_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mavros_msgs__srv__CommandBool_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mavros_msgs__srv__CommandBool_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Common type for switch commands\n"
  "\n"
  "bool value\n"
  "---\n"
  "bool success\n"
  "uint8 result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mavros_msgs__srv__CommandBool__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mavros_msgs__srv__CommandBool__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 76, 76},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mavros_msgs__srv__CommandBool_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mavros_msgs__srv__CommandBool_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mavros_msgs__srv__CommandBool_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mavros_msgs__srv__CommandBool_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mavros_msgs__srv__CommandBool_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mavros_msgs__srv__CommandBool_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mavros_msgs__srv__CommandBool__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mavros_msgs__srv__CommandBool__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mavros_msgs__srv__CommandBool_Event__get_individual_type_description_source(NULL);
    sources[3] = *mavros_msgs__srv__CommandBool_Request__get_individual_type_description_source(NULL);
    sources[4] = *mavros_msgs__srv__CommandBool_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mavros_msgs__srv__CommandBool_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mavros_msgs__srv__CommandBool_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mavros_msgs__srv__CommandBool_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mavros_msgs__srv__CommandBool_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mavros_msgs__srv__CommandBool_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mavros_msgs__srv__CommandBool_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mavros_msgs__srv__CommandBool_Request__get_individual_type_description_source(NULL);
    sources[3] = *mavros_msgs__srv__CommandBool_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
