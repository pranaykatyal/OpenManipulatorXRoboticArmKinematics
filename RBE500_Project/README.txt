#READ ME

FILES:
kinematic_library: Defines a Robot Class with functions needed to calculate forward kinematic
ros_wrapper: creates a node that listens for joint parameters and returns the resulting pose


HOW TO USE:
First, create a subscriber node: 
ros2 run Manipulator_X joint_listener
Next, publish to it using the following statement in a different terminal:
ros2 topic pub --once joint_values std_msgs/msg/Float32MultiArray '{data: [0, 0, 0, 0]}'

