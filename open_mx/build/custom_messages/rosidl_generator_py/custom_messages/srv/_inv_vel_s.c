// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_messages:srv/InvVel.idl
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
#include "custom_messages/srv/detail/inv_vel__struct.h"
#include "custom_messages/srv/detail/inv_vel__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool custom_messages__srv__inv_vel__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("custom_messages.srv._inv_vel.InvVel_Request", full_classname_dest, 43) == 0);
  }
  custom_messages__srv__InvVel_Request * ros_message = _ros_message;
  {  // twist
    PyObject * field = PyObject_GetAttrString(_pymsg, "twist");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->twist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_messages__srv__inv_vel__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InvVel_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_messages.srv._inv_vel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InvVel_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_messages__srv__InvVel_Request * ros_message = (custom_messages__srv__InvVel_Request *)raw_ros_message;
  {  // twist
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->twist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "twist", field);
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
// #include "custom_messages/srv/detail/inv_vel__struct.h"
// already included above
// #include "custom_messages/srv/detail/inv_vel__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_messages__srv__inv_vel__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("custom_messages.srv._inv_vel.InvVel_Response", full_classname_dest, 44) == 0);
  }
  custom_messages__srv__InvVel_Response * ros_message = _ros_message;
  {  // q_1_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "q_1_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q_1_dot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // q_2_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "q_2_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q_2_dot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // q_3_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "q_3_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q_3_dot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // q_4_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "q_4_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q_4_dot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_messages__srv__inv_vel__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InvVel_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_messages.srv._inv_vel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InvVel_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_messages__srv__InvVel_Response * ros_message = (custom_messages__srv__InvVel_Response *)raw_ros_message;
  {  // q_1_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q_1_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q_1_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q_2_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q_2_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q_2_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q_3_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q_3_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q_3_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q_4_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q_4_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q_4_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
