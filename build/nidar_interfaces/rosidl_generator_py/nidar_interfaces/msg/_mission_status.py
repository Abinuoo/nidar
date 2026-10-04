# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nidar_interfaces:msg/MissionStatus.idl
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


class Metaclass_MissionStatus(type):
    """Metaclass of message 'MissionStatus'."""

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
                'nidar_interfaces.msg.MissionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_status

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


class MissionStatus(metaclass=Metaclass_MissionStatus):
    """Message class 'MissionStatus'."""

    __slots__ = [
        '_timestamp',
        '_mission_id',
        '_state',
        '_survivors_detected',
        '_survivors_geotagged',
        '_deliveries_pending',
        '_deliveries_completed',
        '_completion_percent',
        '_elapsed_time_sec',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'mission_id': 'string',
        'state': 'string',
        'survivors_detected': 'uint32',
        'survivors_geotagged': 'uint32',
        'deliveries_pending': 'uint32',
        'deliveries_completed': 'uint32',
        'completion_percent': 'float',
        'elapsed_time_sec': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.mission_id = kwargs.get('mission_id', str())
        self.state = kwargs.get('state', str())
        self.survivors_detected = kwargs.get('survivors_detected', int())
        self.survivors_geotagged = kwargs.get('survivors_geotagged', int())
        self.deliveries_pending = kwargs.get('deliveries_pending', int())
        self.deliveries_completed = kwargs.get('deliveries_completed', int())
        self.completion_percent = kwargs.get('completion_percent', float())
        self.elapsed_time_sec = kwargs.get('elapsed_time_sec', float())

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
        if self.mission_id != other.mission_id:
            return False
        if self.state != other.state:
            return False
        if self.survivors_detected != other.survivors_detected:
            return False
        if self.survivors_geotagged != other.survivors_geotagged:
            return False
        if self.deliveries_pending != other.deliveries_pending:
            return False
        if self.deliveries_completed != other.deliveries_completed:
            return False
        if self.completion_percent != other.completion_percent:
            return False
        if self.elapsed_time_sec != other.elapsed_time_sec:
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
    def mission_id(self):
        """Message field 'mission_id'."""
        return self._mission_id

    @mission_id.setter
    def mission_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mission_id' field must be of type 'str'"
        self._mission_id = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

    @builtins.property
    def survivors_detected(self):
        """Message field 'survivors_detected'."""
        return self._survivors_detected

    @survivors_detected.setter
    def survivors_detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'survivors_detected' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'survivors_detected' field must be an unsigned integer in [0, 4294967295]"
        self._survivors_detected = value

    @builtins.property
    def survivors_geotagged(self):
        """Message field 'survivors_geotagged'."""
        return self._survivors_geotagged

    @survivors_geotagged.setter
    def survivors_geotagged(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'survivors_geotagged' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'survivors_geotagged' field must be an unsigned integer in [0, 4294967295]"
        self._survivors_geotagged = value

    @builtins.property
    def deliveries_pending(self):
        """Message field 'deliveries_pending'."""
        return self._deliveries_pending

    @deliveries_pending.setter
    def deliveries_pending(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'deliveries_pending' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'deliveries_pending' field must be an unsigned integer in [0, 4294967295]"
        self._deliveries_pending = value

    @builtins.property
    def deliveries_completed(self):
        """Message field 'deliveries_completed'."""
        return self._deliveries_completed

    @deliveries_completed.setter
    def deliveries_completed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'deliveries_completed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'deliveries_completed' field must be an unsigned integer in [0, 4294967295]"
        self._deliveries_completed = value

    @builtins.property
    def completion_percent(self):
        """Message field 'completion_percent'."""
        return self._completion_percent

    @completion_percent.setter
    def completion_percent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'completion_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'completion_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._completion_percent = value

    @builtins.property
    def elapsed_time_sec(self):
        """Message field 'elapsed_time_sec'."""
        return self._elapsed_time_sec

    @elapsed_time_sec.setter
    def elapsed_time_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'elapsed_time_sec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'elapsed_time_sec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._elapsed_time_sec = value
