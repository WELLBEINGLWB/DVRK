# Install script for directory: /home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/codeQt

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVectorQt")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVectorQt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVectorQt.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVectorQt.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jiameng/catkin_dvrk/build_release/cisst/lib/libcisstVectorQt.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVectorQt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVectorQt.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVectorQt.so"
         OLD_RPATH "/home/jiameng/catkin_dvrk/build_release/cisst/lib:/home/jiameng/catkin_dvrk/build_release/cisst/cisstJSON/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVectorQt.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVectorQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstVectorQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVectorQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstVectorQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVectorQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstVectorQtExternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVectorQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstVectorQtExternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVectorQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstVector" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctExportQt.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctPlot2DOpenGLQtWidget.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctQtForwardDeclarations.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctQtWidgetDynamicMatrix.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctQtWidgetDynamicVector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctQtWidgetFrame.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctQtWidgetFrame4x4.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctQtWidgetRotation.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVectorQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstVectorQt.h")
endif()

