#!/usr/bin/env python3

from enum import Enum
from typing import List, Optional

import rclpy
from rclpy.node import Node

from nidar_interfaces.msg import DeliveryTask, DeliveryResult


class DeliveryState(Enum):
    IDLE = "IDLE"
    WAITING = "WAITING"
    NAVIGATING = "NAVIGATING"
    POSITIONING = "POSITIONING"
    DROPPING = "DROPPING"
    VERIFYING = "VERIFYING"
    RETURNING = "RETURNING"


class DeliveryNode(Node):

    def __init__(self):
        super().__init__("delivery_node")

        self.drone_id = "drone2"
        self.state = DeliveryState.IDLE

        self.task_queue: List[DeliveryTask] = []
        self.current_task: Optional[DeliveryTask] = None

        self.state_timer = 0
        self.drop_error_m = 0.45

        self.task_sub = self.create_subscription(
            DeliveryTask,
            "/mission/delivery_task",
            self.task_callback,
            10,
        )

        self.result_pub = self.create_publisher(
            DeliveryResult,
            "/mission/delivery_result",
            10,
        )

        self.timer = self.create_timer(1.0, self.update)

        self.get_logger().info(
            f"Delivery Drone initialized: drone={self.drone_id}"
        )

        self.set_state(DeliveryState.WAITING)

    def set_state(self, new_state: DeliveryState) -> None:
        if self.state != new_state:
            self.get_logger().info(
                f"DELIVERY STATE: {self.state.value} -> {new_state.value}"
            )
            self.state = new_state
            self.state_timer = 0

    def task_callback(self, msg: DeliveryTask) -> None:
        if msg.status not in ("PENDING", "ASSIGNED"):
            self.get_logger().warning(
                f"Ignoring task {msg.task_id} with status={msg.status}"
            )
            return

        self.task_queue.append(msg)

        self.get_logger().info(
            f"DELIVERY TASK QUEUED: "
            f"task={msg.task_id}, "
            f"survivor={msg.survivor_id}, "
            f"queue_size={len(self.task_queue)}"
        )

        self.start_next_task_if_available()

    def start_next_task_if_available(self) -> None:
        if self.current_task is not None:
            return

        if not self.task_queue:
            return

        self.current_task = self.task_queue.pop(0)

        self.get_logger().info(
            f"STARTING DELIVERY TASK: "
            f"task={self.current_task.task_id}, "
            f"survivor={self.current_task.survivor_id}"
        )

        self.set_state(DeliveryState.NAVIGATING)

    def update(self) -> None:
        self.state_timer += 1

        if self.state == DeliveryState.IDLE:
            self.set_state(DeliveryState.WAITING)

        elif self.state == DeliveryState.WAITING:
            self.start_next_task_if_available()

        elif self.state == DeliveryState.NAVIGATING:
            if self.state_timer >= 3:
                self.get_logger().info(
                    "Reached survivor delivery area."
                )
                self.set_state(DeliveryState.POSITIONING)

        elif self.state == DeliveryState.POSITIONING:
            if self.state_timer >= 2:
                self.get_logger().info(
                    "Delivery drone positioned over target."
                )
                self.set_state(DeliveryState.DROPPING)

        elif self.state == DeliveryState.DROPPING:
            if self.state_timer >= 1:
                self.get_logger().info(
                    "Payload release command executed."
                )
                self.set_state(DeliveryState.VERIFYING)

        elif self.state == DeliveryState.VERIFYING:
            if self.state_timer >= 2:
                self.verify_delivery()

        elif self.state == DeliveryState.RETURNING:
            if self.state_timer >= 3:
                self.get_logger().info(
                    "Delivery drone returned to standby."
                )
                self.current_task = None
                self.set_state(DeliveryState.WAITING)

    def verify_delivery(self) -> None:
        if self.current_task is None:
            self.get_logger().error(
                "VERIFYING state entered without a task."
            )
            self.set_state(DeliveryState.WAITING)
            return

        result = DeliveryResult()

        result.timestamp = self.get_clock().now().to_msg()
        result.task_id = self.current_task.task_id
        result.survivor_id = self.current_task.survivor_id

        result.drop_x = self.current_task.target_x
        result.drop_y = self.current_task.target_y
        result.drop_z = self.current_task.target_z

        result.horizontal_error_m = self.drop_error_m

        if self.drop_error_m <= 1.0:
            result.accuracy_zone = 1
            result.success = True
        elif self.drop_error_m <= 2.0:
            result.accuracy_zone = 2
            result.success = True
        elif self.drop_error_m <= 3.0:
            result.accuracy_zone = 3
            result.success = True
        else:
            result.accuracy_zone = 0
            result.success = False

        result.status = (
            "DELIVERED" if result.success else "DELIVERY_FAILED"
        )

        self.result_pub.publish(result)

        self.get_logger().info(
            f"DELIVERY RESULT: "
            f"task={result.task_id}, "
            f"survivor={result.survivor_id}, "
            f"error={result.horizontal_error_m:.2f} m, "
            f"zone={result.accuracy_zone}, "
            f"success={result.success}"
        )

        self.set_state(DeliveryState.RETURNING)


def main(args=None) -> None:
    rclpy.init(args=args)

    node = DeliveryNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
