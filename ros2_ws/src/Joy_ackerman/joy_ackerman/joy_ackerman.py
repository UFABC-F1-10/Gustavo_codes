#!/usr/bin/env python3
import rclpy
from ackermann_msgs.msg import AckermannDriveStamped
from rclpy.node import Node
from geometry_msgs.msg import Twist, Vector3
from sensor_msgs.msg import Joy

class JoyToAckerman(Node):
    def __init__(self):
        super().__init__('joy_ackerman')
        self.subscription = self.create_subscription(
            Joy,
            '/joy',  # Substitua 'joy_topic' pelo tópico correto onde os dados do joystick são publicados
            self.joy_callback,
            10)
        self.publisher = self.create_publisher(
            AckermannDriveStamped,
            '/drive',  # Substitua 'ackermann_cmd' pelo tópico onde os comandos ackermann serão publicados
            10)
        self.max_speed = 7.0  # Limite de velocidade em m/s
        self.max_angle = 0.041 # Limite de vangulo em rad

    def joy_callback(self, msg):
        # Eliminar valores muito próximos a zero para evitar movimentos indesejados
        if abs(msg.axes[2]) < 0.1:
            msg.axes[2] = 0.0
        if abs(msg.axes[1]) < 0.1:
            msg.axes[1] = 0.0

        # Transformar dados do joystick em comandos de direção ackermann
        speed = self.max_speed * msg.axes[1]
        steering_angle = self.max_angle * msg.axes[2]

        # Publicar os comandos ackermann
        ackermann_cmd = AckermannDriveStamped()
        ackermann_cmd.drive.speed =  speed
        ackermann_cmd.drive.steering_angle  = steering_angle
        self.publisher.publish(ackermann_cmd)

def main(args=None):
    rclpy.init(args=args)
    joy_ackerman = JoyToAckerman()
    rclpy.spin(joy_ackerman)
    joy_ackerman.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()