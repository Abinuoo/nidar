// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nidar_interfaces:msg/DeliveryResult.idl
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
#include "nidar_interfaces/msg/detail/delivery_result__struct.h"
#include "nidar_interfaces/msg/detail/delivery_result__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool nidar_interfaces__msg__delivery_result__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("nidar_interfaces.msg._delivery_result.DeliveryResult", full_classname_dest, 52) == 0);
  }
  nidar_interfaces__msg__DeliveryResult * ros_message = _ros_message;
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
  {  // task_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // survivor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "survivor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->survivor_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // drop_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "drop_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->drop_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drop_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "drop_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->drop_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drop_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "drop_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->drop_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizontal_error_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_error_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_error_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accuracy_zone
    PyObject * field = PyObject_GetAttrString(_pymsg, "accuracy_zone");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accuracy_zone = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nidar_interfaces__msg__delivery_result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DeliveryResult */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nidar_interfaces.msg._delivery_result");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DeliveryResult");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nidar_interfaces__msg__DeliveryResult * ros_message = (nidar_interfaces__msg__DeliveryResult *)raw_ros_message;
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
  {  // task_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->task_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // survivor_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->survivor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "survivor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drop_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->drop_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drop_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drop_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->drop_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drop_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drop_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->drop_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drop_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_error_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_error_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_error_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accuracy_zone
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accuracy_zone);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accuracy_zone", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->status.data,
      strlen(ros_message->status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
