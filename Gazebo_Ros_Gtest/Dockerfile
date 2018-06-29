FROM ros:kinetic
RUN apt-get update && \
apt-get -y install build-essential g++ \ 
cmake \
python3 \
doxygen \
gazebo7 \
gazebo7-doc \
gazebo7-plugin-base \
libgazebo7 \
libgazebo7-dev \
python-rospy \
python-rosservice \
python-sensor-msgs \
python3-matplotlib \
python3-numpy \
python3-pyqt4 \
python3-pyqt5 \
ros-kinetic-controller-manager \
ros-kinetic-controller-manager-msgs \
ros-kinetic-desktop \
ros-kinetic-desktop-full \
ros-kinetic-effort-controllers \
ros-kinetic-gazebo-msgs \
ros-kinetic-gazebo-ros \
ros-kinetic-gazebo-ros-control \
ros-kinetic-hardware-interface \
ros-kinetic-image-view \
ros-kinetic-joint-state-controller \
ros-kinetic-laser-geometry \
ros-kinetic-opencv3 \
ros-kinetic-pcl-conversions \
ros-kinetic-position-controllers \
ros-kinetic-robot-state-publisher \
ros-kinetic-ros-control \
ros-kinetic-rospy \
ros-kinetic-rqt-controller-manager \
ros-kinetic-service-tools \
ros-kinetic-transmission-interface \
ros-kinetic-turtlebot-teleop \
ros-kinetic-vision-opencv \
ros-kinetic-xacro \
ros-kinetic-catkin \
libgtest-dev && \
cd /usr/src/gtest && \
cmake CMakeLists.txt && \
make && \
cp *.a /usr/lib

 