#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
import matplotlib.pyplot as plt
import math
import numpy as np
import time

class WallFollow(Node):

    def __init__(self):
        super().__init__('wall_follow')

        plt.ion()  # Enable interactive mode for real-time updates
        self.fig, self.ax = plt.subplots()
        self.line, = self.ax.plot([], [])
        self.ax.set_xlabel('Time (seconds)')
        self.ax.set_ylabel('Error')
        self.ax.set_title('Error vs. Time')
        self.ax.grid(True)
        self.incremento = 180  # Adjust the increment based on your needs

        self.scan_subscriber = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            10
        )

        self.cmd_vel_publisher = self.create_publisher(
            Twist,
            '/cmd_vel',
            10
        )
        # PID parameters
        self.kp = 14.0
        self.ki = 0.001
        self.kd = 0.09

        # Store history
        self.integral = 0.0
        self.prev_error = 0.0
        self.error_list = []
        self.time_list = []

        # Start time
        self.start_time = time.time()

    def scan_callback(self, msg):
        error = self.get_error(msg, dist=0.5)
        self.error_list.append(error)

        velocity = self.calculate_velocity(error)
        self.pid_control(error, velocity)

        # Calculate elapsed time
        current_time = time.time() - self.start_time
        self.time_list.append(current_time)

        # Plot the error vs. time
        self.plot_error_vs_time()

    def get_range(self, range_data, angle):
        if not range_data:
            return 0.0
        if math.isnan(range_data[angle]):
            return 0.0
        elif range_data[angle] == float('inf'):
            return 0.0
        else:
            return range_data[angle]

    def get_error(self, msg, dist):
        b = msg.ranges[int(540-(90)/0.246)]
        a = msg.ranges[int(540-(45)/0.246)]
        teta = math.radians(45)
        alpha = math.atan((math.cos(teta)-b)/(a*math.sin(teta)))
        D = b*math.cos(alpha)
        Dt = D + (0.1*math.sin(alpha))
        error = dist - Dt
        return error

    def calculate_velocity(self, error):
        if error < 0:
            velocity = 1.0 + abs(error) * 0.2
        else:
            velocity = 1.0
        return velocity

    def pid_control(self, error, velocity):
        self.integral += error
        angle = self.kp * error + self.ki * self.integral + self.kd * (error - self.prev_error)
        self.prev_error = error
        drive_msg = Twist()
        drive_msg.linear.x = velocity
        drive_msg.angular.z = angle
        self.cmd_vel_publisher.publish(drive_msg)

    def plot_error_vs_time(self):
        self.line.set_xdata(self.time_list)
        self.line.set_ydata(self.error_list)
        self.ax.relim()
        self.ax.autoscale_view()
        self.fig.canvas.draw()
        self.fig.canvas.flush_events()


def main(args=None):
    rclpy.init(args=args)
    print("WallFollow Initialized")
    wall_follow_node = WallFollow()
    rclpy.spin(wall_follow_node)
    wall_follow_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
