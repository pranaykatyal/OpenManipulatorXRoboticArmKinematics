import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray # This standard message type is used to receive the 3 parameters as an array.
from geometry_msgs.msg import Pose
from sensor_msgs.msg import JointState # We will need to test this in person

# The below class listens to the Joint Values Topic an calculates the end effector pose
class Joint_Subscriber(Node):

    def __init__(self):
        # Creating a subscriber node that listens to the joint_values topic and calls "listener_callback"
        super().__init__('joint_subscriber')
        self.publisher = self.create_publisher(Pose, 'EndAffectorPose', 10)
        #self.subscription = self.create_subscription(Float32MultiArray, 'joint_values', self.listener_callback, 10) # Old Code
        self.subscription = self.create_subscription(JointState, 'joint_states', self.listener_callback, 10)

    def listener_callback(self, msg):
        # Extracting the joint positions from the joint_states topic:
        joint_positions = msg.position
        
        self.get_logger().info(f'The joints received are: {joint_positions}')
        print(type(msg.position))
        
        # pose = robot.forward_kinematics(msg.data) # Old Code
        matrix = kinematic_library.get_forward_kinematics(joint_positions[0], joint_positions[1], joint_positions[2], joint_positions[3])
        pose = kinematic_library.rot2pose(matrix)
        self.get_logger().info(f'The End Effector Pose is \n{pose}') # Posting the result to the terminal
        self.publisher.publish(pose)

def main():
    rclpy.init()
    joint_sub = Joint_Subscriber() # initializing the subscriber object
    rclpy.spin(joint_sub)  # Running the node continously

