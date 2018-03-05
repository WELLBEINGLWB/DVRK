# Install script for directory: /home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jiameng/catkin_dvrk/install_release")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Amp1394")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394/lib/libAmp1394.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Amp1394-dev")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Amp1394" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/BoardIO.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/AmpIO.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/BasePort.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/Amp1394Time.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/FirewirePort.h"
    )
endif()

