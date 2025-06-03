// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bot_interfaces:action/CountUntil.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bot_interfaces/action/count_until.hpp"


#ifndef BOT_INTERFACES__ACTION__DETAIL__COUNT_UNTIL__BUILDER_HPP_
#define BOT_INTERFACES__ACTION__DETAIL__COUNT_UNTIL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bot_interfaces/action/detail/count_until__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bot_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_Goal_delay
{
public:
  explicit Init_CountUntil_Goal_delay(::bot_interfaces::action::CountUntil_Goal & msg)
  : msg_(msg)
  {}
  ::bot_interfaces::action::CountUntil_Goal delay(::bot_interfaces::action::CountUntil_Goal::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_Goal msg_;
};

class Init_CountUntil_Goal_target_number
{
public:
  Init_CountUntil_Goal_target_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountUntil_Goal_delay target_number(::bot_interfaces::action::CountUntil_Goal::_target_number_type arg)
  {
    msg_.target_number = std::move(arg);
    return Init_CountUntil_Goal_delay(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_interfaces::action::CountUntil_Goal>()
{
  return bot_interfaces::action::builder::Init_CountUntil_Goal_target_number();
}

}  // namespace bot_interfaces


namespace bot_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_Result_reached_number
{
public:
  Init_CountUntil_Result_reached_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bot_interfaces::action::CountUntil_Result reached_number(::bot_interfaces::action::CountUntil_Result::_reached_number_type arg)
  {
    msg_.reached_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_interfaces::action::CountUntil_Result>()
{
  return bot_interfaces::action::builder::Init_CountUntil_Result_reached_number();
}

}  // namespace bot_interfaces


namespace bot_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_Feedback_current_number
{
public:
  Init_CountUntil_Feedback_current_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bot_interfaces::action::CountUntil_Feedback current_number(::bot_interfaces::action::CountUntil_Feedback::_current_number_type arg)
  {
    msg_.current_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_interfaces::action::CountUntil_Feedback>()
{
  return bot_interfaces::action::builder::Init_CountUntil_Feedback_current_number();
}

}  // namespace bot_interfaces


namespace bot_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_SendGoal_Request_goal
{
public:
  explicit Init_CountUntil_SendGoal_Request_goal(::bot_interfaces::action::CountUntil_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::bot_interfaces::action::CountUntil_SendGoal_Request goal(::bot_interfaces::action::CountUntil_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_SendGoal_Request msg_;
};

class Init_CountUntil_SendGoal_Request_goal_id
{
public:
  Init_CountUntil_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountUntil_SendGoal_Request_goal goal_id(::bot_interfaces::action::CountUntil_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CountUntil_SendGoal_Request_goal(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_interfaces::action::CountUntil_SendGoal_Request>()
{
  return bot_interfaces::action::builder::Init_CountUntil_SendGoal_Request_goal_id();
}

}  // namespace bot_interfaces


namespace bot_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_SendGoal_Response_stamp
{
public:
  explicit Init_CountUntil_SendGoal_Response_stamp(::bot_interfaces::action::CountUntil_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::bot_interfaces::action::CountUntil_SendGoal_Response stamp(::bot_interfaces::action::CountUntil_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_SendGoal_Response msg_;
};

class Init_CountUntil_SendGoal_Response_accepted
{
public:
  Init_CountUntil_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountUntil_SendGoal_Response_stamp accepted(::bot_interfaces::action::CountUntil_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CountUntil_SendGoal_Response_stamp(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_interfaces::action::CountUntil_SendGoal_Response>()
{
  return bot_interfaces::action::builder::Init_CountUntil_SendGoal_Response_accepted();
}

}  // namespace bot_interfaces


namespace bot_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_SendGoal_Event_response
{
public:
  explicit Init_CountUntil_SendGoal_Event_response(::bot_interfaces::action::CountUntil_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::bot_interfaces::action::CountUntil_SendGoal_Event response(::bot_interfaces::action::CountUntil_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_SendGoal_Event msg_;
};

class Init_CountUntil_SendGoal_Event_request
{
public:
  explicit Init_CountUntil_SendGoal_Event_request(::bot_interfaces::action::CountUntil_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_CountUntil_SendGoal_Event_response request(::bot_interfaces::action::CountUntil_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CountUntil_SendGoal_Event_response(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_SendGoal_Event msg_;
};

class Init_CountUntil_SendGoal_Event_info
{
public:
  Init_CountUntil_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountUntil_SendGoal_Event_request info(::bot_interfaces::action::CountUntil_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CountUntil_SendGoal_Event_request(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_interfaces::action::CountUntil_SendGoal_Event>()
{
  return bot_interfaces::action::builder::Init_CountUntil_SendGoal_Event_info();
}

}  // namespace bot_interfaces


namespace bot_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_GetResult_Request_goal_id
{
public:
  Init_CountUntil_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bot_interfaces::action::CountUntil_GetResult_Request goal_id(::bot_interfaces::action::CountUntil_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_interfaces::action::CountUntil_GetResult_Request>()
{
  return bot_interfaces::action::builder::Init_CountUntil_GetResult_Request_goal_id();
}

}  // namespace bot_interfaces


namespace bot_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_GetResult_Response_result
{
public:
  explicit Init_CountUntil_GetResult_Response_result(::bot_interfaces::action::CountUntil_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::bot_interfaces::action::CountUntil_GetResult_Response result(::bot_interfaces::action::CountUntil_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_GetResult_Response msg_;
};

class Init_CountUntil_GetResult_Response_status
{
public:
  Init_CountUntil_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountUntil_GetResult_Response_result status(::bot_interfaces::action::CountUntil_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CountUntil_GetResult_Response_result(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_interfaces::action::CountUntil_GetResult_Response>()
{
  return bot_interfaces::action::builder::Init_CountUntil_GetResult_Response_status();
}

}  // namespace bot_interfaces


namespace bot_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_GetResult_Event_response
{
public:
  explicit Init_CountUntil_GetResult_Event_response(::bot_interfaces::action::CountUntil_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::bot_interfaces::action::CountUntil_GetResult_Event response(::bot_interfaces::action::CountUntil_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_GetResult_Event msg_;
};

class Init_CountUntil_GetResult_Event_request
{
public:
  explicit Init_CountUntil_GetResult_Event_request(::bot_interfaces::action::CountUntil_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_CountUntil_GetResult_Event_response request(::bot_interfaces::action::CountUntil_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CountUntil_GetResult_Event_response(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_GetResult_Event msg_;
};

class Init_CountUntil_GetResult_Event_info
{
public:
  Init_CountUntil_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountUntil_GetResult_Event_request info(::bot_interfaces::action::CountUntil_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CountUntil_GetResult_Event_request(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_interfaces::action::CountUntil_GetResult_Event>()
{
  return bot_interfaces::action::builder::Init_CountUntil_GetResult_Event_info();
}

}  // namespace bot_interfaces


namespace bot_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_FeedbackMessage_feedback
{
public:
  explicit Init_CountUntil_FeedbackMessage_feedback(::bot_interfaces::action::CountUntil_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::bot_interfaces::action::CountUntil_FeedbackMessage feedback(::bot_interfaces::action::CountUntil_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_FeedbackMessage msg_;
};

class Init_CountUntil_FeedbackMessage_goal_id
{
public:
  Init_CountUntil_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountUntil_FeedbackMessage_feedback goal_id(::bot_interfaces::action::CountUntil_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CountUntil_FeedbackMessage_feedback(msg_);
  }

private:
  ::bot_interfaces::action::CountUntil_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bot_interfaces::action::CountUntil_FeedbackMessage>()
{
  return bot_interfaces::action::builder::Init_CountUntil_FeedbackMessage_goal_id();
}

}  // namespace bot_interfaces

#endif  // BOT_INTERFACES__ACTION__DETAIL__COUNT_UNTIL__BUILDER_HPP_
