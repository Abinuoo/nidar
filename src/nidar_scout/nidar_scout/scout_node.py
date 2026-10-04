#!/usr/bin/env python3

from enum import Enum

import rclpy
from rclpy.node import Node
from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    DurabilityPolicy,
)

from geometry_msgs.msg import PoseStamped
from ardupilot_msgs.msg import Status

from nidar_interfaces.msg import SurvivorDetection


class ScoutState(Enum):
    IDLE = "IDLE"
    SEARCHING = "SEARCHING"
    REPORTING = "REPORTING"
    COMPLETE = "COMPLETE"


class ScoutNode(Node):

    def __init__(self):
        super().__init__("scout_node")

        self.drone_id = "drone1"
        self.state = ScoutState.IDLE

        self.position_x = 0.0
        self.position_y = 0.0
        self.position_z = 0.0

        self.armed = False
        self.flying = False
        self.external_control = False

        self.pose_received = False

        self.search_index = 0
        self.max_search_points = 20

        pose_qos = QoSProfile(
            depth=10,
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.VOLATILE,
        )

        self.pose_sub = self.create_subscription(
            PoseStamped,
            "/ap/pose/filtered",
            self.pose_callback,
            pose_qos,
        )

        self.status_sub = self.create_subscription(
            Status,
            "/ap/status",
            self.status_callback,
            10,
        )

        self.detection_pub = self.create_publisher(
            SurvivorDetection,
            "/mission/survivor_detection",
            10,
        )

        self.timer = self.create_timer(
            1.0,
            self.update,
        )

        self.get_logger().info(
            f"Scout initialized: drone={self.drone_id}"
        )

    def set_state(self, new_state: ScoutState) -> None:
        if self.state != new_state:
            self.get_logger().info(
                f"SCOUT STATE: {self.state.value} -> {new_state.value}"
            )
            self.state = new_state

    def pose_callback(self, msg: PoseStamped) -> None:
        self.position_x = msg.pose.position.x
        self.position_y = msg.pose.position.y
        self.position_z = msg.pose.position.z
        self.pose_received = True

    def status_callback(self, msg: Status) -> None:
        self.armed = msg.armed
        self.flying = msg.flying
        self.external_control = msg.external_control

    def update(self) -> None:

        if not self.pose_received:
            return

        if self.state == ScoutState.IDLE:
            self.set_state(ScoutState.SEARCHING)

        elif self.state == ScoutState.SEARCHING:

            if self.search_index < self.max_search_points:

                self.search_index += 1

                self.get_logger().info(
                    f"SEARCH POINT "
                    f"{self.search_index}/{self.max_search_points} | "
                    f"position=("
                    f"{self.position_x:.2f}, "
                    f"{self.position_y:.2f}, "
                    f"{self.position_z:.2f}) | "
                    f"armed={self.armed} "
                    f"flying={self.flying}"
                )

            else:
                self.set_state(ScoutState.COMPLETE)

        elif self.state == ScoutState.REPORTING:
            self.set_state(ScoutState.SEARCHING)

        elif self.state == ScoutState.COMPLETE:
            pass


def main(args=None) -> None:

    rclpy.init(args=args)

    node = ScoutNode()

    try:
        rclpy.spin(node)

    except KeyboardInterrupt:
        pass

    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
