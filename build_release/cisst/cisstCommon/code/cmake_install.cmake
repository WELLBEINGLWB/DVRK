# Install script for directory: /home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/code

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstCommon")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jiameng/catkin_dvrk/build_release/cisst/lib/libcisstCommon.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so"
         OLD_RPATH "/home/jiameng/catkin_dvrk/build_release/cisst/lib:/home/jiameng/catkin_dvrk/build_release/cisst/cisstJSON/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstCommon")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstCommon" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnAccessorMacros.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnAssert.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnCallbackStreambuf.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnClassRegister.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnClassRegisterMacros.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnClassServices.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnClassServicesBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnCommandLineOptions.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnConstants.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnDataFormat.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnDataFunctions.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsArray.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsEnumMacros.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsJSON.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsMacros.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsMatrixHelpers.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsString.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsVector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsVectorHelpers.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnDeSerializer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnExport.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnExportMacros.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnForwardDeclarations.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnGenericObject.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnGenericObjectProxy.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnGetChar.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnKbHit.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnLODMultiplexerStreambuf.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnLODOutputMultiplexer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnLogLoD.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnLogger.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnMultiplexerStreambuf.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnMultiplexerStreambufProxy.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnNamedMap.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnObjectRegister.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnOutputMultiplexer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnPath.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnPortability.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnPrintf.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnRandomSequence.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnRequiresDeepCopy.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnSerializer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnStreamRawParser.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnStrings.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnThrow.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnTokenizer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnTypeTraits.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstCommon/cmnUnits.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstCommon")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstCommon.h")
endif()

