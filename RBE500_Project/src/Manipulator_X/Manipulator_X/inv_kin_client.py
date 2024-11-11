# This file is a Client that sends inverse kinematics requests to a server

import rclpy
from Manipulator_X import kinematic_library
from rclpy.node import Node
from custom_messages.srv import InvKin # Importing a custom srv to specify how server/client info is sent
from geometry_msgs.msg import Pose

# The below class creates a node that sends a pose to a server. The server then returns the joint parameters for that pose.
class Inv_Client(Node):

    def __init__(self):
        # Creating a client that sends a desired pose to inverse_server
        super().__init__('inv_client')
        self.cli = self.create_client(InvKin, 'inverse_server') #(Type, name)
        while not self.cli.wait_for_service(timeout_sec=1.0): # Every second it checks to see if the server is available
        	self.get_logger().info('The serviice is not available yet. Will try again every second')
        self.req = InvKin.Request() # Creating a request object that is filled in the request method below
        


    def inverse_client_request(self, desired_pose):
        self.req.pose = desired_pose                   
        return self.cli.call_async(self.req) # Sending the request to the server


def main():
    test_pose = Pose()
    test_pose.position.x = 1.0
    test_pose.position.y = 2.0
    test_pose.position.z = 3.0
    test_pose.orientation.x = 1.0
    test_pose.orientation.y = 2.0
    test_pose.orientation.z = 3.0
    test_pose.orientation.w = 4.0
    
    rclpy.init()
    inv_client = Inv_Client() # initializing the client object
    server_output = inv_client.inverse_client_request(test_pose)
    joint_angles = server_output.result() # Posting result
    inv_client.get_logger().info('Result from server is {joint_angles}')
    rclpy.spin(inv_client)  # Running the node continously
    
    

