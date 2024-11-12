PACKAGE #1: custom_messages:
Purpose - Defines interface .msg and .srv files that are used to transfer information. Currently, it is only used to
define InvKin.srv, which specifies data types sent between the inverse kinematic server and client


PACKAGE #2: robot_omx
Purpose - This is the primary package used for calculations and robot control.
Files:
	kinematic_library.py - Defines a Robot Class with functions needed to calculate forward and inverse kinematics
	forward_kin_subscriber.py - Creates a subscriber that listens for a "joint_values" topic and then calculates the resulting pose.
	inv_kin_client.py - Creates a client that sends desired poses to a server.
	inv_kin_server.py - Receives desired poses from the client, and calculates inverse kinematics. It returns the needed joint angles to the client.
	

HOW TO USE:
Commands to launch the nodes: 
	ros2 run robot_omx joint_listener
        ros2 run robot_omx inverse_server
        ros2 run robot_omx inverse_client

Next, publish to it using the following statement in a different terminal:
ros2 topic pub --once joint_values std_msgs/msg/Float32MultiArray '{data: [0, 0, 0, 0]}'

