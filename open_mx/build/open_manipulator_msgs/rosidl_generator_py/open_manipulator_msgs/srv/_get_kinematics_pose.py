# generated from rosidl_generator_py/resource/_idl.py.em
# with input from open_manipulator_msgs:srv/GetKinematicsPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetKinematicsPose_Request(type):
    """Metaclass of message 'GetKinematicsPose_Request'."""

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
                'open_manipulator_msgs.srv.GetKinematicsPose_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_kinematics_pose__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_kinematics_pose__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_kinematics_pose__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_kinematics_pose__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_kinematics_pose__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetKinematicsPose_Request(metaclass=Metaclass_GetKinematicsPose_Request):
    """Message class 'GetKinematicsPose_Request'."""

    __slots__ = [
        '_planning_group',
        '_end_effector_name',
    ]

    _fields_and_field_types = {
        'planning_group': 'string',
        'end_effector_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.planning_group = kwargs.get('planning_group', str())
        self.end_effector_name = kwargs.get('end_effector_name', str())

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
        if self.end_effector_name != other.end_effector_name:
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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetKinematicsPose_Response(type):
    """Metaclass of message 'GetKinematicsPose_Response'."""

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
                'open_manipulator_msgs.srv.GetKinematicsPose_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_kinematics_pose__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_kinematics_pose__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_kinematics_pose__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_kinematics_pose__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_kinematics_pose__response

            from open_manipulator_msgs.msg import KinematicsPose
            if KinematicsPose.__class__._TYPE_SUPPORT is None:
                KinematicsPose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetKinematicsPose_Response(metaclass=Metaclass_GetKinematicsPose_Response):
    """Message class 'GetKinematicsPose_Response'."""

    __slots__ = [
        '_header',
        '_kinematics_pose',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'kinematics_pose': 'open_manipulator_msgs/KinematicsPose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['open_manipulator_msgs', 'msg'], 'KinematicsPose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from open_manipulator_msgs.msg import KinematicsPose
        self.kinematics_pose = kwargs.get('kinematics_pose', KinematicsPose())

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
        if self.header != other.header:
            return False
        if self.kinematics_pose != other.kinematics_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def kinematics_pose(self):
        """Message field 'kinematics_pose'."""
        return self._kinematics_pose

    @kinematics_pose.setter
    def kinematics_pose(self, value):
        if __debug__:
            from open_manipulator_msgs.msg import KinematicsPose
            assert \
                isinstance(value, KinematicsPose), \
                "The 'kinematics_pose' field must be a sub message of type 'KinematicsPose'"
        self._kinematics_pose = value


class Metaclass_GetKinematicsPose(type):
    """Metaclass of service 'GetKinematicsPose'."""

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
                'open_manipulator_msgs.srv.GetKinematicsPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_kinematics_pose

            from open_manipulator_msgs.srv import _get_kinematics_pose
            if _get_kinematics_pose.Metaclass_GetKinematicsPose_Request._TYPE_SUPPORT is None:
                _get_kinematics_pose.Metaclass_GetKinematicsPose_Request.__import_type_support__()
            if _get_kinematics_pose.Metaclass_GetKinematicsPose_Response._TYPE_SUPPORT is None:
                _get_kinematics_pose.Metaclass_GetKinematicsPose_Response.__import_type_support__()


class GetKinematicsPose(metaclass=Metaclass_GetKinematicsPose):
    from open_manipulator_msgs.srv._get_kinematics_pose import GetKinematicsPose_Request as Request
    from open_manipulator_msgs.srv._get_kinematics_pose import GetKinematicsPose_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
