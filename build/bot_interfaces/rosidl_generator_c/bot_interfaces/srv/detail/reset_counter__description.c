// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from bot_interfaces:srv/ResetCounter.idl
// generated code does not contain a copyright notice

#include "bot_interfaces/srv/detail/reset_counter__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_bot_interfaces
const rosidl_type_hash_t *
bot_interfaces__srv__ResetCounter__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0x58, 0x14, 0x03, 0x94, 0x8d, 0x21, 0x00,
      0xf7, 0xce, 0xdc, 0x4d, 0x34, 0xd3, 0xa6, 0x92,
      0x79, 0x0e, 0x8a, 0xf6, 0x49, 0x8d, 0xce, 0x17,
      0xa9, 0x0d, 0x50, 0x77, 0x87, 0x2a, 0xec, 0xed,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bot_interfaces
const rosidl_type_hash_t *
bot_interfaces__srv__ResetCounter_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0x1b, 0x83, 0xc8, 0x55, 0x4f, 0x8b, 0x5d,
      0x6f, 0x8d, 0x64, 0x54, 0xc5, 0xcc, 0x79, 0x85,
      0x91, 0xf6, 0xbd, 0xb7, 0x06, 0x44, 0x98, 0x10,
      0xb2, 0xde, 0x31, 0xdc, 0xce, 0xb2, 0xa8, 0xce,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bot_interfaces
const rosidl_type_hash_t *
bot_interfaces__srv__ResetCounter_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4e, 0x82, 0x43, 0x8f, 0x06, 0x69, 0x05, 0x58,
      0xc6, 0x5e, 0x09, 0xab, 0x7c, 0xd8, 0x73, 0x77,
      0x38, 0x1c, 0x82, 0x73, 0x78, 0x3d, 0xe9, 0xba,
      0xc1, 0x7b, 0x55, 0x52, 0x26, 0x5f, 0x11, 0xe9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bot_interfaces
const rosidl_type_hash_t *
bot_interfaces__srv__ResetCounter_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x69, 0x81, 0xf1, 0x49, 0xd0, 0x5d, 0x3c, 0x11,
      0x76, 0x68, 0xa8, 0x62, 0xd5, 0x56, 0xa1, 0xf7,
      0x31, 0x6d, 0xd1, 0x9a, 0x52, 0x43, 0xfd, 0xbf,
      0x35, 0xbf, 0x24, 0x56, 0xb3, 0xd2, 0xfa, 0xc4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

static char bot_interfaces__srv__ResetCounter__TYPE_NAME[] = "bot_interfaces/srv/ResetCounter";
static char bot_interfaces__srv__ResetCounter_Event__TYPE_NAME[] = "bot_interfaces/srv/ResetCounter_Event";
static char bot_interfaces__srv__ResetCounter_Request__TYPE_NAME[] = "bot_interfaces/srv/ResetCounter_Request";
static char bot_interfaces__srv__ResetCounter_Response__TYPE_NAME[] = "bot_interfaces/srv/ResetCounter_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char bot_interfaces__srv__ResetCounter__FIELD_NAME__request_message[] = "request_message";
static char bot_interfaces__srv__ResetCounter__FIELD_NAME__response_message[] = "response_message";
static char bot_interfaces__srv__ResetCounter__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field bot_interfaces__srv__ResetCounter__FIELDS[] = {
  {
    {bot_interfaces__srv__ResetCounter__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bot_interfaces__srv__ResetCounter_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {bot_interfaces__srv__ResetCounter__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bot_interfaces__srv__ResetCounter_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {bot_interfaces__srv__ResetCounter__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bot_interfaces__srv__ResetCounter_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription bot_interfaces__srv__ResetCounter__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {bot_interfaces__srv__ResetCounter_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {bot_interfaces__srv__ResetCounter_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {bot_interfaces__srv__ResetCounter_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bot_interfaces__srv__ResetCounter__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bot_interfaces__srv__ResetCounter__TYPE_NAME, 31, 31},
      {bot_interfaces__srv__ResetCounter__FIELDS, 3, 3},
    },
    {bot_interfaces__srv__ResetCounter__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = bot_interfaces__srv__ResetCounter_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = bot_interfaces__srv__ResetCounter_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = bot_interfaces__srv__ResetCounter_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bot_interfaces__srv__ResetCounter_Request__FIELD_NAME__reset_value[] = "reset_value";

static rosidl_runtime_c__type_description__Field bot_interfaces__srv__ResetCounter_Request__FIELDS[] = {
  {
    {bot_interfaces__srv__ResetCounter_Request__FIELD_NAME__reset_value, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bot_interfaces__srv__ResetCounter_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bot_interfaces__srv__ResetCounter_Request__TYPE_NAME, 39, 39},
      {bot_interfaces__srv__ResetCounter_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bot_interfaces__srv__ResetCounter_Response__FIELD_NAME__success[] = "success";
static char bot_interfaces__srv__ResetCounter_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field bot_interfaces__srv__ResetCounter_Response__FIELDS[] = {
  {
    {bot_interfaces__srv__ResetCounter_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {bot_interfaces__srv__ResetCounter_Response__FIELD_NAME__message, 7, 7},
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
bot_interfaces__srv__ResetCounter_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bot_interfaces__srv__ResetCounter_Response__TYPE_NAME, 40, 40},
      {bot_interfaces__srv__ResetCounter_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bot_interfaces__srv__ResetCounter_Event__FIELD_NAME__info[] = "info";
static char bot_interfaces__srv__ResetCounter_Event__FIELD_NAME__request[] = "request";
static char bot_interfaces__srv__ResetCounter_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field bot_interfaces__srv__ResetCounter_Event__FIELDS[] = {
  {
    {bot_interfaces__srv__ResetCounter_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {bot_interfaces__srv__ResetCounter_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {bot_interfaces__srv__ResetCounter_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {bot_interfaces__srv__ResetCounter_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {bot_interfaces__srv__ResetCounter_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription bot_interfaces__srv__ResetCounter_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {bot_interfaces__srv__ResetCounter_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {bot_interfaces__srv__ResetCounter_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bot_interfaces__srv__ResetCounter_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bot_interfaces__srv__ResetCounter_Event__TYPE_NAME, 37, 37},
      {bot_interfaces__srv__ResetCounter_Event__FIELDS, 3, 3},
    },
    {bot_interfaces__srv__ResetCounter_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = bot_interfaces__srv__ResetCounter_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = bot_interfaces__srv__ResetCounter_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 reset_value\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
bot_interfaces__srv__ResetCounter__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bot_interfaces__srv__ResetCounter__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bot_interfaces__srv__ResetCounter_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bot_interfaces__srv__ResetCounter_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bot_interfaces__srv__ResetCounter_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bot_interfaces__srv__ResetCounter_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bot_interfaces__srv__ResetCounter_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bot_interfaces__srv__ResetCounter_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bot_interfaces__srv__ResetCounter__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bot_interfaces__srv__ResetCounter__get_individual_type_description_source(NULL),
    sources[1] = *bot_interfaces__srv__ResetCounter_Event__get_individual_type_description_source(NULL);
    sources[2] = *bot_interfaces__srv__ResetCounter_Request__get_individual_type_description_source(NULL);
    sources[3] = *bot_interfaces__srv__ResetCounter_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bot_interfaces__srv__ResetCounter_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bot_interfaces__srv__ResetCounter_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bot_interfaces__srv__ResetCounter_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bot_interfaces__srv__ResetCounter_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bot_interfaces__srv__ResetCounter_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bot_interfaces__srv__ResetCounter_Event__get_individual_type_description_source(NULL),
    sources[1] = *bot_interfaces__srv__ResetCounter_Request__get_individual_type_description_source(NULL);
    sources[2] = *bot_interfaces__srv__ResetCounter_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
