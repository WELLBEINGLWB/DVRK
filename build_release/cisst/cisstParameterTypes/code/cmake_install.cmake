# Install script for directory: /home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/code

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jiameng/catkin_dvrk/build_release/cisst/lib/libcisstParameterTypes.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so"
         OLD_RPATH "/home/jiameng/catkin_dvrk/build_release/cisst/lib:/home/jiameng/catkin_dvrk/build_release/cisst/cisstJSON/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstParameterTypes" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmActuatorParameters.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmActuatorState.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmEventButton.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmExport.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmForceCartesianGet.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmForceCartesianSet.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmForceTorqueJointSet.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmForwardDeclarations.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmGainParameters.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmJointType.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmMaskedVector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmMotionBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmPositionCartesianSet.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmPositionJointSet.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmRobotState.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmTransformationBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmTransformationDynamic.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmTransformationFixed.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmTransformationManager.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmVelocityCartesianGet.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmVelocityCartesianSet.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmVelocityJointGet.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmVelocityJointSet.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstParameterTypes.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstParameterTypes" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstParameterTypes/prmActuatorJointCoupling.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstParameterTypes/prmPositionCartesianGet.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstParameterTypes/prmPositionJointGet.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstParameterTypes/prmCartesianImpedanceGains.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstParameterTypes/prmIMUSensors.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstParameterTypes/prmStateJoint.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstParameterTypes/prmInputData.h"
    )
endif()

