# This file creates a server node that supplies needed joint angles to a client requesting a pose.

import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from custom_messages.srv import InvKin #This is a custom .srv file that specifies the type of information being transmitted


class Inv_Server(Node):

    def __init__(self):
        super().__init__('inv_server') # Creating a server node with the name "inv_server"
        self.srv = self.create_service(InvKin, 'inverse_server', self.listener_callback) # (Type, name, callback function)


    def listener_callback(self, request, response):
        pose = request.pose # Getting the desired pose from the client
        self.get_logger().info(f'The incoming pose is \n{pose}') # Posting the received request to the terminal

        # Initializing robot object that contains the needed methods, and calculating the inverse kinematics:
        robot = kinematic_library.Robot()
        (response.q_1, response.q_2, response.q_3, response.q_4) = robot.inverse_kinematics(pose)
        
        
    
        return response # The results of the inverse kinematics are sent back to the client


def main():
    rclpy.init()
    inv_server = Inv_Server() # initializing the server object
    rclpy.spin(inv_server)  # Running the node continously
    
    

