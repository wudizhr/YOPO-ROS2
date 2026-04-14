// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quadrotor_msgs:srv/SetTakeoffLand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quadrotor_msgs/srv/detail/set_takeoff_land__rosidl_typesupport_introspection_c.h"
#include "quadrotor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quadrotor_msgs/srv/detail/set_takeoff_land__functions.h"
#include "quadrotor_msgs/srv/detail/set_takeoff_land__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadrotor_msgs__srv__SetTakeoffLand_Request__init(message_memory);
}

void quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_fini_function(void * message_memory)
{
  quadrotor_msgs__srv__SetTakeoffLand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_message_member_array[2] = {
  {
    "takeoff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__srv__SetTakeoffLand_Request, takeoff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "takeoff_altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__srv__SetTakeoffLand_Request, takeoff_altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_message_members = {
  "quadrotor_msgs__srv",  // message namespace
  "SetTakeoffLand_Request",  // message name
  2,  // number of fields
  sizeof(quadrotor_msgs__srv__SetTakeoffLand_Request),
  false,  // has_any_key_member_
  quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_message_member_array,  // message members
  quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_message_type_support_handle = {
  0,
  &quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_message_members,
  get_message_typesupport_handle_function,
  &quadrotor_msgs__srv__SetTakeoffLand_Request__get_type_hash,
  &quadrotor_msgs__srv__SetTakeoffLand_Request__get_type_description,
  &quadrotor_msgs__srv__SetTakeoffLand_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadrotor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, srv, SetTakeoffLand_Request)() {
  if (!quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_message_type_support_handle.typesupport_identifier) {
    quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "quadrotor_msgs/srv/detail/set_takeoff_land__rosidl_typesupport_introspection_c.h"
// already included above
// #include "quadrotor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "quadrotor_msgs/srv/detail/set_takeoff_land__functions.h"
// already included above
// #include "quadrotor_msgs/srv/detail/set_takeoff_land__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadrotor_msgs__srv__SetTakeoffLand_Response__init(message_memory);
}

void quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_fini_function(void * message_memory)
{
  quadrotor_msgs__srv__SetTakeoffLand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_message_member_array[1] = {
  {
    "res",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__srv__SetTakeoffLand_Response, res),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_message_members = {
  "quadrotor_msgs__srv",  // message namespace
  "SetTakeoffLand_Response",  // message name
  1,  // number of fields
  sizeof(quadrotor_msgs__srv__SetTakeoffLand_Response),
  false,  // has_any_key_member_
  quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_message_member_array,  // message members
  quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_message_type_support_handle = {
  0,
  &quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_message_members,
  get_message_typesupport_handle_function,
  &quadrotor_msgs__srv__SetTakeoffLand_Response__get_type_hash,
  &quadrotor_msgs__srv__SetTakeoffLand_Response__get_type_description,
  &quadrotor_msgs__srv__SetTakeoffLand_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadrotor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, srv, SetTakeoffLand_Response)() {
  if (!quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_message_type_support_handle.typesupport_identifier) {
    quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "quadrotor_msgs/srv/detail/set_takeoff_land__rosidl_typesupport_introspection_c.h"
// already included above
// #include "quadrotor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "quadrotor_msgs/srv/detail/set_takeoff_land__functions.h"
// already included above
// #include "quadrotor_msgs/srv/detail/set_takeoff_land__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "quadrotor_msgs/srv/set_takeoff_land.h"
// Member `request`
// Member `response`
// already included above
// #include "quadrotor_msgs/srv/detail/set_takeoff_land__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadrotor_msgs__srv__SetTakeoffLand_Event__init(message_memory);
}

void quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_fini_function(void * message_memory)
{
  quadrotor_msgs__srv__SetTakeoffLand_Event__fini(message_memory);
}

size_t quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__size_function__SetTakeoffLand_Event__request(
  const void * untyped_member)
{
  const quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence * member =
    (const quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__get_const_function__SetTakeoffLand_Event__request(
  const void * untyped_member, size_t index)
{
  const quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence * member =
    (const quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__get_function__SetTakeoffLand_Event__request(
  void * untyped_member, size_t index)
{
  quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence * member =
    (quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__fetch_function__SetTakeoffLand_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const quadrotor_msgs__srv__SetTakeoffLand_Request * item =
    ((const quadrotor_msgs__srv__SetTakeoffLand_Request *)
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__get_const_function__SetTakeoffLand_Event__request(untyped_member, index));
  quadrotor_msgs__srv__SetTakeoffLand_Request * value =
    (quadrotor_msgs__srv__SetTakeoffLand_Request *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__assign_function__SetTakeoffLand_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  quadrotor_msgs__srv__SetTakeoffLand_Request * item =
    ((quadrotor_msgs__srv__SetTakeoffLand_Request *)
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__get_function__SetTakeoffLand_Event__request(untyped_member, index));
  const quadrotor_msgs__srv__SetTakeoffLand_Request * value =
    (const quadrotor_msgs__srv__SetTakeoffLand_Request *)(untyped_value);
  *item = *value;
}

bool quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__resize_function__SetTakeoffLand_Event__request(
  void * untyped_member, size_t size)
{
  quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence * member =
    (quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence *)(untyped_member);
  quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__fini(member);
  return quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__init(member, size);
}

size_t quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__size_function__SetTakeoffLand_Event__response(
  const void * untyped_member)
{
  const quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence * member =
    (const quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__get_const_function__SetTakeoffLand_Event__response(
  const void * untyped_member, size_t index)
{
  const quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence * member =
    (const quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__get_function__SetTakeoffLand_Event__response(
  void * untyped_member, size_t index)
{
  quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence * member =
    (quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__fetch_function__SetTakeoffLand_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const quadrotor_msgs__srv__SetTakeoffLand_Response * item =
    ((const quadrotor_msgs__srv__SetTakeoffLand_Response *)
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__get_const_function__SetTakeoffLand_Event__response(untyped_member, index));
  quadrotor_msgs__srv__SetTakeoffLand_Response * value =
    (quadrotor_msgs__srv__SetTakeoffLand_Response *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__assign_function__SetTakeoffLand_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  quadrotor_msgs__srv__SetTakeoffLand_Response * item =
    ((quadrotor_msgs__srv__SetTakeoffLand_Response *)
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__get_function__SetTakeoffLand_Event__response(untyped_member, index));
  const quadrotor_msgs__srv__SetTakeoffLand_Response * value =
    (const quadrotor_msgs__srv__SetTakeoffLand_Response *)(untyped_value);
  *item = *value;
}

bool quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__resize_function__SetTakeoffLand_Event__response(
  void * untyped_member, size_t size)
{
  quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence * member =
    (quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence *)(untyped_member);
  quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__fini(member);
  return quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__srv__SetTakeoffLand_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(quadrotor_msgs__srv__SetTakeoffLand_Event, request),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__size_function__SetTakeoffLand_Event__request,  // size() function pointer
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__get_const_function__SetTakeoffLand_Event__request,  // get_const(index) function pointer
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__get_function__SetTakeoffLand_Event__request,  // get(index) function pointer
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__fetch_function__SetTakeoffLand_Event__request,  // fetch(index, &value) function pointer
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__assign_function__SetTakeoffLand_Event__request,  // assign(index, value) function pointer
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__resize_function__SetTakeoffLand_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(quadrotor_msgs__srv__SetTakeoffLand_Event, response),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__size_function__SetTakeoffLand_Event__response,  // size() function pointer
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__get_const_function__SetTakeoffLand_Event__response,  // get_const(index) function pointer
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__get_function__SetTakeoffLand_Event__response,  // get(index) function pointer
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__fetch_function__SetTakeoffLand_Event__response,  // fetch(index, &value) function pointer
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__assign_function__SetTakeoffLand_Event__response,  // assign(index, value) function pointer
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__resize_function__SetTakeoffLand_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_message_members = {
  "quadrotor_msgs__srv",  // message namespace
  "SetTakeoffLand_Event",  // message name
  3,  // number of fields
  sizeof(quadrotor_msgs__srv__SetTakeoffLand_Event),
  false,  // has_any_key_member_
  quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_message_member_array,  // message members
  quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_message_type_support_handle = {
  0,
  &quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_message_members,
  get_message_typesupport_handle_function,
  &quadrotor_msgs__srv__SetTakeoffLand_Event__get_type_hash,
  &quadrotor_msgs__srv__SetTakeoffLand_Event__get_type_description,
  &quadrotor_msgs__srv__SetTakeoffLand_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadrotor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, srv, SetTakeoffLand_Event)() {
  quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, srv, SetTakeoffLand_Request)();
  quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, srv, SetTakeoffLand_Response)();
  if (!quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_message_type_support_handle.typesupport_identifier) {
    quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "quadrotor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "quadrotor_msgs/srv/detail/set_takeoff_land__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers quadrotor_msgs__srv__detail__set_takeoff_land__rosidl_typesupport_introspection_c__SetTakeoffLand_service_members = {
  "quadrotor_msgs__srv",  // service namespace
  "SetTakeoffLand",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // quadrotor_msgs__srv__detail__set_takeoff_land__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_message_type_support_handle,
  NULL,  // response message
  // quadrotor_msgs__srv__detail__set_takeoff_land__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_message_type_support_handle
  NULL  // event_message
  // quadrotor_msgs__srv__detail__set_takeoff_land__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_message_type_support_handle
};


static rosidl_service_type_support_t quadrotor_msgs__srv__detail__set_takeoff_land__rosidl_typesupport_introspection_c__SetTakeoffLand_service_type_support_handle = {
  0,
  &quadrotor_msgs__srv__detail__set_takeoff_land__rosidl_typesupport_introspection_c__SetTakeoffLand_service_members,
  get_service_typesupport_handle_function,
  &quadrotor_msgs__srv__SetTakeoffLand_Request__rosidl_typesupport_introspection_c__SetTakeoffLand_Request_message_type_support_handle,
  &quadrotor_msgs__srv__SetTakeoffLand_Response__rosidl_typesupport_introspection_c__SetTakeoffLand_Response_message_type_support_handle,
  &quadrotor_msgs__srv__SetTakeoffLand_Event__rosidl_typesupport_introspection_c__SetTakeoffLand_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    quadrotor_msgs,
    srv,
    SetTakeoffLand
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    quadrotor_msgs,
    srv,
    SetTakeoffLand
  ),
  &quadrotor_msgs__srv__SetTakeoffLand__get_type_hash,
  &quadrotor_msgs__srv__SetTakeoffLand__get_type_description,
  &quadrotor_msgs__srv__SetTakeoffLand__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, srv, SetTakeoffLand_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, srv, SetTakeoffLand_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, srv, SetTakeoffLand_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadrotor_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, srv, SetTakeoffLand)(void) {
  if (!quadrotor_msgs__srv__detail__set_takeoff_land__rosidl_typesupport_introspection_c__SetTakeoffLand_service_type_support_handle.typesupport_identifier) {
    quadrotor_msgs__srv__detail__set_takeoff_land__rosidl_typesupport_introspection_c__SetTakeoffLand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)quadrotor_msgs__srv__detail__set_takeoff_land__rosidl_typesupport_introspection_c__SetTakeoffLand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, srv, SetTakeoffLand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, srv, SetTakeoffLand_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, srv, SetTakeoffLand_Event)()->data;
  }

  return &quadrotor_msgs__srv__detail__set_takeoff_land__rosidl_typesupport_introspection_c__SetTakeoffLand_service_type_support_handle;
}
