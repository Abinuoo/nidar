// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nidar_interfaces:msg/MissionStatus.idl
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
#include "nidar_interfaces/msg/detail/mission_status__struct.h"
#include "nidar_interfaces/msg/detail/mission_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool nidar_interfaces__msg__mission_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("nidar_interfaces.msg._mission_status.MissionStatus", full_classname_dest, 50) == 0);
  }
  nidar_interfaces__msg__MissionStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mission_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mission_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // survivors_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "survivors_detected");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->survivors_detected = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // survivors_geotagged
    PyObject * field = PyObject_GetAttrString(_pymsg, "survivors_geotagged");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->survivors_geotagged = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // deliveries_pending
    PyObject * field = PyObject_GetAttrString(_pymsg, "deliveries_pending");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->deliveries_pending = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // deliveries_completed
    PyObject * field = PyObject_GetAttrString(_pymsg, "deliveries_completed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->deliveries_completed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // completion_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "completion_percent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->completion_percent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // elapsed_time_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "elapsed_time_sec");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->elapsed_time_sec = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nidar_interfaces__msg__mission_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MissionStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nidar_interfaces.msg._mission_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MissionStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nidar_interfaces__msg__MissionStatus * ros_message = (nidar_interfaces__msg__MissionStatus *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mission_id.data,
      strlen(ros_message->mission_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->state.data,
      strlen(ros_message->state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // survivors_detected
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->survivors_detected);
    {
      int rc = PyObject_SetAttrString(_pymessage, "survivors_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // survivors_geotagged
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->survivors_geotagged);
    {
      int rc = PyObject_SetAttrString(_pymessage, "survivors_geotagged", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deliveries_pending
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->deliveries_pending);
    {
      int rc = PyObject_SetAttrString(_pymessage, "deliveries_pending", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deliveries_completed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->deliveries_completed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "deliveries_completed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // completion_percent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->completion_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "completion_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elapsed_time_sec
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->elapsed_time_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elapsed_time_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
