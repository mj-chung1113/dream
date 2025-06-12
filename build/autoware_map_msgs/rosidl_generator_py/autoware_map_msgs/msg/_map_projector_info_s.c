// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_map_msgs:msg/MapProjectorInfo.idl
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
#include "autoware_map_msgs/msg/detail/map_projector_info__struct.h"
#include "autoware_map_msgs/msg/detail/map_projector_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geographic_msgs__msg__geo_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geographic_msgs__msg__geo_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_map_msgs__msg__map_projector_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("autoware_map_msgs.msg._map_projector_info.MapProjectorInfo", full_classname_dest, 58) == 0);
  }
  autoware_map_msgs__msg__MapProjectorInfo * ros_message = _ros_message;
  {  // projector_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "projector_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->projector_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // vertical_datum
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_datum");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->vertical_datum, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mgrs_grid
    PyObject * field = PyObject_GetAttrString(_pymsg, "mgrs_grid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mgrs_grid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // map_origin
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_origin");
    if (!field) {
      return false;
    }
    if (!geographic_msgs__msg__geo_point__convert_from_py(field, &ros_message->map_origin)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // scale_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "scale_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scale_factor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_map_msgs__msg__map_projector_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MapProjectorInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_map_msgs.msg._map_projector_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MapProjectorInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_map_msgs__msg__MapProjectorInfo * ros_message = (autoware_map_msgs__msg__MapProjectorInfo *)raw_ros_message;
  {  // projector_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->projector_type.data,
      strlen(ros_message->projector_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "projector_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_datum
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->vertical_datum.data,
      strlen(ros_message->vertical_datum.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_datum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mgrs_grid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mgrs_grid.data,
      strlen(ros_message->mgrs_grid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mgrs_grid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_origin
    PyObject * field = NULL;
    field = geographic_msgs__msg__geo_point__convert_to_py(&ros_message->map_origin);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_origin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scale_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scale_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scale_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
