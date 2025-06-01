#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from bot_interfaces.srv import ResetCounter

class MyNode2(Node):
    def __init__(self):
        super().__init__('numsub')
        self.counter_ = 1
        self.number_subscriber_ = self.create_subscription(Int64, "number", self.callback_number, 10)
        self.reset_counter_service_ = self.create_service(ResetCounter, "reset_counter", self.callback_number_reset_counter)
        self.get_logger().info("topic subscriber and counter server initialized")

    def callback_number(self, msg: Int64):
        self.counter_ *= msg.data
        self.get_logger().info("counter: " + str(self.counter_))

    def callback_number_reset_counter(self, request: ResetCounter.Request, response: ResetCounter.Response):
        self.counter_ = request.reset_value
        self.get_logger().info("reset counter to " + str(self.counter_))
        response.success = True
        response.message = "success"
        return response

def main(args=None):
    rclpy.init(args=args)
    node = MyNode2()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
