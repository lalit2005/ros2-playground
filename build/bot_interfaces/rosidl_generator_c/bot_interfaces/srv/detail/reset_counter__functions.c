// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bot_interfaces:srv/ResetCounter.idl
// generated code does not contain a copyright notice
#include "bot_interfaces/srv/detail/reset_counter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
bot_interfaces__srv__ResetCounter_Request__init(bot_interfaces__srv__ResetCounter_Request * msg)
{
  if (!msg) {
    return false;
  }
  // reset_value
  return true;
}

void
bot_interfaces__srv__ResetCounter_Request__fini(bot_interfaces__srv__ResetCounter_Request * msg)
{
  if (!msg) {
    return;
  }
  // reset_value
}

bool
bot_interfaces__srv__ResetCounter_Request__are_equal(const bot_interfaces__srv__ResetCounter_Request * lhs, const bot_interfaces__srv__ResetCounter_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reset_value
  if (lhs->reset_value != rhs->reset_value) {
    return false;
  }
  return true;
}

bool
bot_interfaces__srv__ResetCounter_Request__copy(
  const bot_interfaces__srv__ResetCounter_Request * input,
  bot_interfaces__srv__ResetCounter_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // reset_value
  output->reset_value = input->reset_value;
  return true;
}

bot_interfaces__srv__ResetCounter_Request *
bot_interfaces__srv__ResetCounter_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bot_interfaces__srv__ResetCounter_Request * msg = (bot_interfaces__srv__ResetCounter_Request *)allocator.allocate(sizeof(bot_interfaces__srv__ResetCounter_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bot_interfaces__srv__ResetCounter_Request));
  bool success = bot_interfaces__srv__ResetCounter_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bot_interfaces__srv__ResetCounter_Request__destroy(bot_interfaces__srv__ResetCounter_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bot_interfaces__srv__ResetCounter_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bot_interfaces__srv__ResetCounter_Request__Sequence__init(bot_interfaces__srv__ResetCounter_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bot_interfaces__srv__ResetCounter_Request * data = NULL;

  if (size) {
    data = (bot_interfaces__srv__ResetCounter_Request *)allocator.zero_allocate(size, sizeof(bot_interfaces__srv__ResetCounter_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bot_interfaces__srv__ResetCounter_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bot_interfaces__srv__ResetCounter_Request__fini(&data[i - 1]);
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
bot_interfaces__srv__ResetCounter_Request__Sequence__fini(bot_interfaces__srv__ResetCounter_Request__Sequence * array)
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
      bot_interfaces__srv__ResetCounter_Request__fini(&array->data[i]);
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

bot_interfaces__srv__ResetCounter_Request__Sequence *
bot_interfaces__srv__ResetCounter_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bot_interfaces__srv__ResetCounter_Request__Sequence * array = (bot_interfaces__srv__ResetCounter_Request__Sequence *)allocator.allocate(sizeof(bot_interfaces__srv__ResetCounter_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bot_interfaces__srv__ResetCounter_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bot_interfaces__srv__ResetCounter_Request__Sequence__destroy(bot_interfaces__srv__ResetCounter_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bot_interfaces__srv__ResetCounter_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bot_interfaces__srv__ResetCounter_Request__Sequence__are_equal(const bot_interfaces__srv__ResetCounter_Request__Sequence * lhs, const bot_interfaces__srv__ResetCounter_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bot_interfaces__srv__ResetCounter_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bot_interfaces__srv__ResetCounter_Request__Sequence__copy(
  const bot_interfaces__srv__ResetCounter_Request__Sequence * input,
  bot_interfaces__srv__ResetCounter_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bot_interfaces__srv__ResetCounter_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bot_interfaces__srv__ResetCounter_Request * data =
      (bot_interfaces__srv__ResetCounter_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bot_interfaces__srv__ResetCounter_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bot_interfaces__srv__ResetCounter_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bot_interfaces__srv__ResetCounter_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
bot_interfaces__srv__ResetCounter_Response__init(bot_interfaces__srv__ResetCounter_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    bot_interfaces__srv__ResetCounter_Response__fini(msg);
    return false;
  }
  return true;
}

void
bot_interfaces__srv__ResetCounter_Response__fini(bot_interfaces__srv__ResetCounter_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
bot_interfaces__srv__ResetCounter_Response__are_equal(const bot_interfaces__srv__ResetCounter_Response * lhs, const bot_interfaces__srv__ResetCounter_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
bot_interfaces__srv__ResetCounter_Response__copy(
  const bot_interfaces__srv__ResetCounter_Response * input,
  bot_interfaces__srv__ResetCounter_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

bot_interfaces__srv__ResetCounter_Response *
bot_interfaces__srv__ResetCounter_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bot_interfaces__srv__ResetCounter_Response * msg = (bot_interfaces__srv__ResetCounter_Response *)allocator.allocate(sizeof(bot_interfaces__srv__ResetCounter_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bot_interfaces__srv__ResetCounter_Response));
  bool success = bot_interfaces__srv__ResetCounter_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bot_interfaces__srv__ResetCounter_Response__destroy(bot_interfaces__srv__ResetCounter_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bot_interfaces__srv__ResetCounter_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bot_interfaces__srv__ResetCounter_Response__Sequence__init(bot_interfaces__srv__ResetCounter_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bot_interfaces__srv__ResetCounter_Response * data = NULL;

  if (size) {
    data = (bot_interfaces__srv__ResetCounter_Response *)allocator.zero_allocate(size, sizeof(bot_interfaces__srv__ResetCounter_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bot_interfaces__srv__ResetCounter_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bot_interfaces__srv__ResetCounter_Response__fini(&data[i - 1]);
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
bot_interfaces__srv__ResetCounter_Response__Sequence__fini(bot_interfaces__srv__ResetCounter_Response__Sequence * array)
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
      bot_interfaces__srv__ResetCounter_Response__fini(&array->data[i]);
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

bot_interfaces__srv__ResetCounter_Response__Sequence *
bot_interfaces__srv__ResetCounter_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bot_interfaces__srv__ResetCounter_Response__Sequence * array = (bot_interfaces__srv__ResetCounter_Response__Sequence *)allocator.allocate(sizeof(bot_interfaces__srv__ResetCounter_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bot_interfaces__srv__ResetCounter_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bot_interfaces__srv__ResetCounter_Response__Sequence__destroy(bot_interfaces__srv__ResetCounter_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bot_interfaces__srv__ResetCounter_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bot_interfaces__srv__ResetCounter_Response__Sequence__are_equal(const bot_interfaces__srv__ResetCounter_Response__Sequence * lhs, const bot_interfaces__srv__ResetCounter_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bot_interfaces__srv__ResetCounter_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bot_interfaces__srv__ResetCounter_Response__Sequence__copy(
  const bot_interfaces__srv__ResetCounter_Response__Sequence * input,
  bot_interfaces__srv__ResetCounter_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bot_interfaces__srv__ResetCounter_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bot_interfaces__srv__ResetCounter_Response * data =
      (bot_interfaces__srv__ResetCounter_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bot_interfaces__srv__ResetCounter_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bot_interfaces__srv__ResetCounter_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bot_interfaces__srv__ResetCounter_Response__copy(
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
// #include "bot_interfaces/srv/detail/reset_counter__functions.h"

bool
bot_interfaces__srv__ResetCounter_Event__init(bot_interfaces__srv__ResetCounter_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    bot_interfaces__srv__ResetCounter_Event__fini(msg);
    return false;
  }
  // request
  if (!bot_interfaces__srv__ResetCounter_Request__Sequence__init(&msg->request, 0)) {
    bot_interfaces__srv__ResetCounter_Event__fini(msg);
    return false;
  }
  // response
  if (!bot_interfaces__srv__ResetCounter_Response__Sequence__init(&msg->response, 0)) {
    bot_interfaces__srv__ResetCounter_Event__fini(msg);
    return false;
  }
  return true;
}

void
bot_interfaces__srv__ResetCounter_Event__fini(bot_interfaces__srv__ResetCounter_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  bot_interfaces__srv__ResetCounter_Request__Sequence__fini(&msg->request);
  // response
  bot_interfaces__srv__ResetCounter_Response__Sequence__fini(&msg->response);
}

bool
bot_interfaces__srv__ResetCounter_Event__are_equal(const bot_interfaces__srv__ResetCounter_Event * lhs, const bot_interfaces__srv__ResetCounter_Event * rhs)
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
  if (!bot_interfaces__srv__ResetCounter_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!bot_interfaces__srv__ResetCounter_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
bot_interfaces__srv__ResetCounter_Event__copy(
  const bot_interfaces__srv__ResetCounter_Event * input,
  bot_interfaces__srv__ResetCounter_Event * output)
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
  if (!bot_interfaces__srv__ResetCounter_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!bot_interfaces__srv__ResetCounter_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

bot_interfaces__srv__ResetCounter_Event *
bot_interfaces__srv__ResetCounter_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bot_interfaces__srv__ResetCounter_Event * msg = (bot_interfaces__srv__ResetCounter_Event *)allocator.allocate(sizeof(bot_interfaces__srv__ResetCounter_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bot_interfaces__srv__ResetCounter_Event));
  bool success = bot_interfaces__srv__ResetCounter_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bot_interfaces__srv__ResetCounter_Event__destroy(bot_interfaces__srv__ResetCounter_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bot_interfaces__srv__ResetCounter_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bot_interfaces__srv__ResetCounter_Event__Sequence__init(bot_interfaces__srv__ResetCounter_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bot_interfaces__srv__ResetCounter_Event * data = NULL;

  if (size) {
    data = (bot_interfaces__srv__ResetCounter_Event *)allocator.zero_allocate(size, sizeof(bot_interfaces__srv__ResetCounter_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bot_interfaces__srv__ResetCounter_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bot_interfaces__srv__ResetCounter_Event__fini(&data[i - 1]);
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
bot_interfaces__srv__ResetCounter_Event__Sequence__fini(bot_interfaces__srv__ResetCounter_Event__Sequence * array)
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
      bot_interfaces__srv__ResetCounter_Event__fini(&array->data[i]);
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

bot_interfaces__srv__ResetCounter_Event__Sequence *
bot_interfaces__srv__ResetCounter_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bot_interfaces__srv__ResetCounter_Event__Sequence * array = (bot_interfaces__srv__ResetCounter_Event__Sequence *)allocator.allocate(sizeof(bot_interfaces__srv__ResetCounter_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bot_interfaces__srv__ResetCounter_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bot_interfaces__srv__ResetCounter_Event__Sequence__destroy(bot_interfaces__srv__ResetCounter_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bot_interfaces__srv__ResetCounter_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bot_interfaces__srv__ResetCounter_Event__Sequence__are_equal(const bot_interfaces__srv__ResetCounter_Event__Sequence * lhs, const bot_interfaces__srv__ResetCounter_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bot_interfaces__srv__ResetCounter_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bot_interfaces__srv__ResetCounter_Event__Sequence__copy(
  const bot_interfaces__srv__ResetCounter_Event__Sequence * input,
  bot_interfaces__srv__ResetCounter_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bot_interfaces__srv__ResetCounter_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bot_interfaces__srv__ResetCounter_Event * data =
      (bot_interfaces__srv__ResetCounter_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bot_interfaces__srv__ResetCounter_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bot_interfaces__srv__ResetCounter_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bot_interfaces__srv__ResetCounter_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
