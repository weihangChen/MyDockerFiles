cmake_minimum_required(VERSION 2.8.3)
project(unit_test_demo)

find_package(
  catkin REQUIRED COMPONENTS
  roscpp
)

catkin_package()
include_directories(
  ${catkin_INCLUDE_DIRS}
)
catkin_add_gtest(demotest test/demotest.cpp)
target_link_libraries(demotest ${catkin_LIBRARIES})



