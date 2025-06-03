#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action.client import ActionClient, ClientGoalHandle, GoalStatus
from bot_interfaces.action import CountUntil

class MyNode10(Node) :
    def __init__(self):
        super().__init__('action_client_node')
        self.count_until_client_ = ActionClient(self, CountUntil, "count_until")

    def send_goal(self, target_number, delay):
        self.count_until_client_.wait_for_server()
        goal = CountUntil.Goal()
        goal.target_number = target_number
        goal.delay = delay
        self.count_until_client_.send_goal_async(goal, feedback_callback=self.goal_feedback_callback).add_done_callback(self.goal_response_callback_)

    def goal_response_callback_(self, future):
        self.goal_handle_: ClientGoalHandle = future.result()
        if self.goal_handle_.accepted:
            self.get_logger().info("goal accepted by the server")
            self.goal_handle_.get_result_async().add_done_callback(self.goal_result_callback_)
        else:
            self.get_logger().info("goal rejected by the server")

    def goal_result_callback_(self, future):
        status = future.result().status
        result: CountUntil.Result = future.result().result
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("result - success")
        elif status == GoalStatus.STATUS_ABORTED:
            self.get_logger().error("result - aborted")
        elif status == GoalStatus.STATUS_CANCELED:
            self.get_logger().info("result - cancelled")
        self.get_logger().info("final result: " + str(result.reached_number))

    def goal_feedback_callback(self, feedback_msg):
        number = feedback_msg.feedback.current_number
        if number > 10:
            self.cancel_goal()
        self.get_logger().info("got feedback: " + str(number))

    def cancel_goal(self):
        self.get_logger().info("cancelling goal now")
        self.goal_handle_.cancel_goal_async()

def main(args=None):
    rclpy.init(args=args)
    node = MyNode10()
    node.send_goal(15, 0.5)
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
