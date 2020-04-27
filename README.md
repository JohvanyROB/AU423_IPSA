# AU423_IPSA

## Install ROS
Depending on your Ubuntu distribution (18.04 LTS or 16.04 LTS), you will install one of the following ROS distribution.

### ROS Melodic (Ubuntu 18)
The following instructions come from this [site](http://wiki.ros.org/melodic/Installation/Ubuntu)
```bash
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'

sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654

sudo apt update

sudo apt install ros-melodic-desktop-full

echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc

source ~/.bashrc

sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential

sudo apt install python-rosdep

sudo rosdep init

rosdep update
```

### ROS Kinetic (Ubuntu 16)
The following instructions come from this [site](http://wiki.ros.org/kinetic/Installation/Ubuntu)

```bash
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'

sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654

sudo apt-get update

sudo apt-get install ros-kinetic-desktop-full

echo "source /opt/ros/kinetic/setup.bash" >> ~/.bashrc

source ~/.bashrc

sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential

sudo apt install python-rosdep

sudo rosdep init
rosdep update
```


## Create your catkin workspace
The following instructions come from this [site](http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment)

```bash
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/
catkin_make
echo "source ~/catkin_ws/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc
```


## Install dependencies
If you have ROS Kinetic, replace "melodic" by "kinetic" in the following command:
```bash
sudo apt install ros-melodic-joint-state-publisher-gui ros-melodic-effort-controllers ros-melodic-joint-state-controller ros-melodic-controller-manager 
```


## Clone this repository in your workspace
```bash
cd ~/catkin_ws/src
git clone https://github.com/JohvanyROB/AU423_IPSA
roscd && cd ..
catkin_make
```
