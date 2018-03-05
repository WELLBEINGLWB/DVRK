# Install script for directory: /home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jiameng/catkin_dvrk/build_release/cisst/cisstReflexxesTypeII")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libReflexxesTypeII.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libReflexxesTypeII.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libReflexxesTypeII.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal-build/ReflexxesTypeII/libReflexxesTypeII.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libReflexxesTypeII.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libReflexxesTypeII.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libReflexxesTypeII.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ReflexxesTypeII" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLInputParameters.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLVelocity.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLPositionInputParameters.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLDecisionTree2.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLMath.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLVelocityInputParameters.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLVelocityOutputParameters.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLStep2IntermediateProfiles.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLStep1IntermediateProfiles.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLOutputParameters.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLDecisionTree1B.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLDecisions.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLFlags.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLPositionOutputParameters.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLVector.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLStep2Profiles.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLDecisionTree1A.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLPolynomial.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/ReflexxesAPI.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLStep2WithoutSynchronization.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLPositionFlags.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLVelocityFlags.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLDecisionTree1C.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLQuicksort.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLStep1Profiles.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLPosition.h"
    )
endif()

