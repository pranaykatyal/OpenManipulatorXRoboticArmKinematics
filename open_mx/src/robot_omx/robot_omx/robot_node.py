import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from geometry_msgs.msg import Pose 
from custom_messages.srv import InvKin, InvVel
from sensor_msgs.msg import JointState # We will need to test this in person

class Robot(Node):
    def __init__(self):
        super().__init__('Gripper_Robot')

        self.subscription = self.create_subscription(Pose, 'EndAffectorPose', self.listener_callback, 10)
        self.cli = self.create_client(InvKin, 'inverse_server')
        self.inv_vel_client = self.create_client(InvVel, 'inverse_velocity_server')

        self.curr_pose = Pose()
        while not self.cli.wait_for_service(timeout_sec=1.0): # Every second it checks to see if the server is available
        	self.get_logger().info('The inverse kinematics service is not available yet. Will try again every second')
        while not self.inv_vel_client.wait_for_service(timeout_sec=1.0): # Every second it checks to see if the server is available
        	self.get_logger().info('The inverse velocity service is not available yet. Will try again every second')

        


    def move_to_pose(self, pose):
        
        req = InvKin.Request() # Creating a request object that is filled in the request method below
        
        req.pose = pose

        self.cli.call_async(req) # Sending the request to the server


    def listener_callback(self, msg):
        self.curr_pose = msg
        
    
    def set_velocity(self, velocity, interval):
        


def main():
    rclpy.init()
    rob = Robot()

    rob.move_to_pose([-281.4, 0.0, 224.326, 0.0, 0.707, -0.707, 0.0])
