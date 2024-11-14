# generated from rosidl_generator_py/resource/_idl.py.em
# with input from open_manipulator_msgs:msg/OpenManipulatorState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OpenManipulatorState(type):
    """Metaclass of message 'OpenManipulatorState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'IS_MOVING': 'IS_MOVING',
        'STOPPED': 'STOPPED',
        'ACTUATOR_ENABLED': 'ACTUATOR_ENABLED',
        'ACTUATOR_DISABLED': 'ACTUATOR_DISABLED',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('open_manipulator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'open_manipulator_msgs.msg.OpenManipulatorState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__open_manipulator_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__open_manipulator_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__open_manipulator_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__open_manipulator_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__open_manipulator_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'IS_MOVING': cls.__constants['IS_MOVING'],
            'STOPPED': cls.__constants['STOPPED'],
            'ACTUATOR_ENABLED': cls.__constants['ACTUATOR_ENABLED'],
            'ACTUATOR_DISABLED': cls.__constants['ACTUATOR_DISABLED'],
        }

    @property
    def IS_MOVING(self):
        """Message constant 'IS_MOVING'."""
        return Metaclass_OpenManipulatorState.__constants['IS_MOVING']

    @property
    def STOPPED(self):
        """Message constant 'STOPPED'."""
        return Metaclass_OpenManipulatorState.__constants['STOPPED']

    @property
    def ACTUATOR_ENABLED(self):
        """Message constant 'ACTUATOR_ENABLED'."""
        return Metaclass_OpenManipulatorState.__constants['ACTUATOR_ENABLED']

    @property
    def ACTUATOR_DISABLED(self):
        """Message constant 'ACTUATOR_DISABLED'."""
        return Metaclass_OpenManipulatorState.__constants['ACTUATOR_DISABLED']


class OpenManipulatorState(metaclass=Metaclass_OpenManipulatorState):
    """
    Message class 'OpenManipulatorState'.

    Constants:
      IS_MOVING
      STOPPED
      ACTUATOR_ENABLED
      ACTUATOR_DISABLED
    """

    __slots__ = [
        '_open_manipulator_moving_state',
        '_open_manipulator_actuator_state',
    ]

    _fields_and_field_types = {
        'open_manipulator_moving_state': 'string',
        'open_manipulator_actuator_state': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.open_manipulator_moving_state = kwargs.get('open_manipulator_moving_state', str())
        self.open_manipulator_actuator_state = kwargs.get('open_manipulator_actuator_state', str())

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
        if self.open_manipulator_moving_state != other.open_manipulator_moving_state:
            return False
        if self.open_manipulator_actuator_state != other.open_manipulator_actuator_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def open_manipulator_moving_state(self):
        """Message field 'open_manipulator_moving_state'."""
        return self._open_manipulator_moving_state

    @open_manipulator_moving_state.setter
    def open_manipulator_moving_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'open_manipulator_moving_state' field must be of type 'str'"
        self._open_manipulator_moving_state = value

    @builtins.property
    def open_manipulator_actuator_state(self):
        """Message field 'open_manipulator_actuator_state'."""
        return self._open_manipulator_actuator_state

    @open_manipulator_actuator_state.setter
    def open_manipulator_actuator_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'open_manipulator_actuator_state' field must be of type 'str'"
        self._open_manipulator_actuator_state = value
