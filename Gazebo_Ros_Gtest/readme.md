## in house ros project setup for local dev enronment setup

### Project Structure
this project simulates the [catkin work space](http://wiki.ros.org/catkin/Tutorials/create_a_workspace). `GAZEBO_ROS_GTEST/src` contains two packages. 
* `beginner_tutorials` is used to verify that the envrionment is set up   correctly + demonstrate the minimal version of codebase to set up a   [ros node](http://wiki.ros.org/ROS/Tutorials/UnderstandingNodes)


* `unit_test_demo` is used to demonstrate how to write a gtest unit test and how to configure it in `CMakeLists.txt`, the configuration setup can be found [here](http://wiki.ros.org/gtest) and the commands used to run a unit test can be found [here](http://docs.ros.org/jade/api/catkin/html/howto/format2/run_tests.html)



### If you install Ubuntu and run it locally
1. after you install all packages from readme.md, checkout the sourcecode
2. navigate to a terminal, source `source opt/ros/kinetic/setup.bash`, and `roscore` 
3. navigate terminal to `GAZEBO_ROS_GTEST` run `catkin_make`, it will build the project.
4. navigate terminal to `GAZEBO_ROS_GTEST` run `catkin_make run_tests`,
unit test should run.
5. navigate terminal to `GAZEBO_ROS_GTEST` run `source devel/setup.bash` and `rosrun beginner_tutorials talker`, now a exceuable is running in the OS and registered and managed as a node in ROS. 

### If you run windows
1. after you install all packages from readme.md, checkout the sourcecode
2. install [docker](https://docs.docker.com/docker-for-windows/install/)
3. dockerfile is located under `GAZEBO_ROS_GTEST`, you can modify it build your own or use the one our team build `docker pull docker pull gomarc/ros_gazebo`
4. checkout the sourcecode
5. run `docker run -it -v your_path/GAZEBO_ROS_GTEST:/catkin_ws gomarc/ros_gazebo bash`
6. now you are inside of a running container, you can open up multiple terminal by `sudo docker exec -it container_id bash`
7. when you are inside of a running container, just repeat step 2 to step 5 from previous section


