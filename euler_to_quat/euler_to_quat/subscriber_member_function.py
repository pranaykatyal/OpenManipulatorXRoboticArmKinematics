import math
import rclpy
from rclpy.node import Node
from math import sin, cos
from std_msgs.msg import Float32MultiArray


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            Float32MultiArray,
            'eulertoquartconverter',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        eulerangles = list(msg.data)
        roll, pitch, yaw = msg.data #converting them to radians 
        roll_rad = math.radians(roll)
        pitch_rad = math.radians(pitch)
        yaw_rad = math.radians(yaw)
        qx,qy,qz,qw = euler_to_quart(roll_rad,pitch_rad,yaw_rad)
        self.get_logger().info(f'Euler Angle entered : {eulerangles}')
        self.get_logger().info(f'Quarternion  x = {qx}, y = {qy}, z = {qz}, w = {qw}')

def euler_to_quart(roll, pitch, yaw):
	qx = (sin(roll/2)*cos(pitch/2)*cos(yaw/2)) - (cos(roll/2)*sin(pitch/2)*sin(yaw/2))
	qy = (cos(roll/2)*sin(pitch/2)*cos(yaw/2)) + (sin(roll/2)*cos(pitch/2)*sin(yaw/2))
	qz = (cos(roll/2)*cos(pitch/2)*sin(yaw/2)) - (sin(roll/2)*sin(pitch/2)*cos(yaw/2))
	qw = (cos(roll/2)*cos(pitch/2)*cos(yaw/2)) + (sin(roll/2)*sin(pitch/2)*sin(yaw/2))
	return qx, qy, qz, qw
	
def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
