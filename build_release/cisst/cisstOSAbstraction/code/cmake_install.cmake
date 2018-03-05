# Install script for directory: /home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/code

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstOSAbstraction" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstOSAbstraction/osaConfig.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jiameng/catkin_dvrk/build_release/cisst/lib/libcisstOSAbstraction.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so"
         OLD_RPATH "/home/jiameng/catkin_dvrk/build_release/cisst/lib:/home/jiameng/catkin_dvrk/build_release/cisst/cisstJSON/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstOSAbstractionInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstOSAbstraction" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaCPUAffinity.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaCriticalSection.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaDynamicLoader.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaDynamicLoaderAndFactory.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaExport.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaForwardDeclarations.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaGetTime.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaMutex.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaPipeExec.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaSerialPort.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaSleep.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaSocket.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaSocketServer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaStopwatch.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaThread.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaThreadAdapter.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaThreadBuddy.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaThreadSignal.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaThreadedLogFile.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaTimeServer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstOSAbstraction/osaTripleBuffer.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstOSAbstraction.h")
endif()

