# This file creates a server node that supplies needed joint angles to a client requesting a position.

import rclpy
from Manipulator_X import kinematic_library
from rclpy.node import Node
from custom_messages.srv import InvKin #This is a custom .srv file that specifies the type of information being transmitted


class Inv_Server(Node):

    def __init__(self):
        #
        super().__init__('inv_server')
        self.srv = self.create_service(InvKin, 'inverse_server', self.listener_callback) #(Type, name, callback function)


    def listener_callback(self, request, response):
        pose = request.pose # Getting the desired pose from the client
        
        # ADD INVERSE KINEMATICS HERE
        
   
        response.q_1 = 0.0
        response.q_2 = 1.0
        response.q_3 = 2.0
        response.q_4 = 3.0
           
        self.get_logger().info(f'The incoming pose is \n{pose}') # Posting the result to the terminal
        
        return response # The results of the inverse kinematics are sent back to the client


def main():
    rclpy.init()
    inv_server = Inv_Server() # initializing the server object
    rclpy.spin(inv_server)  # Running the node continously
    
    

