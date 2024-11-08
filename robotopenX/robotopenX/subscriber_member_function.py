import numpy as np
import math
import rclpy
from rclpy.node import Node
from math import sin,cos, atan2, sqrt, pi,radians
from std_msgs.msg import Float32MultiArray


class RobotArm(Node):

    def __init__(self):
        super().__init__('robot_arm')
        self.q1 = None
        self.q2 = None
        self.q3 = None
        self.q4 = None
        #Subscription for Forward Kinematics
        self.subscription_ForwKine = self.create_subscription(
            Float32MultiArray,
            'ForwardKinematics',
            self.listener_callback_ForwKine,
            10)
        self.subscription_ForwKine  # prevent unused variable warning
        
        # Service for Inverse Kinematics
        
        #Subscriber : 
    def listener_callback_ForwKine(self, msg):
        inp_4rfk = list(msg.data)
        #Link Lengths
        l1 = 60.25
        l2 = 130.2306 # calculated from given lengths
        l3 = 124.0
        l4 = 133.4
        
        #initializing q1,q2,q3,q4
        q_1,q_2,q_3,q_4 = msg.data
        
        phi = np.rad2deg(atan2(3,16)) # 10.62 degrees
        
        #Converting to Radians
        q1 = math.radians(q_1)
        q2 = math.radians(90 + phi + q_2)
        q3 = math.radians(90 - phi + q_3)
        q4 = math.radians(q_4)
        
        np.set_printoptions(precision=4, suppress=True)
        # Transformation Matrices
        A1 = np.array([[cos(q1), -sin(q1)*cos(np.pi/2), sin(q1)*sin(np.pi/2), 0*cos(q1)],
    [sin(q1), cos(q1)*cos(np.pi/2), -cos(q1)*sin(np.pi/2), 0*sin(q1)],
    [0, sin(np.pi/2), cos(np.pi/2), l1 ],
    [0, 0, 0, 1]])
        A2 = np.array([[cos(q2), -sin(q2)*cos(0), sin(q2)*sin(0), l2*cos(q2)],
    [sin(q2), cos(q2)*cos(0), -cos(q2)*sin(0), l2*sin(q2)],
    [0, sin(0), cos(0), 0 ],
    [0, 0, 0, 1]])
        A3 = np.array([[cos(q3), -sin(q3)*cos(0), sin(q3)*sin(0), l3*cos(q3)],
    [sin(q3), cos(q3)*cos(0), -cos(q3)*sin(0), l3*sin(q3)],
    [0, sin(0), cos(0), 0 ],
    [0, 0, 0, 1]])
        A4 = np.array([[cos(q4), -sin(q4)*cos(0), sin(q4)*sin(0), l4*cos(q4)],
    [sin(q4), cos(q4)*cos(0), -cos(q4)*sin(0), l4*sin(q4)],
    [0, sin(0), cos(0), 0 ],
    [0, 0, 0, 1]])
        #Homogenous Transformations : 
        H10 = A1
        H20 = np.matmul(A1,A2)
        H30 = np.matmul(H20,A3)
        H40 = np.matmul(H30,A4) #pose
        #self.get_logger().info(f'phi:  {phi}')
        self.get_logger().info(f'For the Input values :  {inp_4rfk}')
        self.get_logger().info(f'End Effector Pose :  {H40}')


def main(args=None):
    rclpy.init(args=args)

    robot_arm = RobotArm()

    rclpy.spin(robot_arm)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    robot_arm.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
