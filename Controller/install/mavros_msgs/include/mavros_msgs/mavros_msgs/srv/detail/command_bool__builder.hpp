// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mavros_msgs:srv/CommandBool.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mavros_msgs/srv/command_bool.hpp"


#ifndef MAVROS_MSGS__SRV__DETAIL__COMMAND_BOOL__BUILDER_HPP_
#define MAVROS_MSGS__SRV__DETAIL__COMMAND_BOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mavros_msgs/srv/detail/command_bool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mavros_msgs
{

namespace srv
{

namespace builder
{

class Init_CommandBool_Request_value
{
public:
  Init_CommandBool_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mavros_msgs::srv::CommandBool_Request value(::mavros_msgs::srv::CommandBool_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mavros_msgs::srv::CommandBool_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mavros_msgs::srv::CommandBool_Request>()
{
  return mavros_msgs::srv::builder::Init_CommandBool_Request_value();
}

}  // namespace mavros_msgs


namespace mavros_msgs
{

namespace srv
{

namespace builder
{

class Init_CommandBool_Response_result
{
public:
  explicit Init_CommandBool_Response_result(::mavros_msgs::srv::CommandBool_Response & msg)
  : msg_(msg)
  {}
  ::mavros_msgs::srv::CommandBool_Response result(::mavros_msgs::srv::CommandBool_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mavros_msgs::srv::CommandBool_Response msg_;
};

class Init_CommandBool_Response_success
{
public:
  Init_CommandBool_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommandBool_Response_result success(::mavros_msgs::srv::CommandBool_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CommandBool_Response_result(msg_);
  }

private:
  ::mavros_msgs::srv::CommandBool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mavros_msgs::srv::CommandBool_Response>()
{
  return mavros_msgs::srv::builder::Init_CommandBool_Response_success();
}

}  // namespace mavros_msgs


namespace mavros_msgs
{

namespace srv
{

namespace builder
{

class Init_CommandBool_Event_response
{
public:
  explicit Init_CommandBool_Event_response(::mavros_msgs::srv::CommandBool_Event & msg)
  : msg_(msg)
  {}
  ::mavros_msgs::srv::CommandBool_Event response(::mavros_msgs::srv::CommandBool_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mavros_msgs::srv::CommandBool_Event msg_;
};

class Init_CommandBool_Event_request
{
public:
  explicit Init_CommandBool_Event_request(::mavros_msgs::srv::CommandBool_Event & msg)
  : msg_(msg)
  {}
  Init_CommandBool_Event_response request(::mavros_msgs::srv::CommandBool_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CommandBool_Event_response(msg_);
  }

private:
  ::mavros_msgs::srv::CommandBool_Event msg_;
};

class Init_CommandBool_Event_info
{
public:
  Init_CommandBool_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommandBool_Event_request info(::mavros_msgs::srv::CommandBool_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CommandBool_Event_request(msg_);
  }

private:
  ::mavros_msgs::srv::CommandBool_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mavros_msgs::srv::CommandBool_Event>()
{
  return mavros_msgs::srv::builder::Init_CommandBool_Event_info();
}

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__SRV__DETAIL__COMMAND_BOOL__BUILDER_HPP_
