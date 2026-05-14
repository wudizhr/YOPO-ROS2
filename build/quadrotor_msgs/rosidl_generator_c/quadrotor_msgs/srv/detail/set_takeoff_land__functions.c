// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadrotor_msgs:srv/SetTakeoffLand.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/srv/detail/set_takeoff_land__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
quadrotor_msgs__srv__SetTakeoffLand_Request__init(quadrotor_msgs__srv__SetTakeoffLand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // takeoff
  // takeoff_altitude
  return true;
}

void
quadrotor_msgs__srv__SetTakeoffLand_Request__fini(quadrotor_msgs__srv__SetTakeoffLand_Request * msg)
{
  if (!msg) {
    return;
  }
  // takeoff
  // takeoff_altitude
}

bool
quadrotor_msgs__srv__SetTakeoffLand_Request__are_equal(const quadrotor_msgs__srv__SetTakeoffLand_Request * lhs, const quadrotor_msgs__srv__SetTakeoffLand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // takeoff
  if (lhs->takeoff != rhs->takeoff) {
    return false;
  }
  // takeoff_altitude
  if (lhs->takeoff_altitude != rhs->takeoff_altitude) {
    return false;
  }
  return true;
}

bool
quadrotor_msgs__srv__SetTakeoffLand_Request__copy(
  const quadrotor_msgs__srv__SetTakeoffLand_Request * input,
  quadrotor_msgs__srv__SetTakeoffLand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // takeoff
  output->takeoff = input->takeoff;
  // takeoff_altitude
  output->takeoff_altitude = input->takeoff_altitude;
  return true;
}

quadrotor_msgs__srv__SetTakeoffLand_Request *
quadrotor_msgs__srv__SetTakeoffLand_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__SetTakeoffLand_Request * msg = (quadrotor_msgs__srv__SetTakeoffLand_Request *)allocator.allocate(sizeof(quadrotor_msgs__srv__SetTakeoffLand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__srv__SetTakeoffLand_Request));
  bool success = quadrotor_msgs__srv__SetTakeoffLand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__srv__SetTakeoffLand_Request__destroy(quadrotor_msgs__srv__SetTakeoffLand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__srv__SetTakeoffLand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__init(quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__SetTakeoffLand_Request * data = NULL;

  if (size) {
    data = (quadrotor_msgs__srv__SetTakeoffLand_Request *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__srv__SetTakeoffLand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__srv__SetTakeoffLand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__srv__SetTakeoffLand_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__fini(quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      quadrotor_msgs__srv__SetTakeoffLand_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence *
quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence * array = (quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__destroy(quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__are_equal(const quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence * lhs, const quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__srv__SetTakeoffLand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__copy(
  const quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence * input,
  quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__srv__SetTakeoffLand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__srv__SetTakeoffLand_Request * data =
      (quadrotor_msgs__srv__SetTakeoffLand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__srv__SetTakeoffLand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__srv__SetTakeoffLand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__srv__SetTakeoffLand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
quadrotor_msgs__srv__SetTakeoffLand_Response__init(quadrotor_msgs__srv__SetTakeoffLand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // res
  return true;
}

void
quadrotor_msgs__srv__SetTakeoffLand_Response__fini(quadrotor_msgs__srv__SetTakeoffLand_Response * msg)
{
  if (!msg) {
    return;
  }
  // res
}

bool
quadrotor_msgs__srv__SetTakeoffLand_Response__are_equal(const quadrotor_msgs__srv__SetTakeoffLand_Response * lhs, const quadrotor_msgs__srv__SetTakeoffLand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // res
  if (lhs->res != rhs->res) {
    return false;
  }
  return true;
}

bool
quadrotor_msgs__srv__SetTakeoffLand_Response__copy(
  const quadrotor_msgs__srv__SetTakeoffLand_Response * input,
  quadrotor_msgs__srv__SetTakeoffLand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // res
  output->res = input->res;
  return true;
}

quadrotor_msgs__srv__SetTakeoffLand_Response *
quadrotor_msgs__srv__SetTakeoffLand_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__SetTakeoffLand_Response * msg = (quadrotor_msgs__srv__SetTakeoffLand_Response *)allocator.allocate(sizeof(quadrotor_msgs__srv__SetTakeoffLand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__srv__SetTakeoffLand_Response));
  bool success = quadrotor_msgs__srv__SetTakeoffLand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__srv__SetTakeoffLand_Response__destroy(quadrotor_msgs__srv__SetTakeoffLand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__srv__SetTakeoffLand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__init(quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__SetTakeoffLand_Response * data = NULL;

  if (size) {
    data = (quadrotor_msgs__srv__SetTakeoffLand_Response *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__srv__SetTakeoffLand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__srv__SetTakeoffLand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__srv__SetTakeoffLand_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__fini(quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      quadrotor_msgs__srv__SetTakeoffLand_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence *
quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence * array = (quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__destroy(quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__are_equal(const quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence * lhs, const quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__srv__SetTakeoffLand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__copy(
  const quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence * input,
  quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__srv__SetTakeoffLand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__srv__SetTakeoffLand_Response * data =
      (quadrotor_msgs__srv__SetTakeoffLand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__srv__SetTakeoffLand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__srv__SetTakeoffLand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__srv__SetTakeoffLand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "quadrotor_msgs/srv/detail/set_takeoff_land__functions.h"

bool
quadrotor_msgs__srv__SetTakeoffLand_Event__init(quadrotor_msgs__srv__SetTakeoffLand_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    quadrotor_msgs__srv__SetTakeoffLand_Event__fini(msg);
    return false;
  }
  // request
  if (!quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__init(&msg->request, 0)) {
    quadrotor_msgs__srv__SetTakeoffLand_Event__fini(msg);
    return false;
  }
  // response
  if (!quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__init(&msg->response, 0)) {
    quadrotor_msgs__srv__SetTakeoffLand_Event__fini(msg);
    return false;
  }
  return true;
}

void
quadrotor_msgs__srv__SetTakeoffLand_Event__fini(quadrotor_msgs__srv__SetTakeoffLand_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__fini(&msg->request);
  // response
  quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__fini(&msg->response);
}

bool
quadrotor_msgs__srv__SetTakeoffLand_Event__are_equal(const quadrotor_msgs__srv__SetTakeoffLand_Event * lhs, const quadrotor_msgs__srv__SetTakeoffLand_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
quadrotor_msgs__srv__SetTakeoffLand_Event__copy(
  const quadrotor_msgs__srv__SetTakeoffLand_Event * input,
  quadrotor_msgs__srv__SetTakeoffLand_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!quadrotor_msgs__srv__SetTakeoffLand_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!quadrotor_msgs__srv__SetTakeoffLand_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

quadrotor_msgs__srv__SetTakeoffLand_Event *
quadrotor_msgs__srv__SetTakeoffLand_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__SetTakeoffLand_Event * msg = (quadrotor_msgs__srv__SetTakeoffLand_Event *)allocator.allocate(sizeof(quadrotor_msgs__srv__SetTakeoffLand_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__srv__SetTakeoffLand_Event));
  bool success = quadrotor_msgs__srv__SetTakeoffLand_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__srv__SetTakeoffLand_Event__destroy(quadrotor_msgs__srv__SetTakeoffLand_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__srv__SetTakeoffLand_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence__init(quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__SetTakeoffLand_Event * data = NULL;

  if (size) {
    data = (quadrotor_msgs__srv__SetTakeoffLand_Event *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__srv__SetTakeoffLand_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__srv__SetTakeoffLand_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__srv__SetTakeoffLand_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence__fini(quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      quadrotor_msgs__srv__SetTakeoffLand_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence *
quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence * array = (quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence__destroy(quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence__are_equal(const quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence * lhs, const quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__srv__SetTakeoffLand_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence__copy(
  const quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence * input,
  quadrotor_msgs__srv__SetTakeoffLand_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__srv__SetTakeoffLand_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__srv__SetTakeoffLand_Event * data =
      (quadrotor_msgs__srv__SetTakeoffLand_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__srv__SetTakeoffLand_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__srv__SetTakeoffLand_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__srv__SetTakeoffLand_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
