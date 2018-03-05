# Install script for directory: /home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/codeQt

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTaskQt")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTaskQt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTaskQt.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTaskQt.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jiameng/catkin_dvrk/build_release/cisst/lib/libcisstMultiTaskQt.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTaskQt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTaskQt.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTaskQt.so"
         OLD_RPATH "/home/jiameng/catkin_dvrk/build_release/cisst/lib:/home/jiameng/catkin_dvrk/build_release/cisst/cisstJSON/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTaskQt.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTaskQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTaskQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTaskQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTaskQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTaskQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTaskQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskQtExternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTaskQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorQtComponent.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorQtFactory.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorQtWidget.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsExportQt.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsIntervalStatisticsQtWidget.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsMessageQtWidget.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQtApplication.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQtCommandSelector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQtScaleAndSignalTool.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQtVisualizerShell.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQtWidgetComponent.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQtWidgetEvent.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQtWidgetFactory.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQtWidgetFunction.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQtWidgetGenericObject.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQtWidgetGenericObjectProxy.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQtWidgetInterfaceRequired.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQtWidgetVectorTypes.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsSystemQtWidget.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTaskQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstMultiTaskQt.h")
endif()

