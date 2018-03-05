# Install script for directory: /home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/code

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstVectorExternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jiameng/catkin_dvrk/build_release/cisst/lib/libcisstVector.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so"
         OLD_RPATH "/home/jiameng/catkin_dvrk/build_release/cisst/lib:/home/jiameng/catkin_dvrk/build_release/cisst/cisstJSON/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstVectorInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstVector" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctAngleRotation2.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctAxisAngleRotation3.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctBarycentricVector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctBinaryOperations.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctContainerTraits.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicMatrix.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicMatrixJSON.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicVector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicVectorJSON.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeMatrix.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeMatrixJSON.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeVector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeVectorJSON.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsTransformations.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsTransformationsJSON.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDeterminant.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicCompactLoopEngines.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicConstMatrixBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicConstMatrixRef.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicConstNArrayBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicConstNArrayRef.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicConstVectorBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicConstVectorRef.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrix.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixLoopEngines.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixOwner.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixRef.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixRefOwner.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixTypes.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicNArray.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayLoopEngines.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayOwner.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayRef.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayRefOwner.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVectorBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVectorLoopEngines.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVectorOwner.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVectorRef.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVectorRefOwner.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVectorTypes.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctEulerRotation3.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctExport.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFastCopy.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstMatrixBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstMatrixRef.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstVectorBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstVectorRef.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrix.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixLoopEngines.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixRef.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixTraits.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixTypes.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeVector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorRecursiveEngines.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorRef.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorTraits.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorTypes.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedStrideMatrixIterator.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedStrideVectorIterator.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctForwardDeclarations.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFrame4x4.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFrame4x4Base.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFrame4x4ConstBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctFrameBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation2.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation2Base.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3Base.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3ConstBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3ConstRef.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3Ref.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctPlot2DBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctPlot2DOpenGL.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctPrintf.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctQuaternion.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctQuaternionBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctQuaternionRotation3.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctQuaternionRotation3Base.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctRandom.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctRandomDynamicMatrix.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctRandomDynamicNArray.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctRandomDynamicVector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctRandomFixedSizeMatrix.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctRandomFixedSizeVector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctRandomTransformations.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctRodriguezRotation3.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctRodriguezRotation3Base.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctStoreBackBinaryOperations.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctStoreBackUnaryOperations.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctTransformationTypes.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctTypes.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctUnaryOperations.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctVarStrideMatrixIterator.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctVarStrideNArrayIterator.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstVector/vctVarStrideVectorIterator.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstVector.h")
endif()

