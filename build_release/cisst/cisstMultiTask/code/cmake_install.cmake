# Install script for directory: /home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/code

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstMultiTask/mtsConfig.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskBuild.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jiameng/catkin_dvrk/build_release/cisst/lib/libcisstMultiTask.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so"
         OLD_RPATH "/home/jiameng/catkin_dvrk/build_release/cisst/lib:/home/jiameng/catkin_dvrk/build_release/cisst/cisstJSON/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskInternal.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableQualifiedReadBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableQualifiedReadMethod.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableQualifiedReadReturnVoidMethod.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableReadBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableReadMethod.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableReadReturnVoidMethod.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidFunction.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidMethod.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidReturnBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidReturnMethod.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableWriteReturnBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCallableWriteReturnMethod.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorEvent.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorFactory.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorState.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandFilteredQueuedWrite.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandFilteredWrite.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQualifiedRead.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedVoid.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedVoidReturn.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedWrite.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedWriteBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedWriteReturn.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandRead.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandVoid.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandVoidReturn.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandWrite.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandWriteBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsCommandWriteReturn.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsComponent.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsComponentAddLatency.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsComponentGeneratorMacros.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsComponentViewer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsConnection.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsEventReceiver.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsExport.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsFixedSizeVector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsFixedSizeVectorTypes.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsForwardDeclarations.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionQualifiedRead.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionRead.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionVoid.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionVoidReturn.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionWrite.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionWriteReturn.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsGenericObject.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsGenericObjectProxy.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsInterface.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceInput.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceOutput.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceProvided.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceRequired.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsIntervalStatistics.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsLODMultiplexerStreambuf.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsMacros.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsMailBox.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentClient.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentServer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentServices.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsManagerGlobal.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsManagerGlobalInterface.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsManagerLocal.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsManagerLocalInterface.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsMatrix.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsMulticastCommandVoid.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsMulticastCommandWrite.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsMulticastCommandWriteBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsParameterTypesOld.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsQueue.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsSocketProxyClient.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsSocketProxyCommon.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsSocketProxyServer.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsStateArray.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsStateArrayBase.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsStateData.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsStateIndex.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsStateTable.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsTask.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsTaskContinuous.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsTaskFromCallback.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsTaskFromSignal.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsTaskManager.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsTaskPeriodic.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsTransformationTypes.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsVector.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsWatchdogClient.h"
    "/home/jiameng/catkin_dvrk/src/cisst-saw/cisst/cisstMultiTask/mtsWatchdogServer.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstMultiTask.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES
    "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstMultiTask/mtsInterfaceCommon.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstMultiTask/mtsComponentState.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstMultiTask/mtsExecutionResult.h"
    "/home/jiameng/catkin_dvrk/build_release/cisst/include/cisstMultiTask/mtsParameterTypes.h"
    )
endif()

