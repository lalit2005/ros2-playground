#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from bot_interfaces.msg import HardwareStatus

class MyNode1(Node):
    def __init__(self):
        super().__init__('numpub')
        self.number_publisher_ = self.create_publisher(Int64, "number", 10)
        self.get_logger().info("topic publisher initialized")
        self.create_timer(1.0, self.publish)

    def publish(self):
        msg = Int64()
        msg.data = 2
        self.number_publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = MyNode1()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
