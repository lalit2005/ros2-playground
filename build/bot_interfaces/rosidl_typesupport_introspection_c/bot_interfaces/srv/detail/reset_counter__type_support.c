// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bot_interfaces:srv/ResetCounter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bot_interfaces/srv/detail/reset_counter__rosidl_typesupport_introspection_c.h"
#include "bot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bot_interfaces/srv/detail/reset_counter__functions.h"
#include "bot_interfaces/srv/detail/reset_counter__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bot_interfaces__srv__ResetCounter_Request__init(message_memory);
}

void bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_fini_function(void * message_memory)
{
  bot_interfaces__srv__ResetCounter_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_message_member_array[1] = {
  {
    "reset_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bot_interfaces__srv__ResetCounter_Request, reset_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_message_members = {
  "bot_interfaces__srv",  // message namespace
  "ResetCounter_Request",  // message name
  1,  // number of fields
  sizeof(bot_interfaces__srv__ResetCounter_Request),
  false,  // has_any_key_member_
  bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_message_member_array,  // message members
  bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_message_type_support_handle = {
  0,
  &bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_message_members,
  get_message_typesupport_handle_function,
  &bot_interfaces__srv__ResetCounter_Request__get_type_hash,
  &bot_interfaces__srv__ResetCounter_Request__get_type_description,
  &bot_interfaces__srv__ResetCounter_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bot_interfaces, srv, ResetCounter_Request)() {
  if (!bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_message_type_support_handle.typesupport_identifier) {
    bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__functions.h"
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bot_interfaces__srv__ResetCounter_Response__init(message_memory);
}

void bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_fini_function(void * message_memory)
{
  bot_interfaces__srv__ResetCounter_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bot_interfaces__srv__ResetCounter_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bot_interfaces__srv__ResetCounter_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_message_members = {
  "bot_interfaces__srv",  // message namespace
  "ResetCounter_Response",  // message name
  2,  // number of fields
  sizeof(bot_interfaces__srv__ResetCounter_Response),
  false,  // has_any_key_member_
  bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_message_member_array,  // message members
  bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_message_type_support_handle = {
  0,
  &bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_message_members,
  get_message_typesupport_handle_function,
  &bot_interfaces__srv__ResetCounter_Response__get_type_hash,
  &bot_interfaces__srv__ResetCounter_Response__get_type_description,
  &bot_interfaces__srv__ResetCounter_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bot_interfaces, srv, ResetCounter_Response)() {
  if (!bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_message_type_support_handle.typesupport_identifier) {
    bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__functions.h"
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "bot_interfaces/srv/reset_counter.h"
// Member `request`
// Member `response`
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bot_interfaces__srv__ResetCounter_Event__init(message_memory);
}

void bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_fini_function(void * message_memory)
{
  bot_interfaces__srv__ResetCounter_Event__fini(message_memory);
}

size_t bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__size_function__ResetCounter_Event__request(
  const void * untyped_member)
{
  const bot_interfaces__srv__ResetCounter_Request__Sequence * member =
    (const bot_interfaces__srv__ResetCounter_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__get_const_function__ResetCounter_Event__request(
  const void * untyped_member, size_t index)
{
  const bot_interfaces__srv__ResetCounter_Request__Sequence * member =
    (const bot_interfaces__srv__ResetCounter_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__get_function__ResetCounter_Event__request(
  void * untyped_member, size_t index)
{
  bot_interfaces__srv__ResetCounter_Request__Sequence * member =
    (bot_interfaces__srv__ResetCounter_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__fetch_function__ResetCounter_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bot_interfaces__srv__ResetCounter_Request * item =
    ((const bot_interfaces__srv__ResetCounter_Request *)
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__get_const_function__ResetCounter_Event__request(untyped_member, index));
  bot_interfaces__srv__ResetCounter_Request * value =
    (bot_interfaces__srv__ResetCounter_Request *)(untyped_value);
  *value = *item;
}

void bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__assign_function__ResetCounter_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bot_interfaces__srv__ResetCounter_Request * item =
    ((bot_interfaces__srv__ResetCounter_Request *)
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__get_function__ResetCounter_Event__request(untyped_member, index));
  const bot_interfaces__srv__ResetCounter_Request * value =
    (const bot_interfaces__srv__ResetCounter_Request *)(untyped_value);
  *item = *value;
}

bool bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__resize_function__ResetCounter_Event__request(
  void * untyped_member, size_t size)
{
  bot_interfaces__srv__ResetCounter_Request__Sequence * member =
    (bot_interfaces__srv__ResetCounter_Request__Sequence *)(untyped_member);
  bot_interfaces__srv__ResetCounter_Request__Sequence__fini(member);
  return bot_interfaces__srv__ResetCounter_Request__Sequence__init(member, size);
}

size_t bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__size_function__ResetCounter_Event__response(
  const void * untyped_member)
{
  const bot_interfaces__srv__ResetCounter_Response__Sequence * member =
    (const bot_interfaces__srv__ResetCounter_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__get_const_function__ResetCounter_Event__response(
  const void * untyped_member, size_t index)
{
  const bot_interfaces__srv__ResetCounter_Response__Sequence * member =
    (const bot_interfaces__srv__ResetCounter_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__get_function__ResetCounter_Event__response(
  void * untyped_member, size_t index)
{
  bot_interfaces__srv__ResetCounter_Response__Sequence * member =
    (bot_interfaces__srv__ResetCounter_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__fetch_function__ResetCounter_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bot_interfaces__srv__ResetCounter_Response * item =
    ((const bot_interfaces__srv__ResetCounter_Response *)
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__get_const_function__ResetCounter_Event__response(untyped_member, index));
  bot_interfaces__srv__ResetCounter_Response * value =
    (bot_interfaces__srv__ResetCounter_Response *)(untyped_value);
  *value = *item;
}

void bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__assign_function__ResetCounter_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bot_interfaces__srv__ResetCounter_Response * item =
    ((bot_interfaces__srv__ResetCounter_Response *)
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__get_function__ResetCounter_Event__response(untyped_member, index));
  const bot_interfaces__srv__ResetCounter_Response * value =
    (const bot_interfaces__srv__ResetCounter_Response *)(untyped_value);
  *item = *value;
}

bool bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__resize_function__ResetCounter_Event__response(
  void * untyped_member, size_t size)
{
  bot_interfaces__srv__ResetCounter_Response__Sequence * member =
    (bot_interfaces__srv__ResetCounter_Response__Sequence *)(untyped_member);
  bot_interfaces__srv__ResetCounter_Response__Sequence__fini(member);
  return bot_interfaces__srv__ResetCounter_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bot_interfaces__srv__ResetCounter_Event, info),  // bytes offset in struct
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
    offsetof(bot_interfaces__srv__ResetCounter_Event, request),  // bytes offset in struct
    NULL,  // default value
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__size_function__ResetCounter_Event__request,  // size() function pointer
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__get_const_function__ResetCounter_Event__request,  // get_const(index) function pointer
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__get_function__ResetCounter_Event__request,  // get(index) function pointer
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__fetch_function__ResetCounter_Event__request,  // fetch(index, &value) function pointer
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__assign_function__ResetCounter_Event__request,  // assign(index, value) function pointer
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__resize_function__ResetCounter_Event__request  // resize(index) function pointer
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
    offsetof(bot_interfaces__srv__ResetCounter_Event, response),  // bytes offset in struct
    NULL,  // default value
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__size_function__ResetCounter_Event__response,  // size() function pointer
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__get_const_function__ResetCounter_Event__response,  // get_const(index) function pointer
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__get_function__ResetCounter_Event__response,  // get(index) function pointer
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__fetch_function__ResetCounter_Event__response,  // fetch(index, &value) function pointer
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__assign_function__ResetCounter_Event__response,  // assign(index, value) function pointer
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__resize_function__ResetCounter_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_message_members = {
  "bot_interfaces__srv",  // message namespace
  "ResetCounter_Event",  // message name
  3,  // number of fields
  sizeof(bot_interfaces__srv__ResetCounter_Event),
  false,  // has_any_key_member_
  bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_message_member_array,  // message members
  bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_message_type_support_handle = {
  0,
  &bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_message_members,
  get_message_typesupport_handle_function,
  &bot_interfaces__srv__ResetCounter_Event__get_type_hash,
  &bot_interfaces__srv__ResetCounter_Event__get_type_description,
  &bot_interfaces__srv__ResetCounter_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bot_interfaces, srv, ResetCounter_Event)() {
  bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bot_interfaces, srv, ResetCounter_Request)();
  bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bot_interfaces, srv, ResetCounter_Response)();
  if (!bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_message_type_support_handle.typesupport_identifier) {
    bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers bot_interfaces__srv__detail__reset_counter__rosidl_typesupport_introspection_c__ResetCounter_service_members = {
  "bot_interfaces__srv",  // service namespace
  "ResetCounter",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // bot_interfaces__srv__detail__reset_counter__rosidl_typesupport_introspection_c__ResetCounter_Request_message_type_support_handle,
  NULL,  // response message
  // bot_interfaces__srv__detail__reset_counter__rosidl_typesupport_introspection_c__ResetCounter_Response_message_type_support_handle
  NULL  // event_message
  // bot_interfaces__srv__detail__reset_counter__rosidl_typesupport_introspection_c__ResetCounter_Response_message_type_support_handle
};


static rosidl_service_type_support_t bot_interfaces__srv__detail__reset_counter__rosidl_typesupport_introspection_c__ResetCounter_service_type_support_handle = {
  0,
  &bot_interfaces__srv__detail__reset_counter__rosidl_typesupport_introspection_c__ResetCounter_service_members,
  get_service_typesupport_handle_function,
  &bot_interfaces__srv__ResetCounter_Request__rosidl_typesupport_introspection_c__ResetCounter_Request_message_type_support_handle,
  &bot_interfaces__srv__ResetCounter_Response__rosidl_typesupport_introspection_c__ResetCounter_Response_message_type_support_handle,
  &bot_interfaces__srv__ResetCounter_Event__rosidl_typesupport_introspection_c__ResetCounter_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    bot_interfaces,
    srv,
    ResetCounter
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    bot_interfaces,
    srv,
    ResetCounter
  ),
  &bot_interfaces__srv__ResetCounter__get_type_hash,
  &bot_interfaces__srv__ResetCounter__get_type_description,
  &bot_interfaces__srv__ResetCounter__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bot_interfaces, srv, ResetCounter_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bot_interfaces, srv, ResetCounter_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bot_interfaces, srv, ResetCounter_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bot_interfaces, srv, ResetCounter)(void) {
  if (!bot_interfaces__srv__detail__reset_counter__rosidl_typesupport_introspection_c__ResetCounter_service_type_support_handle.typesupport_identifier) {
    bot_interfaces__srv__detail__reset_counter__rosidl_typesupport_introspection_c__ResetCounter_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)bot_interfaces__srv__detail__reset_counter__rosidl_typesupport_introspection_c__ResetCounter_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bot_interfaces, srv, ResetCounter_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bot_interfaces, srv, ResetCounter_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bot_interfaces, srv, ResetCounter_Event)()->data;
  }

  return &bot_interfaces__srv__detail__reset_counter__rosidl_typesupport_introspection_c__ResetCounter_service_type_support_handle;
}
