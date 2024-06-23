# PS4 Controller Deep Learning Data Generator

This project is a simplified version of the [ds4_driver](https://wiki.ros.org/ds4_driver). It focuses on using a PS4 controller to generate data for training a deep learning model. The project includes necessary ROS 2 packages to capture joystick commands and convert them to Ackermann steering commands.

## Prerequisites

Make sure you have ROS 2 Humble Hawksbill installed. Then, install the required packages:

```bash
sudo apt install ros-humble-ackermann-msgs
sudo apt install ros-humble-joy
```

## Running the Code

### 1. Start the Joy Node

The `joy` node captures the joystick commands from the PS4 controller. To run it, use the following command:

```bash
ros2 run joy joy_node
```

### 2. Run the Joy to Ackermann Node

We have developed a custom ROS 2 node that converts the joystick commands to Ackermann steering commands. To run this node, use:

```bash
ros2 run joy_ackerman joy_ackerman
```

## Acknowledgments

- [ds4_driver](https://wiki.ros.org/ds4_driver) - Original project that inspired this simplified version.
