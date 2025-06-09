#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter
from example_interfaces.msg import Int64
from bot_interfaces.msg import HardwareStatus

class MyNode1(Node):
    def __init__(self):
        super().__init__('numpub')

        self.declare_parameter("number", 3)
        self.declare_parameter("publish_period", 1.0)
        self.number_ = self.get_parameter("number").value
        self.timer_period_ = self.get_parameter("publish_period").value
        self.add_post_set_parameters_callback(self.parameters_callback)

        self.number_publisher_ = self.create_publisher(Int64, "number", 10)
        self.get_logger().info("topic publisher initialized")
        self.number_timer_ = self.create_timer(self.timer_period_ , self.publish)

    def publish(self):
        msg = Int64()
        msg.data = self.number_
        self.number_publisher_.publish(msg)

    def parameters_callback(self, params: list[Parameter]):
        for param in params:
            if param.name == "number":
                self.number_ = param.value

def main(args=None):
    rclpy.init(args=args)
    node = MyNode1()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
