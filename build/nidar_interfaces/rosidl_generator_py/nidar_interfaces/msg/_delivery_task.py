# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nidar_interfaces:msg/DeliveryTask.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeliveryTask(type):
    """Metaclass of message 'DeliveryTask'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nidar_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nidar_interfaces.msg.DeliveryTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__delivery_task
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__delivery_task
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__delivery_task
            cls._TYPE_SUPPORT = module.type_support_msg__msg__delivery_task
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__delivery_task

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeliveryTask(metaclass=Metaclass_DeliveryTask):
    """Message class 'DeliveryTask'."""

    __slots__ = [
        '_timestamp',
        '_task_id',
        '_survivor_id',
        '_target_x',
        '_target_y',
        '_target_z',
        '_target_latitude',
        '_target_longitude',
        '_priority',
        '_status',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'task_id': 'uint32',
        'survivor_id': 'uint32',
        'target_x': 'double',
        'target_y': 'double',
        'target_z': 'double',
        'target_latitude': 'double',
        'target_longitude': 'double',
        'priority': 'uint8',
        'status': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.task_id = kwargs.get('task_id', int())
        self.survivor_id = kwargs.get('survivor_id', int())
        self.target_x = kwargs.get('target_x', float())
        self.target_y = kwargs.get('target_y', float())
        self.target_z = kwargs.get('target_z', float())
        self.target_latitude = kwargs.get('target_latitude', float())
        self.target_longitude = kwargs.get('target_longitude', float())
        self.priority = kwargs.get('priority', int())
        self.status = kwargs.get('status', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.task_id != other.task_id:
            return False
        if self.survivor_id != other.survivor_id:
            return False
        if self.target_x != other.target_x:
            return False
        if self.target_y != other.target_y:
            return False
        if self.target_z != other.target_z:
            return False
        if self.target_latitude != other.target_latitude:
            return False
        if self.target_longitude != other.target_longitude:
            return False
        if self.priority != other.priority:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @builtins.property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'task_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'task_id' field must be an unsigned integer in [0, 4294967295]"
        self._task_id = value

    @builtins.property
    def survivor_id(self):
        """Message field 'survivor_id'."""
        return self._survivor_id

    @survivor_id.setter
    def survivor_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'survivor_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'survivor_id' field must be an unsigned integer in [0, 4294967295]"
        self._survivor_id = value

    @builtins.property
    def target_x(self):
        """Message field 'target_x'."""
        return self._target_x

    @target_x.setter
    def target_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_x = value

    @builtins.property
    def target_y(self):
        """Message field 'target_y'."""
        return self._target_y

    @target_y.setter
    def target_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_y = value

    @builtins.property
    def target_z(self):
        """Message field 'target_z'."""
        return self._target_z

    @target_z.setter
    def target_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_z = value

    @builtins.property
    def target_latitude(self):
        """Message field 'target_latitude'."""
        return self._target_latitude

    @target_latitude.setter
    def target_latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_latitude = value

    @builtins.property
    def target_longitude(self):
        """Message field 'target_longitude'."""
        return self._target_longitude

    @target_longitude.setter
    def target_longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_longitude = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'priority' field must be an unsigned integer in [0, 255]"
        self._priority = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value
