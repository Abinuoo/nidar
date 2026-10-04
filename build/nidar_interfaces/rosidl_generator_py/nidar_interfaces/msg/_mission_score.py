# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nidar_interfaces:msg/MissionScore.idl
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


class Metaclass_MissionScore(type):
    """Metaclass of message 'MissionScore'."""

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
                'nidar_interfaces.msg.MissionScore')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_score
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_score
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_score
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_score
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_score

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


class MissionScore(metaclass=Metaclass_MissionScore):
    """Message class 'MissionScore'."""

    __slots__ = [
        '_timestamp',
        '_detection_score',
        '_delivery_score',
        '_collaboration_score',
        '_gcs_score',
        '_fast_completion_score',
        '_penalty_score',
        '_total_score',
        '_mission_time_sec',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'detection_score': 'uint32',
        'delivery_score': 'uint32',
        'collaboration_score': 'uint32',
        'gcs_score': 'uint32',
        'fast_completion_score': 'uint32',
        'penalty_score': 'int32',
        'total_score': 'uint32',
        'mission_time_sec': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.detection_score = kwargs.get('detection_score', int())
        self.delivery_score = kwargs.get('delivery_score', int())
        self.collaboration_score = kwargs.get('collaboration_score', int())
        self.gcs_score = kwargs.get('gcs_score', int())
        self.fast_completion_score = kwargs.get('fast_completion_score', int())
        self.penalty_score = kwargs.get('penalty_score', int())
        self.total_score = kwargs.get('total_score', int())
        self.mission_time_sec = kwargs.get('mission_time_sec', float())

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
        if self.detection_score != other.detection_score:
            return False
        if self.delivery_score != other.delivery_score:
            return False
        if self.collaboration_score != other.collaboration_score:
            return False
        if self.gcs_score != other.gcs_score:
            return False
        if self.fast_completion_score != other.fast_completion_score:
            return False
        if self.penalty_score != other.penalty_score:
            return False
        if self.total_score != other.total_score:
            return False
        if self.mission_time_sec != other.mission_time_sec:
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
    def detection_score(self):
        """Message field 'detection_score'."""
        return self._detection_score

    @detection_score.setter
    def detection_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'detection_score' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'detection_score' field must be an unsigned integer in [0, 4294967295]"
        self._detection_score = value

    @builtins.property
    def delivery_score(self):
        """Message field 'delivery_score'."""
        return self._delivery_score

    @delivery_score.setter
    def delivery_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'delivery_score' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'delivery_score' field must be an unsigned integer in [0, 4294967295]"
        self._delivery_score = value

    @builtins.property
    def collaboration_score(self):
        """Message field 'collaboration_score'."""
        return self._collaboration_score

    @collaboration_score.setter
    def collaboration_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'collaboration_score' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'collaboration_score' field must be an unsigned integer in [0, 4294967295]"
        self._collaboration_score = value

    @builtins.property
    def gcs_score(self):
        """Message field 'gcs_score'."""
        return self._gcs_score

    @gcs_score.setter
    def gcs_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'gcs_score' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gcs_score' field must be an unsigned integer in [0, 4294967295]"
        self._gcs_score = value

    @builtins.property
    def fast_completion_score(self):
        """Message field 'fast_completion_score'."""
        return self._fast_completion_score

    @fast_completion_score.setter
    def fast_completion_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fast_completion_score' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'fast_completion_score' field must be an unsigned integer in [0, 4294967295]"
        self._fast_completion_score = value

    @builtins.property
    def penalty_score(self):
        """Message field 'penalty_score'."""
        return self._penalty_score

    @penalty_score.setter
    def penalty_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'penalty_score' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'penalty_score' field must be an integer in [-2147483648, 2147483647]"
        self._penalty_score = value

    @builtins.property
    def total_score(self):
        """Message field 'total_score'."""
        return self._total_score

    @total_score.setter
    def total_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total_score' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'total_score' field must be an unsigned integer in [0, 4294967295]"
        self._total_score = value

    @builtins.property
    def mission_time_sec(self):
        """Message field 'mission_time_sec'."""
        return self._mission_time_sec

    @mission_time_sec.setter
    def mission_time_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mission_time_sec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mission_time_sec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mission_time_sec = value
