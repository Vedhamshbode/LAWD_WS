// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lawd_msgs:msg/JoyCtrlCmds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lawd_msgs/msg/detail/joy_ctrl_cmds__rosidl_typesupport_introspection_c.h"
#include "lawd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lawd_msgs/msg/detail/joy_ctrl_cmds__functions.h"
#include "lawd_msgs/msg/detail/joy_ctrl_cmds__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `gait_step`
#include "geometry_msgs/msg/vector3.h"
// Member `gait_step`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lawd_msgs__msg__JoyCtrlCmds__init(message_memory);
}

void lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_fini_function(void * message_memory)
{
  lawd_msgs__msg__JoyCtrlCmds__fini(message_memory);
}

size_t lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__size_function__JoyCtrlCmds__states(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__get_const_function__JoyCtrlCmds__states(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__get_function__JoyCtrlCmds__states(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__fetch_function__JoyCtrlCmds__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__get_const_function__JoyCtrlCmds__states(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__assign_function__JoyCtrlCmds__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__get_function__JoyCtrlCmds__states(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_message_member_array[4] = {
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(lawd_msgs__msg__JoyCtrlCmds, states),  // bytes offset in struct
    NULL,  // default value
    lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__size_function__JoyCtrlCmds__states,  // size() function pointer
    lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__get_const_function__JoyCtrlCmds__states,  // get_const(index) function pointer
    lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__get_function__JoyCtrlCmds__states,  // get(index) function pointer
    lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__fetch_function__JoyCtrlCmds__states,  // fetch(index, &value) function pointer
    lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__assign_function__JoyCtrlCmds__states,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gait_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lawd_msgs__msg__JoyCtrlCmds, gait_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lawd_msgs__msg__JoyCtrlCmds, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gait_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lawd_msgs__msg__JoyCtrlCmds, gait_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_message_members = {
  "lawd_msgs__msg",  // message namespace
  "JoyCtrlCmds",  // message name
  4,  // number of fields
  sizeof(lawd_msgs__msg__JoyCtrlCmds),
  lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_message_member_array,  // message members
  lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_init_function,  // function to initialize message memory (memory has to be allocated)
  lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_message_type_support_handle = {
  0,
  &lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lawd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lawd_msgs, msg, JoyCtrlCmds)() {
  lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_message_type_support_handle.typesupport_identifier) {
    lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lawd_msgs__msg__JoyCtrlCmds__rosidl_typesupport_introspection_c__JoyCtrlCmds_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
