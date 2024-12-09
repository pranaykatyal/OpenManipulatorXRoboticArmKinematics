import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray # This standard message type is used to receive the 3 parameters as an array.
from geometry_msgs.msg import Pose
from sensor_msgs.msg import JointState # We will need to test this in person

class JointController(Node):

    def __init__(self, target):
        super().__init__("joint_controller")

        self.kp = 10
        self.kd = 10
        self.joint = 4
        self.joint_val = 0
        self.joint_delta =0
        self.target = target

        self.refrence_srv = self.create_service()
        self.joint_val_cli = self.create_client()


    def listener_callback(self, msg):
        interval = 0.1
        thisval = msg.position[self.joint-1]

        self.joint_delta = (self.joint_val - thisval)/interval
        self.joint_val = thisval

        effort = self.kp*(self.target-self.joint_val) + self.kd*self.joint_delta

        #TODO: set effort


    
