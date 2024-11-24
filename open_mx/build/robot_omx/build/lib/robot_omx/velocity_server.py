import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from custom_messages.srv import Velocity #This is a custom .srv file. Request: Joint angles and velocities as 8 Float32 variables
                                        # Output: Twist

class Velocity_Server(Node):
    def __init__(self):
        super().__init__('velocity_server') # Creating a server node for calculating end effector velocities
        self.srv = self.create_service(Velocity, 'inverse_server', self.velocity_callback) # (Type, name, callback function)

    def velocity_callback(self, request, response):
        # Extracting joint angles and velocities from request:
        q1 = request.q_1
        q2 = request.q_2
        q3 = request.q_3
        q4 = request.q_4
        q_1_dot = request.q_1_dot
        q_2_dot = request.q_2_dot
        q_3_dot = request.q_3_dot
        q_4_dot = request.q_4_dot

        response.twist = kinematic_library.calc_twist(q1, q2, q3, q4, q_1_dot, q_2_dot, q_3_dot, q_4_dot) # Using function to calculate twist
        self.get_logger().info(f'The resulting twist is: {response.twist}')

        return response # The results of the velocity kinematics are returned


def main():
    rclpy.init()
    velocity_server = Velocity_Server() # initializing the server object
    rclpy.spin(velocity_server)  # Running the node continously
