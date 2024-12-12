import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray # This standard message type is used to receive the 3 parameters as an array.
from geometry_msgs.msg import Pose
from sensor_msgs.msg import JointState # We will need to test this in person
from dynamixel_sdk_custom_interfaces.msg import SetCurrent

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


# The below class creates a node that sends a pose to a server. The server then returns the joint parameters for that pose.
class Control_Publisher(Node):

    def __init__(self):
        # Creating a client that sends a desired pose to inverse_server
        super().__init__('control_publisher')
        self.publisher = self.create_publisher(SetCurrent, 'control_values', 10)  # (Type, name)

    def control_client_request(self, id, current):
        self.get_logger().info(f'The current value is {current}, of type {type(current)}') # Posting the result to the terminal
        self.publisher.publish(id, current)



def main():
    rclpy.init()
    control_publisher = Control_Publisher()  # initializing the publisher object
    control_publisher.control_client_request(14, 1.0)
    rclpy.spin(control_publisher)  # Running the node continously

    
