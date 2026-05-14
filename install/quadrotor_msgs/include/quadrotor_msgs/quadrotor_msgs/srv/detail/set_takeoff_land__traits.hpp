// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadrotor_msgs:srv/SetTakeoffLand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadrotor_msgs/srv/set_takeoff_land.hpp"


#ifndef QUADROTOR_MSGS__SRV__DETAIL__SET_TAKEOFF_LAND__TRAITS_HPP_
#define QUADROTOR_MSGS__SRV__DETAIL__SET_TAKEOFF_LAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadrotor_msgs/srv/detail/set_takeoff_land__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace quadrotor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTakeoffLand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: takeoff
  {
    out << "takeoff: ";
    rosidl_generator_traits::value_to_yaml(msg.takeoff, out);
    out << ", ";
  }

  // member: takeoff_altitude
  {
    out << "takeoff_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.takeoff_altitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTakeoffLand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: takeoff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "takeoff: ";
    rosidl_generator_traits::value_to_yaml(msg.takeoff, out);
    out << "\n";
  }

  // member: takeoff_altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "takeoff_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.takeoff_altitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTakeoffLand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace quadrotor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use quadrotor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const quadrotor_msgs::srv::SetTakeoffLand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::srv::SetTakeoffLand_Request & msg)
{
  return quadrotor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::srv::SetTakeoffLand_Request>()
{
  return "quadrotor_msgs::srv::SetTakeoffLand_Request";
}

template<>
inline const char * name<quadrotor_msgs::srv::SetTakeoffLand_Request>()
{
  return "quadrotor_msgs/srv/SetTakeoffLand_Request";
}

template<>
struct has_fixed_size<quadrotor_msgs::srv::SetTakeoffLand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<quadrotor_msgs::srv::SetTakeoffLand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<quadrotor_msgs::srv::SetTakeoffLand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace quadrotor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTakeoffLand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: res
  {
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTakeoffLand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTakeoffLand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace quadrotor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use quadrotor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const quadrotor_msgs::srv::SetTakeoffLand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::srv::SetTakeoffLand_Response & msg)
{
  return quadrotor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::srv::SetTakeoffLand_Response>()
{
  return "quadrotor_msgs::srv::SetTakeoffLand_Response";
}

template<>
inline const char * name<quadrotor_msgs::srv::SetTakeoffLand_Response>()
{
  return "quadrotor_msgs/srv/SetTakeoffLand_Response";
}

template<>
struct has_fixed_size<quadrotor_msgs::srv::SetTakeoffLand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<quadrotor_msgs::srv::SetTakeoffLand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<quadrotor_msgs::srv::SetTakeoffLand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace quadrotor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTakeoffLand_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTakeoffLand_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTakeoffLand_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace quadrotor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use quadrotor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const quadrotor_msgs::srv::SetTakeoffLand_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::srv::SetTakeoffLand_Event & msg)
{
  return quadrotor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::srv::SetTakeoffLand_Event>()
{
  return "quadrotor_msgs::srv::SetTakeoffLand_Event";
}

template<>
inline const char * name<quadrotor_msgs::srv::SetTakeoffLand_Event>()
{
  return "quadrotor_msgs/srv/SetTakeoffLand_Event";
}

template<>
struct has_fixed_size<quadrotor_msgs::srv::SetTakeoffLand_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<quadrotor_msgs::srv::SetTakeoffLand_Event>
  : std::integral_constant<bool, has_bounded_size<quadrotor_msgs::srv::SetTakeoffLand_Request>::value && has_bounded_size<quadrotor_msgs::srv::SetTakeoffLand_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<quadrotor_msgs::srv::SetTakeoffLand_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<quadrotor_msgs::srv::SetTakeoffLand>()
{
  return "quadrotor_msgs::srv::SetTakeoffLand";
}

template<>
inline const char * name<quadrotor_msgs::srv::SetTakeoffLand>()
{
  return "quadrotor_msgs/srv/SetTakeoffLand";
}

template<>
struct has_fixed_size<quadrotor_msgs::srv::SetTakeoffLand>
  : std::integral_constant<
    bool,
    has_fixed_size<quadrotor_msgs::srv::SetTakeoffLand_Request>::value &&
    has_fixed_size<quadrotor_msgs::srv::SetTakeoffLand_Response>::value
  >
{
};

template<>
struct has_bounded_size<quadrotor_msgs::srv::SetTakeoffLand>
  : std::integral_constant<
    bool,
    has_bounded_size<quadrotor_msgs::srv::SetTakeoffLand_Request>::value &&
    has_bounded_size<quadrotor_msgs::srv::SetTakeoffLand_Response>::value
  >
{
};

template<>
struct is_service<quadrotor_msgs::srv::SetTakeoffLand>
  : std::true_type
{
};

template<>
struct is_service_request<quadrotor_msgs::srv::SetTakeoffLand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<quadrotor_msgs::srv::SetTakeoffLand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // QUADROTOR_MSGS__SRV__DETAIL__SET_TAKEOFF_LAND__TRAITS_HPP_
