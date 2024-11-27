import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from geometry_msgs.msg import Pose 
from custom_messages.srv import InvKin
from sensor_msgs.msg import JointState # We will need to test this in person

class Robot(Node):
    def __init__(self):
        super().__init__('Gripper_Robot')

        self.subscription = self.create_subscription(JointState, 'EndAffectorPose', self.listener_callback, 10)
        self.cli = self.create_client(InvKin, 'inverse_server')
        self.curr_pose = Pose()

    def move_to_pose(self, pose):
        while not self.cli.wait_for_service(timeout_sec=1.0): # Every second it checks to see if the server is available
        	self.get_logger().info('The service is not available yet. Will try again every second')
        req = InvKin.Request() # Creating a request object that is filled in the request method below
        
        des_pose = Pose()
        des_pose.position.x = pose[0]
        des_pose.position.y = pose[1]
        des_pose.position.z = pose[2]
        des_pose.orientation.x = pose[3]
        des_pose.orientation.y = pose[4]
        des_pose.orientation.z = pose[5]
        des_pose.orientation.w = pose[6]
        req.pose = des_pose

        self.cli.call_async(req) # Sending the request to the server
        while not(self.within_tolerance(self.curr_pose, des_pose, 2)):
            rclpy.spin_once(self)

    def within_tolerance(self, pose1, pose2, tolerance):
        pose1_list = [pose1.position.x, pose1.position.y, pose1.position.z, pose1.orientation.x, pose1.orientation.y, pose1.orientation.z, pose1.orientation.w]
        pose2_list = [pose2.position.x, pose2.position.y, pose2.position.z, pose2.orientation.x, pose2.orientation.y, pose2.orientation.z, pose2.orientation.w]
        res = True
        for i in range(len(pose1_list)):
            res = res and (round(pose1_list[i], tolerance) == round(pose2_list[i], tolerance))
        return res

    def listener_callback(self, msg):
            self.curr_pose = msg


def main():
    rclpy.init()
    rob = Robot()

    rob.move_to_pose([-281.4, 0.0, 224.326, 0.0, 0.707, -0.707, 0.0])
