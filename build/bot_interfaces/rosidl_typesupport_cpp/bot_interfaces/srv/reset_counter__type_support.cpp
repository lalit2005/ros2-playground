// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from bot_interfaces:srv/ResetCounter.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "bot_interfaces/srv/detail/reset_counter__functions.h"
#include "bot_interfaces/srv/detail/reset_counter__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace bot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ResetCounter_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetCounter_Request_type_support_ids_t;

static const _ResetCounter_Request_type_support_ids_t _ResetCounter_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ResetCounter_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetCounter_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetCounter_Request_type_support_symbol_names_t _ResetCounter_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bot_interfaces, srv, ResetCounter_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bot_interfaces, srv, ResetCounter_Request)),
  }
};

typedef struct _ResetCounter_Request_type_support_data_t
{
  void * data[2];
} _ResetCounter_Request_type_support_data_t;

static _ResetCounter_Request_type_support_data_t _ResetCounter_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetCounter_Request_message_typesupport_map = {
  2,
  "bot_interfaces",
  &_ResetCounter_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ResetCounter_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ResetCounter_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetCounter_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetCounter_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bot_interfaces__srv__ResetCounter_Request__get_type_hash,
  &bot_interfaces__srv__ResetCounter_Request__get_type_description,
  &bot_interfaces__srv__ResetCounter_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bot_interfaces::srv::ResetCounter_Request>()
{
  return &::bot_interfaces::srv::rosidl_typesupport_cpp::ResetCounter_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bot_interfaces, srv, ResetCounter_Request)() {
  return get_message_type_support_handle<bot_interfaces::srv::ResetCounter_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__functions.h"
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ResetCounter_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetCounter_Response_type_support_ids_t;

static const _ResetCounter_Response_type_support_ids_t _ResetCounter_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ResetCounter_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetCounter_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetCounter_Response_type_support_symbol_names_t _ResetCounter_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bot_interfaces, srv, ResetCounter_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bot_interfaces, srv, ResetCounter_Response)),
  }
};

typedef struct _ResetCounter_Response_type_support_data_t
{
  void * data[2];
} _ResetCounter_Response_type_support_data_t;

static _ResetCounter_Response_type_support_data_t _ResetCounter_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetCounter_Response_message_typesupport_map = {
  2,
  "bot_interfaces",
  &_ResetCounter_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ResetCounter_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ResetCounter_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetCounter_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetCounter_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bot_interfaces__srv__ResetCounter_Response__get_type_hash,
  &bot_interfaces__srv__ResetCounter_Response__get_type_description,
  &bot_interfaces__srv__ResetCounter_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bot_interfaces::srv::ResetCounter_Response>()
{
  return &::bot_interfaces::srv::rosidl_typesupport_cpp::ResetCounter_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bot_interfaces, srv, ResetCounter_Response)() {
  return get_message_type_support_handle<bot_interfaces::srv::ResetCounter_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__functions.h"
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ResetCounter_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetCounter_Event_type_support_ids_t;

static const _ResetCounter_Event_type_support_ids_t _ResetCounter_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ResetCounter_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetCounter_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetCounter_Event_type_support_symbol_names_t _ResetCounter_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bot_interfaces, srv, ResetCounter_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bot_interfaces, srv, ResetCounter_Event)),
  }
};

typedef struct _ResetCounter_Event_type_support_data_t
{
  void * data[2];
} _ResetCounter_Event_type_support_data_t;

static _ResetCounter_Event_type_support_data_t _ResetCounter_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetCounter_Event_message_typesupport_map = {
  2,
  "bot_interfaces",
  &_ResetCounter_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ResetCounter_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ResetCounter_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetCounter_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetCounter_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bot_interfaces__srv__ResetCounter_Event__get_type_hash,
  &bot_interfaces__srv__ResetCounter_Event__get_type_description,
  &bot_interfaces__srv__ResetCounter_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bot_interfaces::srv::ResetCounter_Event>()
{
  return &::bot_interfaces::srv::rosidl_typesupport_cpp::ResetCounter_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bot_interfaces, srv, ResetCounter_Event)() {
  return get_message_type_support_handle<bot_interfaces::srv::ResetCounter_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "bot_interfaces/srv/detail/reset_counter__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ResetCounter_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetCounter_type_support_ids_t;

static const _ResetCounter_type_support_ids_t _ResetCounter_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ResetCounter_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetCounter_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetCounter_type_support_symbol_names_t _ResetCounter_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bot_interfaces, srv, ResetCounter)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bot_interfaces, srv, ResetCounter)),
  }
};

typedef struct _ResetCounter_type_support_data_t
{
  void * data[2];
} _ResetCounter_type_support_data_t;

static _ResetCounter_type_support_data_t _ResetCounter_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetCounter_service_typesupport_map = {
  2,
  "bot_interfaces",
  &_ResetCounter_service_typesupport_ids.typesupport_identifier[0],
  &_ResetCounter_service_typesupport_symbol_names.symbol_name[0],
  &_ResetCounter_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ResetCounter_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetCounter_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bot_interfaces::srv::ResetCounter_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bot_interfaces::srv::ResetCounter_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bot_interfaces::srv::ResetCounter_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<bot_interfaces::srv::ResetCounter>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<bot_interfaces::srv::ResetCounter>,
  &bot_interfaces__srv__ResetCounter__get_type_hash,
  &bot_interfaces__srv__ResetCounter__get_type_description,
  &bot_interfaces__srv__ResetCounter__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<bot_interfaces::srv::ResetCounter>()
{
  return &::bot_interfaces::srv::rosidl_typesupport_cpp::ResetCounter_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, bot_interfaces, srv, ResetCounter)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<bot_interfaces::srv::ResetCounter>();
}

#ifdef __cplusplus
}
#endif
