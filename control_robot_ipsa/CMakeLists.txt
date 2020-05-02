cmake_minimum_required(VERSION 2.8.3)
project(control_robot_ipsa)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  controller_manager
  joint_state_controller
  robot_state_publisher
  geometry_msgs
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES control_robot_ipsa
#  CATKIN_DEPENDS controller_manager joint_state_controller robot_state_publisher
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(planif_robot_ipsa src/planification.cpp)
target_link_libraries(planif_robot_ipsa ${catkin_LIBRARIES})

add_executable(computeXZ src/computeXZ.cpp)
target_link_libraries(computeXZ ${catkin_LIBRARIES})
