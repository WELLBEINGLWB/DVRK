# Install script for directory: /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
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
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/pkgconfig/lapack.pc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/pkgconfig" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/lapack.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/lapack-3.4.2" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/CMakeFiles/lapack-config.cmake"
    "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/lapack-config-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/lapack-3.4.2/lapack-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/lapack-3.4.2/lapack-targets.cmake"
         "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/CMakeFiles/Export/lib/cmake/lapack-3.4.2/lapack-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/lapack-3.4.2/lapack-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/lapack-3.4.2/lapack-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/lapack-3.4.2" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/CMakeFiles/Export/lib/cmake/lapack-3.4.2/lapack-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/lapack-3.4.2" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/CMakeFiles/Export/lib/cmake/lapack-3.4.2/lapack-targets-release.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/BLAS/cmake_install.cmake")
  include("/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/SRC/cmake_install.cmake")
  include("/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/TESTING/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
