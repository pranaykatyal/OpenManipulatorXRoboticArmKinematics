# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_messages:srv/InvKin.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InvKin_Request(type):
    """Metaclass of message 'InvKin_Request'."""

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
            module = import_type_support('custom_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_messages.srv.InvKin_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inv_kin__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inv_kin__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inv_kin__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inv_kin__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inv_kin__request

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


class InvKin_Request(metaclass=Metaclass_InvKin_Request):
    """Message class 'InvKin_Request'."""

    __slots__ = [
        '_pose',
    ]

    _fields_and_field_types = {
        'pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())

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


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_InvKin_Response(type):
    """Metaclass of message 'InvKin_Response'."""

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
            module = import_type_support('custom_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_messages.srv.InvKin_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inv_kin__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inv_kin__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inv_kin__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inv_kin__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inv_kin__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InvKin_Response(metaclass=Metaclass_InvKin_Response):
    """Message class 'InvKin_Response'."""

    __slots__ = [
        '_q_1',
        '_q_2',
        '_q_3',
        '_q_4',
    ]

    _fields_and_field_types = {
        'q_1': 'float',
        'q_2': 'float',
        'q_3': 'float',
        'q_4': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.q_1 = kwargs.get('q_1', float())
        self.q_2 = kwargs.get('q_2', float())
        self.q_3 = kwargs.get('q_3', float())
        self.q_4 = kwargs.get('q_4', float())

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
        if self.q_1 != other.q_1:
            return False
        if self.q_2 != other.q_2:
            return False
        if self.q_3 != other.q_3:
            return False
        if self.q_4 != other.q_4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def q_1(self):
        """Message field 'q_1'."""
        return self._q_1

    @q_1.setter
    def q_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'q_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._q_1 = value

    @builtins.property
    def q_2(self):
        """Message field 'q_2'."""
        return self._q_2

    @q_2.setter
    def q_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'q_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._q_2 = value

    @builtins.property
    def q_3(self):
        """Message field 'q_3'."""
        return self._q_3

    @q_3.setter
    def q_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'q_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._q_3 = value

    @builtins.property
    def q_4(self):
        """Message field 'q_4'."""
        return self._q_4

    @q_4.setter
    def q_4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q_4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'q_4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._q_4 = value


class Metaclass_InvKin(type):
    """Metaclass of service 'InvKin'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_messages.srv.InvKin')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__inv_kin

            from custom_messages.srv import _inv_kin
            if _inv_kin.Metaclass_InvKin_Request._TYPE_SUPPORT is None:
                _inv_kin.Metaclass_InvKin_Request.__import_type_support__()
            if _inv_kin.Metaclass_InvKin_Response._TYPE_SUPPORT is None:
                _inv_kin.Metaclass_InvKin_Response.__import_type_support__()


class InvKin(metaclass=Metaclass_InvKin):
    from custom_messages.srv._inv_kin import InvKin_Request as Request
    from custom_messages.srv._inv_kin import InvKin_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
