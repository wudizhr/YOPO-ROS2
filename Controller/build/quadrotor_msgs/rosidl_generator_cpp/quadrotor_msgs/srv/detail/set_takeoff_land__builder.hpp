// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:srv/SetTakeoffLand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadrotor_msgs/srv/set_takeoff_land.hpp"


#ifndef QUADROTOR_MSGS__SRV__DETAIL__SET_TAKEOFF_LAND__BUILDER_HPP_
#define QUADROTOR_MSGS__SRV__DETAIL__SET_TAKEOFF_LAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/srv/detail/set_takeoff_land__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTakeoffLand_Request_takeoff_altitude
{
public:
  explicit Init_SetTakeoffLand_Request_takeoff_altitude(::quadrotor_msgs::srv::SetTakeoffLand_Request & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::srv::SetTakeoffLand_Request takeoff_altitude(::quadrotor_msgs::srv::SetTakeoffLand_Request::_takeoff_altitude_type arg)
  {
    msg_.takeoff_altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::srv::SetTakeoffLand_Request msg_;
};

class Init_SetTakeoffLand_Request_takeoff
{
public:
  Init_SetTakeoffLand_Request_takeoff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTakeoffLand_Request_takeoff_altitude takeoff(::quadrotor_msgs::srv::SetTakeoffLand_Request::_takeoff_type arg)
  {
    msg_.takeoff = std::move(arg);
    return Init_SetTakeoffLand_Request_takeoff_altitude(msg_);
  }

private:
  ::quadrotor_msgs::srv::SetTakeoffLand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::srv::SetTakeoffLand_Request>()
{
  return quadrotor_msgs::srv::builder::Init_SetTakeoffLand_Request_takeoff();
}

}  // namespace quadrotor_msgs


namespace quadrotor_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTakeoffLand_Response_res
{
public:
  Init_SetTakeoffLand_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::quadrotor_msgs::srv::SetTakeoffLand_Response res(::quadrotor_msgs::srv::SetTakeoffLand_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::srv::SetTakeoffLand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::srv::SetTakeoffLand_Response>()
{
  return quadrotor_msgs::srv::builder::Init_SetTakeoffLand_Response_res();
}

}  // namespace quadrotor_msgs


namespace quadrotor_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTakeoffLand_Event_response
{
public:
  explicit Init_SetTakeoffLand_Event_response(::quadrotor_msgs::srv::SetTakeoffLand_Event & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::srv::SetTakeoffLand_Event response(::quadrotor_msgs::srv::SetTakeoffLand_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::srv::SetTakeoffLand_Event msg_;
};

class Init_SetTakeoffLand_Event_request
{
public:
  explicit Init_SetTakeoffLand_Event_request(::quadrotor_msgs::srv::SetTakeoffLand_Event & msg)
  : msg_(msg)
  {}
  Init_SetTakeoffLand_Event_response request(::quadrotor_msgs::srv::SetTakeoffLand_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetTakeoffLand_Event_response(msg_);
  }

private:
  ::quadrotor_msgs::srv::SetTakeoffLand_Event msg_;
};

class Init_SetTakeoffLand_Event_info
{
public:
  Init_SetTakeoffLand_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTakeoffLand_Event_request info(::quadrotor_msgs::srv::SetTakeoffLand_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetTakeoffLand_Event_request(msg_);
  }

private:
  ::quadrotor_msgs::srv::SetTakeoffLand_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::srv::SetTakeoffLand_Event>()
{
  return quadrotor_msgs::srv::builder::Init_SetTakeoffLand_Event_info();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__SRV__DETAIL__SET_TAKEOFF_LAND__BUILDER_HPP_
