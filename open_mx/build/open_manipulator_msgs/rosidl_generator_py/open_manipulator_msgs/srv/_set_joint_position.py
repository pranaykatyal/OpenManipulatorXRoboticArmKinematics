# generated from rosidl_generator_py/resource/_idl.py.em
# with input from open_manipulator_msgs:srv/SetJointPosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetJointPosition_Request(type):
    """Metaclass of message 'SetJointPosition_Request'."""

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
                'open_manipulator_msgs.srv.SetJointPosition_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joint_position__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joint_position__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joint_position__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joint_position__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joint_position__request

            from open_manipulator_msgs.msg import JointPosition
            if JointPosition.__class__._TYPE_SUPPORT is None:
                JointPosition.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetJointPosition_Request(metaclass=Metaclass_SetJointPosition_Request):
    """Message class 'SetJointPosition_Request'."""

    __slots__ = [
        '_planning_group',
        '_joint_position',
        '_path_time',
    ]

    _fields_and_field_types = {
        'planning_group': 'string',
        'joint_position': 'open_manipulator_msgs/JointPosition',
        'path_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['open_manipulator_msgs', 'msg'], 'JointPosition'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.planning_group = kwargs.get('planning_group', str())
        from open_manipulator_msgs.msg import JointPosition
        self.joint_position = kwargs.get('joint_position', JointPosition())
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
        if self.planning_group != other.planning_group:
            return False
        if self.joint_position != other.joint_position:
            return False
        if self.path_time != other.path_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def planning_group(self):
        """Message field 'planning_group'."""
        return self._planning_group

    @planning_group.setter
    def planning_group(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'planning_group' field must be of type 'str'"
        self._planning_group = value

    @builtins.property
    def joint_position(self):
        """Message field 'joint_position'."""
        return self._joint_position

    @joint_position.setter
    def joint_position(self, value):
        if __debug__:
            from open_manipulator_msgs.msg import JointPosition
            assert \
                isinstance(value, JointPosition), \
                "The 'joint_position' field must be a sub message of type 'JointPosition'"
        self._joint_position = value

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


class Metaclass_SetJointPosition_Response(type):
    """Metaclass of message 'SetJointPosition_Response'."""

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
                'open_manipulator_msgs.srv.SetJointPosition_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joint_position__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joint_position__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joint_position__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joint_position__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joint_position__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetJointPosition_Response(metaclass=Metaclass_SetJointPosition_Response):
    """Message class 'SetJointPosition_Response'."""

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


class Metaclass_SetJointPosition(type):
    """Metaclass of service 'SetJointPosition'."""

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
                'open_manipulator_msgs.srv.SetJointPosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_joint_position

            from open_manipulator_msgs.srv import _set_joint_position
            if _set_joint_position.Metaclass_SetJointPosition_Request._TYPE_SUPPORT is None:
                _set_joint_position.Metaclass_SetJointPosition_Request.__import_type_support__()
            if _set_joint_position.Metaclass_SetJointPosition_Response._TYPE_SUPPORT is None:
                _set_joint_position.Metaclass_SetJointPosition_Response.__import_type_support__()


class SetJointPosition(metaclass=Metaclass_SetJointPosition):
    from open_manipulator_msgs.srv._set_joint_position import SetJointPosition_Request as Request
    from open_manipulator_msgs.srv._set_joint_position import SetJointPosition_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
