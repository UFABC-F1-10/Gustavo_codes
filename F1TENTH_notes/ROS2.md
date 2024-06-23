# Introduction
ROS2 stands for Robot Operating System 2. It's a flexible and powerful framework designed to facilitate the development of robot software. Just like an operating system for your computer manages hardware resources and provides common services to applications, ROS2 does the same for robots.

ROS2 offers a range of tools and libraries that help in creating robotic applications. It provides a communication infrastructure that enables different parts of a robot system to communicate with each other easily. This communication system allows modules like sensors, controllers, and higher-level algorithms to share information and work together seamlessly.

One of the key features of ROS2 is its modular and distributed nature. It allows developers to build a robot system by connecting individual software modules, called nodes, that perform specific tasks. These nodes can run on different computers or devices and communicate with each other using a publish-subscribe messaging system or through remote procedure calls.

Additionally, ROS2 supports various programming languages like C++, Python, and others, making it accessible to a broader community of developers. It also provides tools for visualization, debugging, and simulation, which are crucial for testing and validating robotic systems before deploying them onto physical robots.

Overall, ROS2 plays a vital role in simplifying and accelerating the development of robotic applications by providing a standardized framework for communication, interoperability, and collaboration between different components of a robot system.

## Ackerman
github:
https://github.com/ros-drivers/ackermann_msgs

documetation
https://docs.ros.org/en/jade/api/ackermann_msgs/html/msg/AckermannDrive.html

https://wiki.ros.org/Ackermann%20Group/January%2029%2C%202012

base explanation:
https://en.wikipedia.org/wiki/Ackermann_steering_geometry

example:
```python
def joyCallback(msg):
    for i in range(len(msg.buttons)):
        if msg.buttons[i] == 1:
            print 'WOW! You pressed the ' + str(i) + ' button!'

    ack_msg = AckermannDriveStamped()
    ack_msg.header.stamp = rospy.Time.now()
    ack_msg.header.frame_id = 'your_frame_here'
    ack_msg.drive.steering_angle = msg.axes[0] * max_steering
    ack_msg.drive.speed = msg.axes[1] * max_speed
    ack_publisher.publish(ack_msg)
```
