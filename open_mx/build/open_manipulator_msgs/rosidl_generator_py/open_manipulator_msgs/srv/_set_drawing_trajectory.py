# generated from rosidl_generator_py/resource/_idl.py.em
# with input from open_manipulator_msgs:srv/SetDrawingTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'param'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetDrawingTrajectory_Request(type):
    """Metaclass of message 'SetDrawingTrajectory_Request'."""

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
            module = import_type_support('open_manipulator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'open_manipulator_msgs.srv.SetDrawingTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_drawing_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_drawing_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_drawing_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_drawing_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_drawing_trajectory__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetDrawingTrajectory_Request(metaclass=Metaclass_SetDrawingTrajectory_Request):
    """Message class 'SetDrawingTrajectory_Request'."""

    __slots__ = [
        '_end_effector_name',
        '_drawing_trajectory_name',
        '_param',
        '_path_time',
    ]

    _fields_and_field_types = {
        'end_effector_name': 'string',
        'drawing_trajectory_name': 'string',
        'param': 'sequence<double>',
        'path_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.end_effector_name = kwargs.get('end_effector_name', str())
        self.drawing_trajectory_name = kwargs.get('drawing_trajectory_name', str())
        self.param = array.array('d', kwargs.get('param', []))
        self.path_time = kwargs.get('path_time', float())

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
        if self.end_effector_name != other.end_effector_name:
            return False
        if self.drawing_trajectory_name != other.drawing_trajectory_name:
            return False
        if self.param != other.param:
            return False
        if self.path_time != other.path_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def end_effector_name(self):
        """Message field 'end_effector_name'."""
        return self._end_effector_name

    @end_effector_name.setter
    def end_effector_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'end_effector_name' field must be of type 'str'"
        self._end_effector_name = value

    @builtins.property
    def drawing_trajectory_name(self):
        """Message field 'drawing_trajectory_name'."""
        return self._drawing_trajectory_name

    @drawing_trajectory_name.setter
    def drawing_trajectory_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'drawing_trajectory_name' field must be of type 'str'"
        self._drawing_trajectory_name = value

    @builtins.property
    def param(self):
        """Message field 'param'."""
        return self._param

    @param.setter
    def param(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'param' array.array() must have the type code of 'd'"
            self._param = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'param' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._param = array.array('d', value)

    @builtins.property
    def path_time(self):
        """Message field 'path_time'."""
        return self._path_time

    @path_time.setter
    def path_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'path_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'path_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._path_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetDrawingTrajectory_Response(type):
    """Metaclass of message 'SetDrawingTrajectory_Response'."""

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
            module = import_type_support('open_manipulator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'open_manipulator_msgs.srv.SetDrawingTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_drawing_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_drawing_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_drawing_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_drawing_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_drawing_trajectory__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetDrawingTrajectory_Response(metaclass=Metaclass_SetDrawingTrajectory_Response):
    """Message class 'SetDrawingTrajectory_Response'."""

    __slots__ = [
        '_is_planned',
    ]

    _fields_and_field_types = {
        'is_planned': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_planned = kwargs.get('is_planned', bool())

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
        if self.is_planned != other.is_planned:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_planned(self):
        """Message field 'is_planned'."""
        return self._is_planned

    @is_planned.setter
    def is_planned(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_planned' field must be of type 'bool'"
        self._is_planned = value


class Metaclass_SetDrawingTrajectory(type):
    """Metaclass of service 'SetDrawingTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('open_manipulator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'open_manipulator_msgs.srv.SetDrawingTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_drawing_trajectory

            from open_manipulator_msgs.srv import _set_drawing_trajectory
            if _set_drawing_trajectory.Metaclass_SetDrawingTrajectory_Request._TYPE_SUPPORT is None:
                _set_drawing_trajectory.Metaclass_SetDrawingTrajectory_Request.__import_type_support__()
            if _set_drawing_trajectory.Metaclass_SetDrawingTrajectory_Response._TYPE_SUPPORT is None:
                _set_drawing_trajectory.Metaclass_SetDrawingTrajectory_Response.__import_type_support__()


class SetDrawingTrajectory(metaclass=Metaclass_SetDrawingTrajectory):
    from open_manipulator_msgs.srv._set_drawing_trajectory import SetDrawingTrajectory_Request as Request
    from open_manipulator_msgs.srv._set_drawing_trajectory import SetDrawingTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
