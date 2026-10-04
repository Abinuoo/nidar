#!/usr/bin/env python3

from enum import Enum
from typing import Dict, List, Set

import rclpy
from rclpy.node import Node

from nidar_interfaces.msg import (
    SurvivorDetection,
    DeliveryTask,
    DeliveryResult,
    MissionStatus,
)


class MissionState(Enum):
    IDLE = "IDLE"
    INITIALIZING = "INITIALIZING"
    ACTIVE = "ACTIVE"
    COMPLETING = "COMPLETING"
    COMPLETE = "COMPLETE"
    ABORTED = "ABORTED"


class MissionManager(Node):

    def __init__(self):
        super().__init__("mission_manager")

        self.state = MissionState.IDLE

        self.survivors: Dict[int, SurvivorDetection] = {}
        self.delivery_queue: List[DeliveryTask] = []
        self.completed_deliveries: Set[int] = set()

        self.task_counter = 0
        self.max_survivors = 10

        self.survivor_sub = self.create_subscription(
            SurvivorDetection,
            "/mission/survivor_detection",
            self.survivor_callback,
            10,
        )

        self.delivery_result_sub = self.create_subscription(
            DeliveryResult,
            "/mission/delivery_result",
            self.delivery_result_callback,
            10,
        )

        self.delivery_task_pub = self.create_publisher(
            DeliveryTask,
            "/mission/delivery_task",
            10,
        )

        self.mission_status_pub = self.create_publisher(
            MissionStatus,
            "/mission/status",
            10,
        )

        self.timer = self.create_timer(1.0, self.update)

        self.get_logger().info(
            f"Mission Manager initialized: state={self.state.value}"
        )

    def set_state(self, new_state: MissionState) -> None:
        if self.state != new_state:
            self.get_logger().info(
                f"MISSION STATE: {self.state.value} -> {new_state.value}"
            )
            self.state = new_state

    def survivor_callback(self, msg: SurvivorDetection) -> None:
        survivor_id = msg.survivor_id

        if survivor_id in self.survivors:
            self.get_logger().info(
                f"Survivor {survivor_id} already known; "
                "ignoring duplicate detection."
            )
            return

        if len(self.survivors) >= self.max_survivors:
            self.get_logger().warning(
                "Maximum survivor count reached."
            )
            return

        self.survivors[survivor_id] = msg

        self.get_logger().info(
            f"NEW SURVIVOR: id={survivor_id}, "
            f"source={msg.source_drone}, "
            f"position=({msg.x:.2f}, {msg.y:.2f}, {msg.z:.2f}), "
            f"confidence={msg.confidence:.2f}"
        )

        self.create_delivery_task(msg)

    def create_delivery_task(
        self,
        survivor: SurvivorDetection,
    ) -> None:
        self.task_counter += 1

        task = DeliveryTask()
        task.timestamp = self.get_clock().now().to_msg()

        task.task_id = self.task_counter
        task.survivor_id = survivor.survivor_id

        task.target_x = survivor.x
        task.target_y = survivor.y
        task.target_z = survivor.z

        task.target_latitude = survivor.latitude
        task.target_longitude = survivor.longitude

        task.priority = 1
        task.status = "PENDING"

        self.delivery_queue.append(task)
        self.delivery_task_pub.publish(task)

        self.get_logger().info(
            f"DELIVERY TASK CREATED: task={task.task_id}, "
            f"survivor={task.survivor_id}"
        )

    def delivery_result_callback(
        self,
        msg: DeliveryResult,
    ) -> None:
        if not msg.success:
            self.get_logger().warning(
                f"Delivery failed: task={msg.task_id}, "
                f"survivor={msg.survivor_id}"
            )
            return

        self.completed_deliveries.add(msg.survivor_id)

        self.get_logger().info(
            f"DELIVERY COMPLETE: task={msg.task_id}, "
            f"survivor={msg.survivor_id}, "
            f"error={msg.horizontal_error_m:.2f} m, "
            f"zone={msg.accuracy_zone}"
        )

    def update(self) -> None:
        if self.state == MissionState.IDLE:
            self.set_state(MissionState.INITIALIZING)

        elif self.state == MissionState.INITIALIZING:
            self.set_state(MissionState.ACTIVE)

        elif self.state == MissionState.ACTIVE:
            # Scout and delivery operate concurrently.
            # The mission remains ACTIVE while the scout
            # continues searching and delivery tasks execute.
            pass

        elif self.state == MissionState.COMPLETING:
            if (
                len(self.survivors) > 0
                and len(self.completed_deliveries) == len(self.survivors)
            ):
                self.set_state(MissionState.COMPLETE)

        self.publish_status()

    def publish_status(self) -> None:
        msg = MissionStatus()

        msg.timestamp = self.get_clock().now().to_msg()
        msg.mission_id = "NIDAR_RESQ_001"
        msg.state = self.state.value

        msg.survivors_detected = len(self.survivors)

        msg.survivors_geotagged = sum(
            1
            for survivor in self.survivors.values()
            if survivor.geotag_valid
        )

        msg.deliveries_pending = max(
            0,
            len(self.survivors) - len(self.completed_deliveries),
        )

        msg.deliveries_completed = len(self.completed_deliveries)

        if self.max_survivors > 0:
            msg.completion_percent = (
                100.0
                * len(self.completed_deliveries)
                / self.max_survivors
            )
        else:
            msg.completion_percent = 0.0

        msg.elapsed_time_sec = 0.0

        self.mission_status_pub.publish(msg)


def main(args=None) -> None:
    rclpy.init(args=args)

    node = MissionManager()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
