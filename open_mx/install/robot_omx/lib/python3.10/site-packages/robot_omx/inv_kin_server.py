# This file creates a server node that supplies needed joint angles to a client requesting a pose.

import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from custom_messages.srv import InvKin #This is a custom .srv file that specifies the type of information being transmitted
from open_manipulator_msgs.srv import SetJointPosition, SetKinematicsPose


class Inv_Server(Node):

    def __init__(self):
        super().__init__('inv_server') # Creating a server node with the name "inv_server"
        self.srv = self.create_service(InvKin, 'inverse_server', self.listener_callback) # (Type, name, callback function)
        #Creating Client to control the robot:
        self.goal_joint_space = self.create_client(SetJointPosition, 'goal_joint_space_path')
        self.goal_joint_space_req = SetJointPosition.Request()


    def listener_callback(self, request, response):
        pose = request.pose # Getting the desired pose from the client
        self.get_logger().info(f'\n\nThe incoming pose is \n{pose}') # Posting the received request to the terminal
        matrix = kinematic_library.pose2rot(pose)
        # Initializing robot object that contains the needed methods, and calculating the inverse kinematics:
        (response.q_1, response.q_2, response.q_3, response.q_4) = kinematic_library.get_q_values(matrix)

        # Calling method to send command to move robot:
        default_path_time = 5.0
        self.send_goal_joint_space(response, default_path_time)

        return response # The results of the inverse kinematics are sent back to the client


    def send_goal_joint_space(self, desired_joint_angles, path_time): # Source: Python example file from canvas
        self.goal_joint_space_req.joint_position.joint_name = ['joint1', 'joint2', 'joint3', 'joint4', 'gripper']
        self.goal_joint_space_req.joint_position.position = [desired_joint_angles.q_1, desired_joint_angles.q_2, desired_joint_angles.q_3, desired_joint_angles.q_4, 0.0]
        self.goal_joint_space_req.path_time = path_time

        try:
            self.goal_joint_space.call_async(self.goal_joint_space_req)
        except Exception as e:
            self.get_logger().info('Sending Goal Joint failed %r' % (e,))

        return 1

def main():
    rclpy.init()
    inv_server = Inv_Server() # initializing the server object
    rclpy.spin(inv_server)  # Running the node continously





