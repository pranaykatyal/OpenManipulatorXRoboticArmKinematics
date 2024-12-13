import rclpy
from rclpy.node import Node
from custom_messages.srv import SetTarget
from dynamixel_sdk_custom_interfaces.srv import GetPosition
from dynamixel_sdk_custom_interfaces.msg import SetCurrent

interval = 1

class JointController(Node):

    def __init__(self,target):
        super().__init__("joint_controller")

        self.kp = 10
        self.kd = 10
        self.joint = 4
        self.error_delta =0
        self.error = 0
        self.target = target

        self.refrence_srv = self.create_service(SetTarget, 'pd_server', self.listener_callback)
        self.joint_val_cli = self.create_client(GetPosition, 'get_position')
        self.current_pub = self.create_publisher(SetCurrent, 'set_current', 10)
        self.timer = self.create_timer(interval, self.timer_callback)


    def listener_callback(self, request, response):
        self.target = request.target

    def timer_callback(self):
        
        # Create and send request to get current position of joint
        req = GetPosition.Request() 
        req.id = 14
        response = self.joint_val_cli.call(req)
        # rclpy.spin_until_future_complete(self, response) # Ensures program waits for a result prior to printing to the terminal.
        

        pos = response.result().position
        # Calculate error between curr pos and target
        thiserror = self.target - pos
        
        self.error_delta = (self.error - thiserror)/interval
        self.error = thiserror

        effort = self.kp*(self.target-self.joint_val) + self.kd*self.joint_delta

        # Create message with the new effort value and publish it to the current sub
        thismsg = SetCurrent()
        thismsg.id = 14
        thismsg.current = 10
        self.current_pub.publish(thismsg)




def main():
    rclpy.init()
    jc = JointController(1000)
    req = GetPosition.Request() 
    req.id = 14
    response = jc.joint_val_cli.call_async(req)
    rclpy.spin_until_future_complete(jc, response) # Ensures program waits for a result prior to printing to the terminal.
    jc.get_logger().info(str(response.result().position))
    rclpy.spin(jc)  # Running the node continously

    
