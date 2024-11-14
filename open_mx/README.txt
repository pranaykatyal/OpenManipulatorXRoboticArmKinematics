################################################ USER CREATED PACKAGES ###############################################
PACKAGE #1: custom_messages:
Purpose - Defines interface .msg and .srv files that are used to transfer information. Currently, it is only used to
define InvKin.srv, which specifies data types sent between the inverse kinematic server and client

--------------------------------------------------------------------------------------------------------------------
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

To Interact with joint_listener:
	Publish to it using the following statement:
	ros2 topic pub --once joint_values std_msgs/msg/Float32MultiArray '{data: [0, 0, 0, 0]}'

To send user poses to the inverse kinematics server through the CLIENT, use the following: 
	ros2 run robot_omx inverse_client 1.0 1.0 1.0 1.0 1.0 1.0 1.0 
	# First three values are the position. Last three are the orienation in quaternions

# To send user poses to the inverse kinematics server DIRECTLY, use the following: 
	ros2 service call /inverse_server custom_messages/srv/InvKin "{pose: {position: {x: 1.0, y: 2.0, z: 0.5}, orientation: {x: 0.0, y: 0.0, z: 1.0, w: 1.0}}}"


################################################ PROVIDED PACKAGES FROM CANVAS ##########################################
DynamixelSDK
dynamixel_workbench
open_manipulator_r
open_manipulator_r_dependencies
open_manipulator_msgs
rbe500-example
rbe500_example_py
robotis_manipulator

