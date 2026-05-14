// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mavros_msgs:srv/SetMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mavros_msgs/srv/set_mode.hpp"


#ifndef MAVROS_MSGS__SRV__DETAIL__SET_MODE__BUILDER_HPP_
#define MAVROS_MSGS__SRV__DETAIL__SET_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mavros_msgs/srv/detail/set_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mavros_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMode_Request_custom_mode
{
public:
  explicit Init_SetMode_Request_custom_mode(::mavros_msgs::srv::SetMode_Request & msg)
  : msg_(msg)
  {}
  ::mavros_msgs::srv::SetMode_Request custom_mode(::mavros_msgs::srv::SetMode_Request::_custom_mode_type arg)
  {
    msg_.custom_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mavros_msgs::srv::SetMode_Request msg_;
};

class Init_SetMode_Request_base_mode
{
public:
  Init_SetMode_Request_base_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMode_Request_custom_mode base_mode(::mavros_msgs::srv::SetMode_Request::_base_mode_type arg)
  {
    msg_.base_mode = std::move(arg);
    return Init_SetMode_Request_custom_mode(msg_);
  }

private:
  ::mavros_msgs::srv::SetMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mavros_msgs::srv::SetMode_Request>()
{
  return mavros_msgs::srv::builder::Init_SetMode_Request_base_mode();
}

}  // namespace mavros_msgs


namespace mavros_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMode_Response_mode_sent
{
public:
  Init_SetMode_Response_mode_sent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mavros_msgs::srv::SetMode_Response mode_sent(::mavros_msgs::srv::SetMode_Response::_mode_sent_type arg)
  {
    msg_.mode_sent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mavros_msgs::srv::SetMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mavros_msgs::srv::SetMode_Response>()
{
  return mavros_msgs::srv::builder::Init_SetMode_Response_mode_sent();
}

}  // namespace mavros_msgs


namespace mavros_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMode_Event_response
{
public:
  explicit Init_SetMode_Event_response(::mavros_msgs::srv::SetMode_Event & msg)
  : msg_(msg)
  {}
  ::mavros_msgs::srv::SetMode_Event response(::mavros_msgs::srv::SetMode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mavros_msgs::srv::SetMode_Event msg_;
};

class Init_SetMode_Event_request
{
public:
  explicit Init_SetMode_Event_request(::mavros_msgs::srv::SetMode_Event & msg)
  : msg_(msg)
  {}
  Init_SetMode_Event_response request(::mavros_msgs::srv::SetMode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetMode_Event_response(msg_);
  }

private:
  ::mavros_msgs::srv::SetMode_Event msg_;
};

class Init_SetMode_Event_info
{
public:
  Init_SetMode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMode_Event_request info(::mavros_msgs::srv::SetMode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetMode_Event_request(msg_);
  }

private:
  ::mavros_msgs::srv::SetMode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mavros_msgs::srv::SetMode_Event>()
{
  return mavros_msgs::srv::builder::Init_SetMode_Event_info();
}

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__SRV__DETAIL__SET_MODE__BUILDER_HPP_
