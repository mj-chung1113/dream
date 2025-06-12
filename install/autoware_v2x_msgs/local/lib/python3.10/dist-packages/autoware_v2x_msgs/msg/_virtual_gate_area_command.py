# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_v2x_msgs:msg/VirtualGateAreaCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VirtualGateAreaCommand(type):
    """Metaclass of message 'VirtualGateAreaCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACQUIRE': 1,
        'RELEASE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_v2x_msgs.msg.VirtualGateAreaCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__virtual_gate_area_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__virtual_gate_area_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__virtual_gate_area_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__virtual_gate_area_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__virtual_gate_area_command

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACQUIRE': cls.__constants['ACQUIRE'],
            'RELEASE': cls.__constants['RELEASE'],
        }

    @property
    def ACQUIRE(self):
        """Message constant 'ACQUIRE'."""
        return Metaclass_VirtualGateAreaCommand.__constants['ACQUIRE']

    @property
    def RELEASE(self):
        """Message constant 'RELEASE'."""
        return Metaclass_VirtualGateAreaCommand.__constants['RELEASE']


class VirtualGateAreaCommand(metaclass=Metaclass_VirtualGateAreaCommand):
    """
    Message class 'VirtualGateAreaCommand'.

    Constants:
      ACQUIRE
      RELEASE
    """

    __slots__ = [
        '_command',
        '_sequence_id',
        '_area_id',
        '_gate_ids',
        '_expected_time_arrival',
    ]

    _fields_and_field_types = {
        'command': 'uint16',
        'sequence_id': 'uint16',
        'area_id': 'string',
        'gate_ids': 'sequence<string>',
        'expected_time_arrival': 'sequence<builtin_interfaces/Time, 1>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', int())
        self.sequence_id = kwargs.get('sequence_id', int())
        self.area_id = kwargs.get('area_id', str())
        self.gate_ids = kwargs.get('gate_ids', [])
        self.expected_time_arrival = kwargs.get('expected_time_arrival', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.command != other.command:
            return False
        if self.sequence_id != other.sequence_id:
            return False
        if self.area_id != other.area_id:
            return False
        if self.gate_ids != other.gate_ids:
            return False
        if self.expected_time_arrival != other.expected_time_arrival:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'command' field must be an unsigned integer in [0, 65535]"
        self._command = value

    @builtins.property
    def sequence_id(self):
        """Message field 'sequence_id'."""
        return self._sequence_id

    @sequence_id.setter
    def sequence_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sequence_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sequence_id' field must be an unsigned integer in [0, 65535]"
        self._sequence_id = value

    @builtins.property
    def area_id(self):
        """Message field 'area_id'."""
        return self._area_id

    @area_id.setter
    def area_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'area_id' field must be of type 'str'"
        self._area_id = value

    @builtins.property
    def gate_ids(self):
        """Message field 'gate_ids'."""
        return self._gate_ids

    @gate_ids.setter
    def gate_ids(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'gate_ids' field must be a set or sequence and each value of type 'str'"
        self._gate_ids = value

    @builtins.property
    def expected_time_arrival(self):
        """Message field 'expected_time_arrival'."""
        return self._expected_time_arrival

    @expected_time_arrival.setter
    def expected_time_arrival(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, Time) for v in value) and
                 True), \
                "The 'expected_time_arrival' field must be a set or sequence with length <= 1 and each value of type 'Time'"
        self._expected_time_arrival = value
