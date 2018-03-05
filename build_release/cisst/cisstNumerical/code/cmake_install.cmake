# Install script for directory: /home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/code

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstNumerical")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstNumerical" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstNumerical/nmrConfig.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstNumerical")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jiameng/catkin_dvrk/build_release/cisst/lib/libcisstNumerical.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so"
         OLD_RPATH "/home/jiameng/catkin_dvrk/build_release/cisst/lib:/home/jiameng/catkin_dvrk/build_release/cisst/cisstJSON/lib:/home/jiameng/catkin_dvrk/devel_release/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstNumerical")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstNumericalInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstNumerical")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstNumericalInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstNumerical")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstNumerical" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrBernsteinPolynomial.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrBernsteinPolynomialLineIntegral.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrCallBack.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrConstraintOptimizer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrDynAllocPolynomialContainer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrExport.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrGaussJordanInverse.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrHFTISolver.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrInverse.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrInverseSPD.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrIsOrthonormal.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrLDPSolver.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrLSMinNorm.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrLSSolver.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrLSqLin.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrLU.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrLinearRegression.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrMultiIndexCounter.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrMultiVariablePowerBasis.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrNNLSSolver.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrNetlib.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrPInverse.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrPInverseEconomy.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrPolynomialBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrPolynomialContainer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrPolynomialTermPowerIndex.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrRegistrationRigid.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrSVD.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrSVDEconomy.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrSVDRSSolver.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrSavitzkyGolay.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrSingleVariablePowerBasis.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrStandardPolynomial.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstNumerical/nmrSymmetricEigenProblem.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstNumerical")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstNumerical.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstNumerical")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstNumericalBuild.cmake")
endif()

