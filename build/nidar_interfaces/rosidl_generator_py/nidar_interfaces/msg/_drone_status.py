# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nidar_interfaces:msg/DroneStatus.idl
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


class Metaclass_DroneStatus(type):
    """Metaclass of message 'DroneStatus'."""

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
                'nidar_interfaces.msg.DroneStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__drone_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__drone_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__drone_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__drone_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__drone_status

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


class DroneStatus(metaclass=Metaclass_DroneStatus):
    """Message class 'DroneStatus'."""

    __slots__ = [
        '_timestamp',
        '_drone_id',
        '_role',
        '_connected',
        '_armed',
        '_flight_mode',
        '_battery_percent',
        '_x',
        '_y',
        '_z',
        '_latitude',
        '_longitude',
        '_communication_ok',
        '_geofence_ok',
        '_mission_state',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'drone_id': 'string',
        'role': 'string',
        'connected': 'boolean',
        'armed': 'boolean',
        'flight_mode': 'string',
        'battery_percent': 'float',
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'latitude': 'double',
        'longitude': 'double',
        'communication_ok': 'boolean',
        'geofence_ok': 'boolean',
        'mission_state': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.drone_id = kwargs.get('drone_id', str())
        self.role = kwargs.get('role', str())
        self.connected = kwargs.get('connected', bool())
        self.armed = kwargs.get('armed', bool())
        self.flight_mode = kwargs.get('flight_mode', str())
        self.battery_percent = kwargs.get('battery_percent', float())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.communication_ok = kwargs.get('communication_ok', bool())
        self.geofence_ok = kwargs.get('geofence_ok', bool())
        self.mission_state = kwargs.get('mission_state', str())

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
        if self.drone_id != other.drone_id:
            return False
        if self.role != other.role:
            return False
        if self.connected != other.connected:
            return False
        if self.armed != other.armed:
            return False
        if self.flight_mode != other.flight_mode:
            return False
        if self.battery_percent != other.battery_percent:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.communication_ok != other.communication_ok:
            return False
        if self.geofence_ok != other.geofence_ok:
            return False
        if self.mission_state != other.mission_state:
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
    def drone_id(self):
        """Message field 'drone_id'."""
        return self._drone_id

    @drone_id.setter
    def drone_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'drone_id' field must be of type 'str'"
        self._drone_id = value

    @builtins.property
    def role(self):
        """Message field 'role'."""
        return self._role

    @role.setter
    def role(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'role' field must be of type 'str'"
        self._role = value

    @builtins.property
    def connected(self):
        """Message field 'connected'."""
        return self._connected

    @connected.setter
    def connected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'connected' field must be of type 'bool'"
        self._connected = value

    @builtins.property
    def armed(self):
        """Message field 'armed'."""
        return self._armed

    @armed.setter
    def armed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'armed' field must be of type 'bool'"
        self._armed = value

    @builtins.property
    def flight_mode(self):
        """Message field 'flight_mode'."""
        return self._flight_mode

    @flight_mode.setter
    def flight_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'flight_mode' field must be of type 'str'"
        self._flight_mode = value

    @builtins.property
    def battery_percent(self):
        """Message field 'battery_percent'."""
        return self._battery_percent

    @battery_percent.setter
    def battery_percent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_percent = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def communication_ok(self):
        """Message field 'communication_ok'."""
        return self._communication_ok

    @communication_ok.setter
    def communication_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'communication_ok' field must be of type 'bool'"
        self._communication_ok = value

    @builtins.property
    def geofence_ok(self):
        """Message field 'geofence_ok'."""
        return self._geofence_ok

    @geofence_ok.setter
    def geofence_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'geofence_ok' field must be of type 'bool'"
        self._geofence_ok = value

    @builtins.property
    def mission_state(self):
        """Message field 'mission_state'."""
        return self._mission_state

    @mission_state.setter
    def mission_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mission_state' field must be of type 'str'"
        self._mission_state = value
