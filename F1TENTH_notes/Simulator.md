# With an NVIDIA GPU
## Pre requirements
 install the version of nvidia driver supported by rocker

For the NVIDIA option this has been tested on the following systems using nvidia docker2:

|Ubuntu distribution|Linux Kernel|Nvidia drivers|
|---|---|---|
|16.04|4.15|nvidia-384 (works)  <br>nvidia-340 (doesn't work)|
|18.04||nvidia-390 (works)|
|20.04|5.4.0|nvidia-driver-460 (works)|
|22.04|5.13.0|nvidia-driver-470 (works)|

## ROS2 Humble 


Make sure you have a locale which supports `UTF-8`. If you are in a minimal environment (such as a docker container), the locale may be something minimal like `POSIX`. We test with the following settings. However, it should be fine if you’re using a different UTF-8 supported locale.

```bash
locale  # check for UTF-8

sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

locale  # verify settings

```

Setup Sources

You will need to add the ROS 2 apt repository to your system.

First ensure that the Ubuntu Universe repository is enabled.


```bash
sudo apt install software-properties-common
sudo add-apt-repository universe
```

Now add the ROS 2 GPG key with apt.

```bash
sudo apt update && sudo apt install curl -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
```

Then add the repository to your sources list.


```bash
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
```

Install ROS 2 packages

Update your apt repository caches after setting up the repositories.

```bash
sudo apt update
```


ROS 2 packages are built on frequently updated Ubuntu systems. It is always recommended that you ensure your system is up to date before installing new packages.

```bash
sudo apt upgrade
```

Desktop Install (Recommended): ROS, RViz, demos, tutorials.
```bash
sudo apt install ros-humble-desktop
```

open the bashrc file and add ros2 to the source list

```bash
sudo nano .bashrc
```

add to the and of the file

```bash
source /opt/ros/humble/setup.bash
```

## Install Docker 
```bash
# Add Docker's official GPG key:
sudo apt-get update
sudo apt-get install ca-certificates curl
sudo install -m 0755 -d /etc/apt/keyrings
sudo curl -fsSL https://download.docker.com/linux/ubuntu/gpg -o /etc/apt/keyrings/docker.asc
sudo chmod a+r /etc/apt/keyrings/docker.asc

# Add the repository to Apt sources:
echo \
  "deb [arch=$(dpkg --print-architecture) signed-by=/etc/apt/keyrings/docker.asc] https://download.docker.com/linux/ubuntu \
  $(. /etc/os-release && echo "$VERSION_CODENAME") stable" | \
  sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
sudo apt-get update
```

```bash
sudo apt-get install docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin
```


to give sudo permission to docker fallow this link

https://docs.docker.com/engine/security/rootless/

## NVIDIA Container Toolkit

Configure the production repository:
```bash
curl -fsSL https://nvidia.github.io/libnvidia-container/gpgkey | sudo gpg --dearmor -o /usr/share/keyrings/nvidia-container-toolkit-keyring.gpg \
  && curl -s -L https://nvidia.github.io/libnvidia-container/stable/deb/nvidia-container-toolkit.list | \
    sed 's#deb https://#deb [signed-by=/usr/share/keyrings/nvidia-container-toolkit-keyring.gpg] https://#g' | \
    sudo tee /etc/apt/sources.list.d/nvidia-container-toolkit.list
```

Update the packages list from the repository:
```bash
sudo apt-get update /
sudo apt-get install -y nvidia-container-toolkit
```

Configuring Docker:
```bash
sudo nvidia-ctk runtime configure --runtime=docker
```

The `nvidia-ctk` command modifies the `/etc/docker/daemon.json` file on the host. The file is updated so that Docker can use the NVIDIA Container Runtime.

Restart the Docker daemon:

```bash
sudo systemctl restart docker
```

## Rocker

```bash
sudo apt-get install python3-rocker
```

**Installing the simulation:**

1. Clone this repo 
```bash
git clone https://github.com/GustavoDRL/f1tenth_gym_ufabc
```
2. Build the docker image by:
```bash
 cd f1tenth_gym_ros_ufabc
 docker build -t f1tenth_gym_ros -f Dockerfile .
```
3. To run the containerized environment, start a docker container by running the following. (example showned here with nvidia-docker support). By running this, the current directory that you're in (should be `f1tenth_gym_ros`) is mounted in the container at `/sim_ws/src/f1tenth_gym_ros`. Which means that the changes you make in the repo on the host system will also reflect in the container.
```bash
 sudo rocker --nvidia --x11 --volume .:/sim_ws/src/f1tenth_gym_ros -- f1tenth_gym_ros
```

# Launching the Simulation

1. `tmux` is included in the contianer, so you can create multiple bash sessions in the same terminal.
2. To launch the simulation, make sure you source both the ROS2 setup script and the local workspace setup script. Run the following in the bash session from the container:
```bash
 source /opt/ros/humble/setup.bash
 source install/local_setup.bash
 ros2 launch f1tenth_gym_ros gym_bridge_launch.py
 ```
