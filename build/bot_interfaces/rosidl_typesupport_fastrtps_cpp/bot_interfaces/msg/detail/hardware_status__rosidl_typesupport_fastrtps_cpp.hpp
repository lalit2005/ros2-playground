// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from bot_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef BOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "bot_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "bot_interfaces/msg/detail/hardware_status__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace bot_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bot_interfaces
cdr_serialize(
  const bot_interfaces::msg::HardwareStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bot_interfaces::msg::HardwareStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bot_interfaces
get_serialized_size(
  const bot_interfaces::msg::HardwareStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bot_interfaces
max_serialized_size_HardwareStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bot_interfaces
cdr_serialize_key(
  const bot_interfaces::msg::HardwareStatus & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bot_interfaces
get_serialized_size_key(
  const bot_interfaces::msg::HardwareStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bot_interfaces
max_serialized_size_key_HardwareStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bot_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bot_interfaces, msg, HardwareStatus)();

#ifdef __cplusplus
}
#endif

#endif  // BOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
