#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from bot_interfaces.srv import ResetCounter

class MyNode2(Node):
    def __init__(self):
        super().__init__('client')
        self.client_ = self.create_client(ResetCounter, "reset_counter")

    def call_reset_counter(self, value):
        while not self.client_.wait_for_service(1.0):
            self.get_logger().warning("waiting for service")
        request = ResetCounter.Request()
        request.reset_value = value
        future = self.client_.call_async(request)
        future.add_done_callback(self.callback_reset_counter_response)

    def  callback_reset_counter_response(self, future):
        response = future.result()
        self.get_logger().info("success flag: " + str(response.success))
        self.get_logger().info("message: " + str(response.message))

def main(args=None):
    rclpy.init(args=args)
    node = MyNode2()
    node.call_reset_counter(0)
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
