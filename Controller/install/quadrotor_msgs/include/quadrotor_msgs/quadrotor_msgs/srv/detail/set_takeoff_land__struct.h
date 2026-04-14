// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:srv/SetTakeoffLand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadrotor_msgs/srv/set_takeoff_land.h"


#ifndef QUADROTOR_MSGS__SRV__DETAIL__SET_TAKEOFF_LAND__STRUCT_H_
#define QUADROTOR_MSGS__SRV__DETAIL__SET_TAKEOFF_LAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetTakeoffLand in the package quadrotor_msgs.
typedef struct quadrotor_msgs__srv__SetTakeoffLand_Request
{
  bool takeoff;
  float takeoff_altitude;
} quadrotor_msgs__srv__SetTakeoffLand_Request;

// Struct for a sequence of quadrotor_msgs__srv__SetTakeoffLand_Request.
typedef struct quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence
{
  quadrotor_msgs__srv__SetTakeoffLand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetTakeoffLand in the package quadrotor_msgs.
typedef struct quadrotor_msgs__srv__SetTakeoffLand_Response
{
  bool res;
} quadrotor_msgs__srv__SetTakeoffLand_Response;

// Struct for a sequence of quadrotor_msgs__srv__SetTakeoffLand_Response.
typedef struct quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence
{
  quadrotor_msgs__srv__SetTakeoffLand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  quadrotor_msgs__srv__SetTakeoffLand_Event__request__MAX_SIZE = 1
};
// response
enum
{
  quadrotor_msgs__srv__SetTakeoffLand_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetTakeoffLand in the package quadrotor_msgs.
typedef struct quadrotor_msgs__srv__SetTakeoffLand_Event
{
  service_msgs__msg__ServiceEventInfo info;
  quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence request;
  quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence response;
} quadrotor_msgs__srv__SetTakeoffLand_Event;

// Struct for a sequence of quadrotor_msgs__srv__SetTakeoffLand_Event.
typedef struct quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence
{
  quadrotor_msgs__srv__SetTakeoffLand_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__SRV__DETAIL__SET_TAKEOFF_LAND__STRUCT_H_
