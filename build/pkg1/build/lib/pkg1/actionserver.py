#!/usr/bin/env python3

import rclpy
import time
from typing import cast
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node
from rclpy.action.server import ActionServer, CancelResponse, GoalResponse, ServerGoalHandle
from rclpy.executors import MultiThreadedExecutor
from action_msgs.srv import CancelGoal

from bot_interfaces.action import CountUntil
from rclpy.type_support import FeedbackMessage

class MyNode5(Node):
    def __init__(self):
        super().__init__('action_server_node')
        self.count_until_server_ = ActionServer(
            self,
            CountUntil,
            "count_until",
            goal_callback=self.goal_callback,
            execute_callback = self.execute_callback,
            cancel_callback=self.cancel_callback_,
            callback_group=ReentrantCallbackGroup()
        )
        self.log = self.get_logger().info

    def goal_callback(self, goal_request ):
        self.get_logger().info("received a goal")
        if goal_request.target_number <= 0:
            self.get_logger().warning("rejecting the goal. target shld be >= 0")
            return GoalResponse.REJECT
        self.get_logger().info("accepting the goal")
        return GoalResponse.ACCEPT


    def execute_callback(self, goal_handle: ServerGoalHandle):
        target_number = goal_handle.request.target_number
        delay = goal_handle.request.delay
        result = CountUntil.Result()
        feedback = CountUntil.Feedback()
        counter = 0
        for i in range(target_number):
            if goal_handle.is_cancel_requested:
                self.get_logger().info("canceling goal")
                goal_handle.canceled()
                result.reached_number = counter
                self.log("execute callback returning now")
                return result

            counter += 1

            # feedback.current_number = counter
            # goal_handle.publish_feedback(feedback)

            # the above one works absolutely fine. but to
            # satisfy the pyright type checker, you need to do some wizardry
            # an other way to silence the type checker:
            # goal_handle.publish_feedback(raw_feedback)  # type: ignore[arg-type]

            feedback.current_number = counter
            # create the wrapper that Pyright wants
            wrapper = CountUntil.Impl.FeedbackMessage()
            wrapper.goal_id = goal_handle.goal_id
            wrapper.feedback = feedback
            goal_handle.publish_feedback(cast(FeedbackMessage[CountUntil.Feedback], wrapper))

            self.get_logger().info(str(counter))
            time.sleep(delay)

        goal_handle.succeed()
        result.reached_number = counter
        return result

    def cancel_callback_(self, cancel_request: CancelGoal.Request):
        self.log("received a cancel request from client")
        return CancelResponse.ACCEPT


def main(args=None):
    rclpy.init(args=args)
    node = MyNode5()
    rclpy.spin(node, MultiThreadedExecutor())
    rclpy.shutdown()

if __name__ == '__main__':
    main()
