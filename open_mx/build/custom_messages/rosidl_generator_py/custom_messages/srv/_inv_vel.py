# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_messages:srv/InvVel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InvVel_Request(type):
    """Metaclass of message 'InvVel_Request'."""

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
                'custom_messages.srv.InvVel_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inv_vel__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inv_vel__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inv_vel__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inv_vel__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inv_vel__request

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InvVel_Request(metaclass=Metaclass_InvVel_Request):
    """Message class 'InvVel_Request'."""

    __slots__ = [
        '_twist',
    ]

    _fields_and_field_types = {
        'twist': 'geometry_msgs/Twist',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Twist
        self.twist = kwargs.get('twist', Twist())

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
        if self.twist != other.twist:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def twist(self):
        """Message field 'twist'."""
        return self._twist

    @twist.setter
    def twist(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'twist' field must be a sub message of type 'Twist'"
        self._twist = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_InvVel_Response(type):
    """Metaclass of message 'InvVel_Response'."""

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
                'custom_messages.srv.InvVel_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inv_vel__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inv_vel__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inv_vel__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inv_vel__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inv_vel__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InvVel_Response(metaclass=Metaclass_InvVel_Response):
    """Message class 'InvVel_Response'."""

    __slots__ = [
        '_q_1_dot',
        '_q_2_dot',
        '_q_3_dot',
        '_q_4_dot',
    ]

    _fields_and_field_types = {
        'q_1_dot': 'float',
        'q_2_dot': 'float',
        'q_3_dot': 'float',
        'q_4_dot': 'float',
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
        self.q_1_dot = kwargs.get('q_1_dot', float())
        self.q_2_dot = kwargs.get('q_2_dot', float())
        self.q_3_dot = kwargs.get('q_3_dot', float())
        self.q_4_dot = kwargs.get('q_4_dot', float())

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
        if self.q_1_dot != other.q_1_dot:
            return False
        if self.q_2_dot != other.q_2_dot:
            return False
        if self.q_3_dot != other.q_3_dot:
            return False
        if self.q_4_dot != other.q_4_dot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def q_1_dot(self):
        """Message field 'q_1_dot'."""
        return self._q_1_dot

    @q_1_dot.setter
    def q_1_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q_1_dot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'q_1_dot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._q_1_dot = value

    @builtins.property
    def q_2_dot(self):
        """Message field 'q_2_dot'."""
        return self._q_2_dot

    @q_2_dot.setter
    def q_2_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q_2_dot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'q_2_dot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._q_2_dot = value

    @builtins.property
    def q_3_dot(self):
        """Message field 'q_3_dot'."""
        return self._q_3_dot

    @q_3_dot.setter
    def q_3_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q_3_dot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'q_3_dot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._q_3_dot = value

    @builtins.property
    def q_4_dot(self):
        """Message field 'q_4_dot'."""
        return self._q_4_dot

    @q_4_dot.setter
    def q_4_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q_4_dot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'q_4_dot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._q_4_dot = value


class Metaclass_InvVel(type):
    """Metaclass of service 'InvVel'."""

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
                'custom_messages.srv.InvVel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__inv_vel

            from custom_messages.srv import _inv_vel
            if _inv_vel.Metaclass_InvVel_Request._TYPE_SUPPORT is None:
                _inv_vel.Metaclass_InvVel_Request.__import_type_support__()
            if _inv_vel.Metaclass_InvVel_Response._TYPE_SUPPORT is None:
                _inv_vel.Metaclass_InvVel_Response.__import_type_support__()


class InvVel(metaclass=Metaclass_InvVel):
    from custom_messages.srv._inv_vel import InvVel_Request as Request
    from custom_messages.srv._inv_vel import InvVel_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
