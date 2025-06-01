// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bot_interfaces:srv/ResetCounter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bot_interfaces/srv/reset_counter.h"


#ifndef BOT_INTERFACES__SRV__DETAIL__RESET_COUNTER__STRUCT_H_
#define BOT_INTERFACES__SRV__DETAIL__RESET_COUNTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResetCounter in the package bot_interfaces.
typedef struct bot_interfaces__srv__ResetCounter_Request
{
  int64_t reset_value;
} bot_interfaces__srv__ResetCounter_Request;

// Struct for a sequence of bot_interfaces__srv__ResetCounter_Request.
typedef struct bot_interfaces__srv__ResetCounter_Request__Sequence
{
  bot_interfaces__srv__ResetCounter_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bot_interfaces__srv__ResetCounter_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResetCounter in the package bot_interfaces.
typedef struct bot_interfaces__srv__ResetCounter_Response
{
  bool success;
  rosidl_runtime_c__String message;
} bot_interfaces__srv__ResetCounter_Response;

// Struct for a sequence of bot_interfaces__srv__ResetCounter_Response.
typedef struct bot_interfaces__srv__ResetCounter_Response__Sequence
{
  bot_interfaces__srv__ResetCounter_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bot_interfaces__srv__ResetCounter_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  bot_interfaces__srv__ResetCounter_Event__request__MAX_SIZE = 1
};
// response
enum
{
  bot_interfaces__srv__ResetCounter_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ResetCounter in the package bot_interfaces.
typedef struct bot_interfaces__srv__ResetCounter_Event
{
  service_msgs__msg__ServiceEventInfo info;
  bot_interfaces__srv__ResetCounter_Request__Sequence request;
  bot_interfaces__srv__ResetCounter_Response__Sequence response;
} bot_interfaces__srv__ResetCounter_Event;

// Struct for a sequence of bot_interfaces__srv__ResetCounter_Event.
typedef struct bot_interfaces__srv__ResetCounter_Event__Sequence
{
  bot_interfaces__srv__ResetCounter_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bot_interfaces__srv__ResetCounter_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOT_INTERFACES__SRV__DETAIL__RESET_COUNTER__STRUCT_H_
