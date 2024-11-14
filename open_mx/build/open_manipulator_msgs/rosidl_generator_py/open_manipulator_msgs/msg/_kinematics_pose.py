# generated from rosidl_generator_py/resource/_idl.py.em
# with input from open_manipulator_msgs:msg/KinematicsPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KinematicsPose(type):
    """Metaclass of message 'KinematicsPose'."""

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
                'open_manipulator_msgs.msg.KinematicsPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__kinematics_pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__kinematics_pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__kinematics_pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__kinematics_pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__kinematics_pose

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class KinematicsPose(metaclass=Metaclass_KinematicsPose):
    """Message class 'KinematicsPose'."""

    __slots__ = [
        '_pose',
        '_max_accelerations_scaling_factor',
        '_max_velocity_scaling_factor',
        '_tolerance',
    ]

    _fields_and_field_types = {
        'pose': 'geometry_msgs/Pose',
        'max_accelerations_scaling_factor': 'double',
        'max_velocity_scaling_factor': 'double',
        'tolerance': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.max_accelerations_scaling_factor = kwargs.get('max_accelerations_scaling_factor', float())
        self.max_velocity_scaling_factor = kwargs.get('max_velocity_scaling_factor', float())
        self.tolerance = kwargs.get('tolerance', float())

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
        if self.pose != other.pose:
            return False
        if self.max_accelerations_scaling_factor != other.max_accelerations_scaling_factor:
            return False
        if self.max_velocity_scaling_factor != other.max_velocity_scaling_factor:
            return False
        if self.tolerance != other.tolerance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def max_accelerations_scaling_factor(self):
        """Message field 'max_accelerations_scaling_factor'."""
        return self._max_accelerations_scaling_factor

    @max_accelerations_scaling_factor.setter
    def max_accelerations_scaling_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_accelerations_scaling_factor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_accelerations_scaling_factor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_accelerations_scaling_factor = value

    @builtins.property
    def max_velocity_scaling_factor(self):
        """Message field 'max_velocity_scaling_factor'."""
        return self._max_velocity_scaling_factor

    @max_velocity_scaling_factor.setter
    def max_velocity_scaling_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_velocity_scaling_factor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_velocity_scaling_factor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_velocity_scaling_factor = value

    @builtins.property
    def tolerance(self):
        """Message field 'tolerance'."""
        return self._tolerance

    @tolerance.setter
    def tolerance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tolerance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tolerance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tolerance = value
