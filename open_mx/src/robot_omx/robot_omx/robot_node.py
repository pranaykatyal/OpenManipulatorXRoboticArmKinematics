import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from geometry_msgs.msg import Pose 
from custom_messages.srv import InvKin, InvVel
from sensor_msgs.msg import JointState # We will need to test this in person
import time

class Robot(Node):
    def __init__(self):
        super().__init__('Gripper_Robot')

        self.subscription = self.create_subscription(JointState, 'joint_states', self.listener_callback, 10)
        self.cli = self.create_client(InvKin, 'inverse_server')
        self.inv_vel_client = self.create_client(InvVel, 'inverse_velocity_server')
        self.goal_joint_space = self.create_client(SetJointPosition, 'goal_joint_space_path')

        self.curr_pose = Pose()
        while not self.cli.wait_for_service(timeout_sec=1.0): # Every second it checks to see if the server is available
        	self.get_logger().info('The inverse kinematics service is not available yet. Will try again every second')
        while not self.inv_vel_client.wait_for_service(timeout_sec=1.0): # Every second it checks to see if the server is available
        	self.get_logger().info('The inverse velocity service is not available yet. Will try again every second')


    def listener_callback(self, msg):
        self.joint_values = msg.position        
    
    def set_velocity(self, twist, interval):
        req = InvVel.Request()
        req.twist = twist
        response = self.inv_vel_client.call_async(req)

        q_dot_vec = [response.q_1_dot, response.q_2_dot, response.q_3_dot, response.q_4_dot]
        rclpy.spin_once(self)
        while(self.update_position(q_dot_vec, interval) == 1):
            rclpy.spin_once(self)
            time.sleep(interval)
            


    def update_position(self, velocities, interval):
        
        req = InvVel.Request()
        new_joint_values = []
        for q in range(len(self.joint_values)):
            new_joint_values.append(q[i] + velocites[i]*interval)
        
        # Set request variable including joint names, joint values, and path time
        req.joint_position.joint_name = ['joint1', 'joint2', 'joint3', 'joint4', 'gripper']
        new_joint_values.append(0.0)
        req.joint_position.position = new_joint_values
        req.path_time = 1

        # make the request and return failure if it fails
        try:
            self.goal_joint_space.call_async(self.goal_joint_space_req)
        except Exception as e:
            self.get_logger().info('Sending Goal Joint failed %r' % (e,))
            return -1
        return 1





def main():
    rclpy.init()
    rob = Robot()

    rob.move_to_pose([-281.4, 0.0, 224.326, 0.0, 0.707, -0.707, 0.0])
    time.sleep(3)
    input_twist = Twist()

    input_twist.linear.y = 3
    set_velocity(input_twist, 0.1)
