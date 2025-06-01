#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

class MyNode0(Node):
    def __init__(self):
        super().__init__('mynode')
        self.get_logger().info('hello world')
        self.counter_ = 0
        self.timer_ = self.create_timer(1.0, self.print_hello)

    def print_hello(self):
        self.get_logger().info("hello " + str(self.counter_))
        self.counter_ += 1

def main(args=None):
    rclpy.init(args=args)
    node = MyNode0()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
