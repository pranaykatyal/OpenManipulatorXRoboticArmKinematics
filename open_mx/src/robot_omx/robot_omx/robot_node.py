import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from geometry_msgs.msg import Pose, Twist
from custom_messages.srv import InvKin, InvVel
from sensor_msgs.msg import JointState # We will need to test this in person
from open_manipulator_msgs.srv import SetJointPosition, SetKinematicsPose
import time
import csv

class Robot(Node):
    def __init__(self):
        super().__init__('Gripper_Robot')

        self.subscription = self.create_subscription(JointState, 'joint_states', self.listener_callback, 10)
        self.pose_sub = self.create_subscription(Pose, 'EndAffectorPose', self.pose_callback, 10)

        self.cli = self.create_client(InvKin, 'inverse_server')
        self.inv_vel_client = self.create_client(InvVel, 'inverse_velocity_server')
        self.goal_joint_space = self.create_client(SetJointPosition, 'goal_joint_space_path')

        self.curr_pose = Pose()
        while not self.cli.wait_for_service(timeout_sec=1.0): # Every second it checks to see if the server is available
        	self.get_logger().info('The inverse kinematics service is not available yet. Will try again every second')
        while not self.inv_vel_client.wait_for_service(timeout_sec=1.0): # Every second it checks to see if the server is available
        	self.get_logger().info('The inverse velocity service is not available yet. Will try again every second')
        while not self.goal_joint_space.wait_for_service(timeout_sec=1.0): # Every second it checks to see if the server is available
        	self.get_logger().info('The joint setting service is not available yet. Will try again every second')

    def move_to_pose(self, pose):
        req = InvKin.Request()
        

        req.pose.position.x = pose[0]
        req.pose.position.y = pose[1]
        req.pose.position.z = pose[2]
        req.pose.orientation.x = pose[3]
        req.pose.orientation.y = pose[4]
        req.pose.orientation.z = pose[5]
        req.pose.orientation.w = pose[6]


        self.cli.call_async(req)

    def listener_callback(self, msg):
        self.joint_values = msg.position        
    
    def set_velocity(self, twist):
        print(f'The twist received is {twist}\n\n')
        file = csv.writer("positions.csv")
    
        file.writerow(["Time", "X", "Y", "Z"])
        rclpy.spin_once(self)
        joint_values = self.joint_values
        print(f'The joint velocities are {joint_velocities}')
        time = 0
        

        while(True):

            req = InvVel.Request()
            req.twist = twist
            response = self.inv_vel_client.call_async(req)
            rclpy.spin_until_future_complete(self, response)  # Ensures program waits for a result prior to printing to the terminal.
            joint_velocities = response.result()  # Posting result

            q_dot_vec = [joint_velocities.q_1_dot, joint_velocities.q_2_dot, joint_velocities.q_3_dot, joint_velocities.q_4_dot]

            joint_values = self.update_position(q_dot_vec, interval, joint_values)
            rclpy.spin_once(self)
            time+=interval
            file.writerow([time, self.curr_pose.x, self.curr_pose.y, self.curr_pose.z])

        return 0


    def update_position(self, velocities, interval, initial_joint_values):
        req = SetJointPosition.Request()
        new_joint_values = []


        for i in range(len(velocities)):
            new_joint_values.append(initial_joint_values[i] + velocities[i]*interval)

        print(f'The joint angles are now: {new_joint_values}\n')
        # Set request variable including joint names, joint values, and path time
        req.joint_position.joint_name = ['joint1', 'joint2', 'joint3', 'joint4', 'gripper']
        new_joint_values.append(0.0)
        req.joint_position.position = new_joint_values
        req.path_time = interval

        # make the request and return failure if it fails
        try:
            self.goal_joint_space.call_async(req)
        except Exception as e:
            self.get_logger().info('Sending Goal Joint failed %r' % (e,))
        return new_joint_values

    def pose_callback(self, msg):
        self.curr_pose = msg





def main():
    rclpy.init()
    rob = Robot()

    rob.move_to_pose([-281.4, 0.0, 224.326, 0.0, 0.707, -0.707, 0.0])
    time.sleep(3)
    input_twist = Twist()

    input_twist.linear.y = 100.0
    # input_twist.linear.z = 500.0
    # input_twist.angular.z = 10.0

    rob.set_velocity(input_twist, 0.1)
