// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nidar_interfaces:msg/MissionScore.idl
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
#include "nidar_interfaces/msg/detail/mission_score__struct.h"
#include "nidar_interfaces/msg/detail/mission_score__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool nidar_interfaces__msg__mission_score__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("nidar_interfaces.msg._mission_score.MissionScore", full_classname_dest, 48) == 0);
  }
  nidar_interfaces__msg__MissionScore * ros_message = _ros_message;
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
  {  // detection_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "detection_score");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->detection_score = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // delivery_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "delivery_score");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->delivery_score = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // collaboration_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "collaboration_score");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->collaboration_score = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gcs_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "gcs_score");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gcs_score = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fast_completion_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "fast_completion_score");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fast_completion_score = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // penalty_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "penalty_score");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->penalty_score = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // total_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_score");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_score = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mission_time_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_time_sec");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mission_time_sec = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nidar_interfaces__msg__mission_score__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MissionScore */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nidar_interfaces.msg._mission_score");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MissionScore");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nidar_interfaces__msg__MissionScore * ros_message = (nidar_interfaces__msg__MissionScore *)raw_ros_message;
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
  {  // detection_score
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->detection_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detection_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delivery_score
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->delivery_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delivery_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collaboration_score
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->collaboration_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collaboration_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gcs_score
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gcs_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gcs_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fast_completion_score
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fast_completion_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fast_completion_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // penalty_score
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->penalty_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "penalty_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_score
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->total_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission_time_sec
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mission_time_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_time_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
