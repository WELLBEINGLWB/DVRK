# Install script for directory: /home/jiameng/catkin_dvrk/src/cisst-saw/cisstNetlib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jiameng/catkin_dvrk/devel_release")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/include/cisstNetlib.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstNetlib" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/include/cisstNetlib/cisstNetlib-types.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisstNetlib/include/cisstNetlib/cisstNetlib-lapack.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisstNetlib/include/cisstNetlib/cisstNetlib-hanson-haskell.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisstNetlib/include/cisstNetlib/cisstNetlib-lawson-hanson.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libcisstNetlib_lapack.a" FILES "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/lib/liblapack.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libcisstNetlib_blas.a" FILES "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/lib/libblas.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libcisstNetlib_gfortran.so" FILES "/usr/lib/x86_64-linux-gnu/libgfortran.so.3.0.0")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libcisstNetlib_gcc.a" FILES "/usr/lib/gcc/x86_64-linux-gnu/5/libgcc.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libcisstNetlib_quadmath.a" FILES "/usr/lib/gcc/x86_64-linux-gnu/5/libquadmath.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/CisstNetlibConfig.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/jiameng/catkin_dvrk/build_release/cisst_netlib/hanson-haskell/cmake_install.cmake")
  include("/home/jiameng/catkin_dvrk/build_release/cisst_netlib/lawson-hanson/cmake_install.cmake")
  include("/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlib-wrappers/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
