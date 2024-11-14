// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from open_manipulator_msgs:srv/GetKinematicsPose.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "open_manipulator_msgs/srv/detail/get_kinematics_pose__struct.h"
#include "open_manipulator_msgs/srv/detail/get_kinematics_pose__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool open_manipulator_msgs__srv__get_kinematics_pose__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("open_manipulator_msgs.srv._get_kinematics_pose.GetKinematicsPose_Request", full_classname_dest, 72) == 0);
  }
  open_manipulator_msgs__srv__GetKinematicsPose_Request * ros_message = _ros_message;
  {  // planning_group
    PyObject * field = PyObject_GetAttrString(_pymsg, "planning_group");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->planning_group, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // end_effector_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_effector_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->end_effector_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * open_manipulator_msgs__srv__get_kinematics_pose__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetKinematicsPose_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("open_manipulator_msgs.srv._get_kinematics_pose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetKinematicsPose_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  open_manipulator_msgs__srv__GetKinematicsPose_Request * ros_message = (open_manipulator_msgs__srv__GetKinematicsPose_Request *)raw_ros_message;
  {  // planning_group
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->planning_group.data,
      strlen(ros_message->planning_group.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "planning_group", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_effector_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->end_effector_name.data,
      strlen(ros_message->end_effector_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_effector_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "open_manipulator_msgs/srv/detail/get_kinematics_pose__struct.h"
// already included above
// #include "open_manipulator_msgs/srv/detail/get_kinematics_pose__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool open_manipulator_msgs__msg__kinematics_pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * open_manipulator_msgs__msg__kinematics_pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool open_manipulator_msgs__srv__get_kinematics_pose__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[74];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("open_manipulator_msgs.srv._get_kinematics_pose.GetKinematicsPose_Response", full_classname_dest, 73) == 0);
  }
  open_manipulator_msgs__srv__GetKinematicsPose_Response * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // kinematics_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "kinematics_pose");
    if (!field) {
      return false;
    }
    if (!open_manipulator_msgs__msg__kinematics_pose__convert_from_py(field, &ros_message->kinematics_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * open_manipulator_msgs__srv__get_kinematics_pose__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetKinematicsPose_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("open_manipulator_msgs.srv._get_kinematics_pose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetKinematicsPose_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  open_manipulator_msgs__srv__GetKinematicsPose_Response * ros_message = (open_manipulator_msgs__srv__GetKinematicsPose_Response *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kinematics_pose
    PyObject * field = NULL;
    field = open_manipulator_msgs__msg__kinematics_pose__convert_to_py(&ros_message->kinematics_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "kinematics_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
