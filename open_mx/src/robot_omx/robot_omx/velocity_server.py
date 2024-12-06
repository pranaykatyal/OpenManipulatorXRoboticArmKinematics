import rclpy
from robot_omx import kinematic_library
from rclpy.node import Node
from custom_messages.srv import Velocity, InvVel #This is a custom .srv file. Request: Joint angles and velocities as 8 Float32 variables
                                        # Output: Twist
from sensor_msgs.msg import JointState 


class Velocity_Server(Node):
    def __init__(self):
        super().__init__('velocity_server') # Creating a server node for calculating end effector velocities
        self.srv = self.create_service(Velocity, 'velocity_server', self.velocity_callback) # (Type, name, callback function)
        self.inv_srv = self.create_service(InvVel, 'inverse_velocity_server', self.inv_vel_callback) # (Type, name, callback function)
        self.subscription = self.create_subscription(JointState, 'joint_states', self.listener_callback, 10)
        self.q1 = 0
        self.q2 = 0
        self.q3 = 0
        self.q4 = 0

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
    
    def inv_vel_callback(self, request, response):
        twist = request.twist 

        q_dot_values = kinematic_library.calc_joint_velocities(self.q1, self.q2, self.q3, self.q4, twist)

        response.q_1_dot = q_dot_values[0]
        response.q_2_dot = q_dot_values[1]
        response.q_3_dot = q_dot_values[2]
        response.q_4_dot = q_dot_values[3]

        self.get_logger().info(f'The resulting q dot values are: {q_dot_values}')
        
        return response

    def listener_callback(self, message):
        self.q1 = message.position[0]
        self.q2 = message.position[1]
        self.q3 = message.position[2]
        self.q4 = message.position[3]



def main():
    rclpy.init()
    velocity_server = Velocity_Server() # initializing the server object
    rclpy.spin(velocity_server)  # Running the node continously
