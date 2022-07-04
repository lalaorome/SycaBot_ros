// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Task.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__TASK__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__TASK__TRAITS_HPP_

#include "interfaces/srv/detail/task__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Task_Request>()
{
  return "interfaces::srv::Task_Request";
}

template<>
inline const char * name<interfaces::srv::Task_Request>()
{
  return "interfaces/srv/Task_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Task_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Task_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Task_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'task'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Task_Response>()
{
  return "interfaces::srv::Task_Response";
}

template<>
inline const char * name<interfaces::srv::Task_Response>()
{
  return "interfaces/srv/Task_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Task_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<interfaces::srv::Task_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<interfaces::srv::Task_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Task>()
{
  return "interfaces::srv::Task";
}

template<>
inline const char * name<interfaces::srv::Task>()
{
  return "interfaces/srv/Task";
}

template<>
struct has_fixed_size<interfaces::srv::Task>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Task_Request>::value &&
    has_fixed_size<interfaces::srv::Task_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Task>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Task_Request>::value &&
    has_bounded_size<interfaces::srv::Task_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Task>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Task_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Task_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__TASK__TRAITS_HPP_
