// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bot_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bot_interfaces/msg/hardware_status.hpp"


#ifndef BOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
#define BOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bot_interfaces/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bot_interfaces
{

namespace msg
{

namespace builder
{

class Init_HardwareStatus_debug_message
{
public:
  explicit Init_HardwareStatus_debug_message(::bot_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  ::bot_interfaces::msg::HardwareStatus debug_message(::bot_interfaces::msg::HardwareStatus::_debug_message_type arg)
  {
    msg_.debug_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_are_motors_ready
{
public:
  explicit Init_HardwareStatus_are_motors_ready(::bot_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareStatus_debug_message are_motors_ready(::bot_interfaces::msg::HardwareStatus::_are_motors_ready_type arg)
  {
    msg_.are_motors_ready = std::move(arg);
    return Init_HardwareStatus_debug_message(msg_);
  }

private:
  ::bot_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_temperature
{
public:
  explicit Init_HardwareStatus_temperature(::bot_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareStatus_are_motors_ready temperature(::bot_interfaces::msg::HardwareStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_HardwareStatus_are_motors_ready(msg_);
  }

private:
  ::bot_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_version
{
public:
  Init_HardwareStatus_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareStatus_temperature version(::bot_interfaces::msg::HardwareStatus::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_HardwareStatus_temperature(msg_);
  }

private:
  ::bot_interfaces::msg::HardwareStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_interfaces::msg::HardwareStatus>()
{
  return bot_interfaces::msg::builder::Init_HardwareStatus_version();
}

}  // namespace bot_interfaces

#endif  // BOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
