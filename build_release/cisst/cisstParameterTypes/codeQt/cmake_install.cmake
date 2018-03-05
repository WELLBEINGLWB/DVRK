# Install script for directory: /home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/codeQt

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypesQt")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypesQt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypesQt.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypesQt.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jiameng/catkin_dvrk/build_release/cisst/lib/libcisstParameterTypesQt.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypesQt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypesQt.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypesQt.so"
         OLD_RPATH "/home/jiameng/catkin_dvrk/build_release/cisst/lib:/home/jiameng/catkin_dvrk/build_release/cisst/cisstJSON/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypesQt.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypesQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypesQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypesQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypesQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypesQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypesQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesQtInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypesQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesQtExternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypesQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstParameterTypes" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmEventButtonQtWidget.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmExportQt.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmStateJointQtWidget.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstParameterTypes/prmStateRobotQtWidget.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypesQt")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstParameterTypesQt.h")
endif()

