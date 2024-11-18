# This file is a Client that sends inverse kinematics requests to a server

import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from custom_messages.srv import InvKin # Importing a custom srv to specify how server/client info is sent
from open_manipulator_msgs.srv import SetJointPosition, SetKinematicsPose
from geometry_msgs.msg import Pose
import sys # Needed for getting user entered poses from the command line


# The below class creates a node that sends a pose to a server. The server then returns the joint parameters for that pose.
class Inv_Client(Node):

    def __init__(self):
        # Creating a client that sends a desired pose to inverse_server
        super().__init__('inv_client')
        self.cli = self.create_client(InvKin, 'inverse_server') #(Type, name)
        self.goal_joint_space = self.create_client(SetJointPosition, 'goal_joint_space_path')
        while not self.cli.wait_for_service(timeout_sec=1.0): # Every second it checks to see if the server is available
        	self.get_logger().info('The serviice is not available yet. Will try again every second')
        self.req = InvKin.Request() # Creating a request object that is filled in the request method below
        self.goal_joint_space_req = SetJointPosition.Request()

    def inverse_client_request(self, desired_pose):
        self.req.pose = desired_pose                   
        return self.cli.call_async(self.req) # Sending the request to the server

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
    # Getting user entered pose from the command line with sys.argv[x]:
    user_pose = Pose()
    user_pose.position.x = float(sys.argv[1])
    user_pose.position.y = float(sys.argv[2])
    user_pose.position.z = float(sys.argv[3])
    user_pose.orientation.x = float(sys.argv[4])
    user_pose.orientation.y = float(sys.argv[5])
    user_pose.orientation.z = float(sys.argv[6])
    user_pose.orientation.w = float(sys.argv[7])
    
    
    print(f'the pose request I got was {user_pose}')
    
    rclpy.init()
    inv_client = Inv_Client() # initializing the client object
    server_output = inv_client.inverse_client_request(user_pose)
    rclpy.spin_until_future_complete(inv_client, server_output) # Ensures program waits for a result prior to printing to the terminal.
    joint_angles = server_output.result() # Posting result
    inv_client.get_logger().info(f'Inverse Kinematic Results from server:\n'
    				 f'Joint 1: {joint_angles.q_1}\n'
       				 f'Joint 2: {joint_angles.q_2}\n'
       				 f'Joint 3: {joint_angles.q_3}\n'
       				 f'Joint 4: {joint_angles.q_4}\n')

    # Calling method to send command to move robot:
    default_path_time = 0.5
    move_robot_output = inv_client.send_goal_joint_space(joint_angles, default_path_time)
    #rclpy.spin_until_future_complete(inv_client, move_robot_output) # Ensures program waits for a result prior to printing to the terminal.


    rclpy.spin(inv_client)  # Running the node continously

    

