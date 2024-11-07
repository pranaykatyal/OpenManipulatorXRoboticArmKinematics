# This file is a ROS wrapper that interacts witht the robot and forms nodes.

import rclpy
from Manipulator_X import kinematic_library
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray # This standard message type is used to receive the 3 parameters as an array.

# The below class listens to the Joint Values Topic an calculates the end effector pose
class Joint_Subscriber(Node):

    def __init__(self):
        # Creating a subscriber node that listens to the joint_values topic and calls "listener_callback" when
        # triggered.
        super().__init__('joint_subscriber')
        self.subscription = self.create_subscription(Float32MultiArray, 'joint_values', self.listener_callback, 10)


    def listener_callback(self, msg):
        robot = kinematic_library.Robot(msg.data) # Creates an object that has the functions needed for the pose calculation
        pose = robot.forward_kinematics() # Using the object functions to calculate the pose
        self.get_logger().info(f'The End Effector Pose is \n{pose}') # Posting the result to the terminal



def main():
    rclpy.init()
    joint_sub = Joint_Subscriber() # initializing the subscriber object
    rclpy.spin(joint_sub)  # Running the node continously
    
def inv_kin_main():
    rclpy

