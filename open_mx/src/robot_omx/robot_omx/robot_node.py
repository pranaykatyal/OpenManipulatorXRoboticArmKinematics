import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from geometry_msgs.msg import Pose 
from custom_messages.srv import InvKin


class Robot(Node):
    def __init__(self):
        super().__init__('Gripper Robot')

        self.subscription = self.create_subscription(JointState, 'EndAffectorPose', self.listener_callback, 10)
        self.cli = self.create_client(InvKin, 'inverse_server')
        self.curr_pose = Pose()

    def move_to_pose(self, pose):
        while not self.cli.wait_for_service(timeout_sec=1.0): # Every second it checks to see if the server is available
        	self.get_logger().info('The service is not available yet. Will try again every second')
        req = InvKin.Request() # Creating a request object that is filled in the request method below
        req.pose = pose
        self.cli.call_async(req) # Sending the request to the server
        while !within_tolerance(curr_pose, pose, 2):
		pass

    def within_tolerance(pose1, pose2, tolerance):
	pose1_list = [pose1.position.x, pose1.position.y, pose1.position.z, pose1.orientation.x, pose1.orientation.y, pose1.orientation.z, pose1.orientation.w]
	pose2_list = [pose2.position.x, pose2.position.y, pose2.position.z, pose2.orientation.x, pose2.orientation.y, pose2.orientation.z, pose2.orientation.w]
	res = True
	for i in range(len(pose1_list)):
		res = res and (round(pose1_list[i], tolerance) == round(pose2_list, tolerance))
	return res

    def listener_callback(self, msg):
        self.curr_pose = msg

    def pick_at_position(position):
	
