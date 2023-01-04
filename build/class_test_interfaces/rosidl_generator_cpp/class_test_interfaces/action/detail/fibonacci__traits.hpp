// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from class_test_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef CLASS_TEST_INTERFACES__ACTION__DETAIL__FIBONACCI__TRAITS_HPP_
#define CLASS_TEST_INTERFACES__ACTION__DETAIL__FIBONACCI__TRAITS_HPP_

#include "class_test_interfaces/action/detail/fibonacci__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::action::Fibonacci_Goal>()
{
  return "class_test_interfaces::action::Fibonacci_Goal";
}

template<>
inline const char * name<class_test_interfaces::action::Fibonacci_Goal>()
{
  return "class_test_interfaces/action/Fibonacci_Goal";
}

template<>
struct has_fixed_size<class_test_interfaces::action::Fibonacci_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<class_test_interfaces::action::Fibonacci_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<class_test_interfaces::action::Fibonacci_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::action::Fibonacci_Result>()
{
  return "class_test_interfaces::action::Fibonacci_Result";
}

template<>
inline const char * name<class_test_interfaces::action::Fibonacci_Result>()
{
  return "class_test_interfaces/action/Fibonacci_Result";
}

template<>
struct has_fixed_size<class_test_interfaces::action::Fibonacci_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<class_test_interfaces::action::Fibonacci_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<class_test_interfaces::action::Fibonacci_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::action::Fibonacci_Feedback>()
{
  return "class_test_interfaces::action::Fibonacci_Feedback";
}

template<>
inline const char * name<class_test_interfaces::action::Fibonacci_Feedback>()
{
  return "class_test_interfaces/action/Fibonacci_Feedback";
}

template<>
struct has_fixed_size<class_test_interfaces::action::Fibonacci_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<class_test_interfaces::action::Fibonacci_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<class_test_interfaces::action::Fibonacci_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "class_test_interfaces/action/detail/fibonacci__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::action::Fibonacci_SendGoal_Request>()
{
  return "class_test_interfaces::action::Fibonacci_SendGoal_Request";
}

template<>
inline const char * name<class_test_interfaces::action::Fibonacci_SendGoal_Request>()
{
  return "class_test_interfaces/action/Fibonacci_SendGoal_Request";
}

template<>
struct has_fixed_size<class_test_interfaces::action::Fibonacci_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<class_test_interfaces::action::Fibonacci_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<class_test_interfaces::action::Fibonacci_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<class_test_interfaces::action::Fibonacci_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<class_test_interfaces::action::Fibonacci_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::action::Fibonacci_SendGoal_Response>()
{
  return "class_test_interfaces::action::Fibonacci_SendGoal_Response";
}

template<>
inline const char * name<class_test_interfaces::action::Fibonacci_SendGoal_Response>()
{
  return "class_test_interfaces/action/Fibonacci_SendGoal_Response";
}

template<>
struct has_fixed_size<class_test_interfaces::action::Fibonacci_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<class_test_interfaces::action::Fibonacci_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<class_test_interfaces::action::Fibonacci_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::action::Fibonacci_SendGoal>()
{
  return "class_test_interfaces::action::Fibonacci_SendGoal";
}

template<>
inline const char * name<class_test_interfaces::action::Fibonacci_SendGoal>()
{
  return "class_test_interfaces/action/Fibonacci_SendGoal";
}

template<>
struct has_fixed_size<class_test_interfaces::action::Fibonacci_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<class_test_interfaces::action::Fibonacci_SendGoal_Request>::value &&
    has_fixed_size<class_test_interfaces::action::Fibonacci_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<class_test_interfaces::action::Fibonacci_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<class_test_interfaces::action::Fibonacci_SendGoal_Request>::value &&
    has_bounded_size<class_test_interfaces::action::Fibonacci_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<class_test_interfaces::action::Fibonacci_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<class_test_interfaces::action::Fibonacci_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<class_test_interfaces::action::Fibonacci_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::action::Fibonacci_GetResult_Request>()
{
  return "class_test_interfaces::action::Fibonacci_GetResult_Request";
}

template<>
inline const char * name<class_test_interfaces::action::Fibonacci_GetResult_Request>()
{
  return "class_test_interfaces/action/Fibonacci_GetResult_Request";
}

template<>
struct has_fixed_size<class_test_interfaces::action::Fibonacci_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<class_test_interfaces::action::Fibonacci_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<class_test_interfaces::action::Fibonacci_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "class_test_interfaces/action/detail/fibonacci__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::action::Fibonacci_GetResult_Response>()
{
  return "class_test_interfaces::action::Fibonacci_GetResult_Response";
}

template<>
inline const char * name<class_test_interfaces::action::Fibonacci_GetResult_Response>()
{
  return "class_test_interfaces/action/Fibonacci_GetResult_Response";
}

template<>
struct has_fixed_size<class_test_interfaces::action::Fibonacci_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<class_test_interfaces::action::Fibonacci_Result>::value> {};

template<>
struct has_bounded_size<class_test_interfaces::action::Fibonacci_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<class_test_interfaces::action::Fibonacci_Result>::value> {};

template<>
struct is_message<class_test_interfaces::action::Fibonacci_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::action::Fibonacci_GetResult>()
{
  return "class_test_interfaces::action::Fibonacci_GetResult";
}

template<>
inline const char * name<class_test_interfaces::action::Fibonacci_GetResult>()
{
  return "class_test_interfaces/action/Fibonacci_GetResult";
}

template<>
struct has_fixed_size<class_test_interfaces::action::Fibonacci_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<class_test_interfaces::action::Fibonacci_GetResult_Request>::value &&
    has_fixed_size<class_test_interfaces::action::Fibonacci_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<class_test_interfaces::action::Fibonacci_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<class_test_interfaces::action::Fibonacci_GetResult_Request>::value &&
    has_bounded_size<class_test_interfaces::action::Fibonacci_GetResult_Response>::value
  >
{
};

template<>
struct is_service<class_test_interfaces::action::Fibonacci_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<class_test_interfaces::action::Fibonacci_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<class_test_interfaces::action::Fibonacci_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "class_test_interfaces/action/detail/fibonacci__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::action::Fibonacci_FeedbackMessage>()
{
  return "class_test_interfaces::action::Fibonacci_FeedbackMessage";
}

template<>
inline const char * name<class_test_interfaces::action::Fibonacci_FeedbackMessage>()
{
  return "class_test_interfaces/action/Fibonacci_FeedbackMessage";
}

template<>
struct has_fixed_size<class_test_interfaces::action::Fibonacci_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<class_test_interfaces::action::Fibonacci_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<class_test_interfaces::action::Fibonacci_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<class_test_interfaces::action::Fibonacci_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<class_test_interfaces::action::Fibonacci_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<class_test_interfaces::action::Fibonacci>
  : std::true_type
{
};

template<>
struct is_action_goal<class_test_interfaces::action::Fibonacci_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<class_test_interfaces::action::Fibonacci_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<class_test_interfaces::action::Fibonacci_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CLASS_TEST_INTERFACES__ACTION__DETAIL__FIBONACCI__TRAITS_HPP_
