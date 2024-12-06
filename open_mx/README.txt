################################################ USER CREATED PACKAGES ###############################################
PACKAGE #1: custom_messages:
Purpose - Defines interface .msg and .srv files that are used to transfer information.

--------------------------------------------------------------------------------------------------------------------
PACKAGE #2: robot_omx
Purpose - This is the primary package used for calculations and robot control.
Files:
	kinematic_library.py - Defines a Robot Class with functions needed to calculate forward and inverse kinematics
	forward_kin_subscriber.py - Creates a subscriber that listens for a "joint_values" topic and then calculates the resulting pose.
	inv_kin_client.py - Creates a client that sends desired poses to a server.
	inv_kin_server.py - Receives desired poses from the client, and calculates inverse kinematics. It returns the needed joint angles to the client.
	velocity_server.py - Creates two services to calculate forward and inverse velocity kinematics.
	robot_node.py - Central file used for velocity control.

HOW TO USE:
Commands to launch the nodes: 
	ros2 run robot_omx joint_listener
        ros2 run robot_omx inverse_server
        ros2 run robot_omx inverse_client
        ros2 run robot_omx velocity_server
        ros2 run robot_omx robot

To Interact with joint_listener:
	Publish to it using the following statement:
	ros2 topic pub --once joint_values std_msgs/msg/Float32MultiArray '{data: [0, 0, 0, 0]}'

To send user poses to the inverse kinematics server through the CLIENT, use the following: 
	ros2 run robot_omx inverse_client 207.0254 119.5262 138.3166 0.612 -0.707 0.0 0.354 
	# First three values are the position. Last three are the orienation in quaternions

# To send user poses to the inverse kinematics server DIRECTLY, use the following: 
	ros2 service call /inverse_server custom_messages/srv/InvKin "{pose: {position: {x: -281.4, y: 0.0, z: 224.326}, orientation: {x: 0.0, y: 0,7071, z: -0.7071, w: 0.0}}}"

# To send user poses to the velocity server DIRECTLY, use the following: 
	ros2 service call /velocity_server custom_messages/srv/Velocity "{q_1: 0.0, q_2: 0.0, q_3: 0.0, q_4: 0.0, q_1_dot: 0.0, q_2_dot: 0.0, q_3_dot: 0.0, q_4_dot: 0.0}"
	
# To send user poses to the inverse_velocity_server DIRECTLY, use the following: 
	ros2 service call /inverse_velocity_server custom_messages/srv/Velocity "{q_1: 0.0, q_2: 0.0, q_3: 0.0, q_4: 0.0, q_1_dot: 0.0, q_2_dot: 0.0, q_3_dot: 0.0, q_4_dot: 0.0}"
	
	
# To run the velocity control, call the robot node:
	ros2 run robot_omx robot
################################################ PROVIDED PACKAGES FROM CANVAS ##########################################
DynamixelSDK
dynamixel_workbench
open_manipulator_r
open_manipulator_r_dependencies
open_manipulator_msgs
rbe500-example
rbe500_example_py
robotis_manipulator


########################################### MOVING THE ROBOT ########################################################
First, make sure you have connected to the robot:
ros2 launch open_manipulator_x_controller open_manipulator_x_controller.launch.py


################################## LISTENING TO ROBOT TOPICS###################################################
We can view the joint values using: 
ros2 topic echo /joint_states


