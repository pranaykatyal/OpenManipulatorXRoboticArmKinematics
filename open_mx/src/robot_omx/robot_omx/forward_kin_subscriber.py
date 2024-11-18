import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray # This standard message type is used to receive the 3 parameters as an array.
from geometry_msgs.msg import Pose

# The below class listens to the Joint Values Topic an calculates the end effector pose
class Joint_Subscriber(Node):

    def __init__(self):
        # Creating a subscriber node that listens to the joint_values topic and calls "listener_callback"
        super().__init__('joint_subscriber')
        self.subscription = self.create_subscription(Float32MultiArray, 'joint_values', self.listener_callback, 10)
	self.publisher = self.create_publisher(Pose, 'EndAffectorPose', 10)

    def listener_callback(self, msg):
        robot = kinematic_library.Robot() # Creates an object that has the functions needed for the pose calculation
        pose = robot.forward_kinematics(msg.data) # Using the object functions to calculate the pose
        self.get_logger().info(f'The End Effector Pose is \n{pose}') # Posting the result to the terminal
        self.publisher.publish(pose)


def main():
    rclpy.init()
    joint_sub = Joint_Subscriber() # initializing the subscriber object
    rclpy.spin(joint_sub)  # Running the node continously

