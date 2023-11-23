// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from yahboom_web_savmap_interfaces:srv/WebSaveMap.idl
// generated code does not contain a copyright notice
#include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "yahboom_web_savmap_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__struct.h"
#include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // mapname
#include "rosidl_runtime_c/string_functions.h"  // mapname

// forward declare type support functions


using _WebSaveMap_Request__ros_msg_type = yahboom_web_savmap_interfaces__srv__WebSaveMap_Request;

static bool _WebSaveMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WebSaveMap_Request__ros_msg_type * ros_message = static_cast<const _WebSaveMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mapname
  {
    const rosidl_runtime_c__String * str = &ros_message->mapname;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _WebSaveMap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WebSaveMap_Request__ros_msg_type * ros_message = static_cast<_WebSaveMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mapname
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mapname.data) {
      rosidl_runtime_c__String__init(&ros_message->mapname);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mapname,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mapname'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yahboom_web_savmap_interfaces
size_t get_serialized_size_yahboom_web_savmap_interfaces__srv__WebSaveMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WebSaveMap_Request__ros_msg_type * ros_message = static_cast<const _WebSaveMap_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mapname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mapname.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WebSaveMap_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yahboom_web_savmap_interfaces__srv__WebSaveMap_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yahboom_web_savmap_interfaces
size_t max_serialized_size_yahboom_web_savmap_interfaces__srv__WebSaveMap_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: mapname
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _WebSaveMap_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_yahboom_web_savmap_interfaces__srv__WebSaveMap_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WebSaveMap_Request = {
  "yahboom_web_savmap_interfaces::srv",
  "WebSaveMap_Request",
  _WebSaveMap_Request__cdr_serialize,
  _WebSaveMap_Request__cdr_deserialize,
  _WebSaveMap_Request__get_serialized_size,
  _WebSaveMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _WebSaveMap_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WebSaveMap_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yahboom_web_savmap_interfaces, srv, WebSaveMap_Request)() {
  return &_WebSaveMap_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "yahboom_web_savmap_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__struct.h"
// already included above
// #include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // response
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // response

// forward declare type support functions


using _WebSaveMap_Response__ros_msg_type = yahboom_web_savmap_interfaces__srv__WebSaveMap_Response;

static bool _WebSaveMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WebSaveMap_Response__ros_msg_type * ros_message = static_cast<const _WebSaveMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const rosidl_runtime_c__String * str = &ros_message->response;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _WebSaveMap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WebSaveMap_Response__ros_msg_type * ros_message = static_cast<_WebSaveMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->response.data) {
      rosidl_runtime_c__String__init(&ros_message->response);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->response,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'response'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yahboom_web_savmap_interfaces
size_t get_serialized_size_yahboom_web_savmap_interfaces__srv__WebSaveMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WebSaveMap_Response__ros_msg_type * ros_message = static_cast<const _WebSaveMap_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->response.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WebSaveMap_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yahboom_web_savmap_interfaces__srv__WebSaveMap_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yahboom_web_savmap_interfaces
size_t max_serialized_size_yahboom_web_savmap_interfaces__srv__WebSaveMap_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: response
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _WebSaveMap_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_yahboom_web_savmap_interfaces__srv__WebSaveMap_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WebSaveMap_Response = {
  "yahboom_web_savmap_interfaces::srv",
  "WebSaveMap_Response",
  _WebSaveMap_Response__cdr_serialize,
  _WebSaveMap_Response__cdr_deserialize,
  _WebSaveMap_Response__get_serialized_size,
  _WebSaveMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _WebSaveMap_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WebSaveMap_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yahboom_web_savmap_interfaces, srv, WebSaveMap_Response)() {
  return &_WebSaveMap_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "yahboom_web_savmap_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yahboom_web_savmap_interfaces/srv/web_save_map.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t WebSaveMap__callbacks = {
  "yahboom_web_savmap_interfaces::srv",
  "WebSaveMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yahboom_web_savmap_interfaces, srv, WebSaveMap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yahboom_web_savmap_interfaces, srv, WebSaveMap_Response)(),
};

static rosidl_service_type_support_t WebSaveMap__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &WebSaveMap__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yahboom_web_savmap_interfaces, srv, WebSaveMap)() {
  return &WebSaveMap__handle;
}

#if defined(__cplusplus)
}
#endif
