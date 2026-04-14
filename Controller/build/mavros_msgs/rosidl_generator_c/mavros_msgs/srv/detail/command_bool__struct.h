// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:srv/CommandBool.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mavros_msgs/srv/command_bool.h"


#ifndef MAVROS_MSGS__SRV__DETAIL__COMMAND_BOOL__STRUCT_H_
#define MAVROS_MSGS__SRV__DETAIL__COMMAND_BOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CommandBool in the package mavros_msgs.
typedef struct mavros_msgs__srv__CommandBool_Request
{
  bool value;
} mavros_msgs__srv__CommandBool_Request;

// Struct for a sequence of mavros_msgs__srv__CommandBool_Request.
typedef struct mavros_msgs__srv__CommandBool_Request__Sequence
{
  mavros_msgs__srv__CommandBool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__srv__CommandBool_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CommandBool in the package mavros_msgs.
typedef struct mavros_msgs__srv__CommandBool_Response
{
  bool success;
  uint8_t result;
} mavros_msgs__srv__CommandBool_Response;

// Struct for a sequence of mavros_msgs__srv__CommandBool_Response.
typedef struct mavros_msgs__srv__CommandBool_Response__Sequence
{
  mavros_msgs__srv__CommandBool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__srv__CommandBool_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mavros_msgs__srv__CommandBool_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mavros_msgs__srv__CommandBool_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CommandBool in the package mavros_msgs.
typedef struct mavros_msgs__srv__CommandBool_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mavros_msgs__srv__CommandBool_Request__Sequence request;
  mavros_msgs__srv__CommandBool_Response__Sequence response;
} mavros_msgs__srv__CommandBool_Event;

// Struct for a sequence of mavros_msgs__srv__CommandBool_Event.
typedef struct mavros_msgs__srv__CommandBool_Event__Sequence
{
  mavros_msgs__srv__CommandBool_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__srv__CommandBool_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__SRV__DETAIL__COMMAND_BOOL__STRUCT_H_
