# Author(s):  Anton Deguet
# Created on: 2014-08-29
#
# (C) Copyright 2014-2016 Johns Hopkins University (JHU), All Rights Reserved.
#

set (sawATIForceSensor_VERSION_MAJOR "1")
set (sawATIForceSensor_VERSION_MINOR "3")
set (sawATIForceSensor_VERSION_PATCH "0")
set (sawATIForceSensor_VERSION "1.3.0")

# figure out if this file is where it was configured (build tree) or
# not (installed tree)
set (sawATIForceSensor_CMAKE_CONFIG_FILE "/home/jiameng/catkin_dvrk/devel_release/.private/saw_ati_force_sensor/share/sawATIForceSensor/cmake/sawATIForceSensorConfig.cmake")
get_filename_component (THIS_FILE_PATH
                        ${CMAKE_CURRENT_LIST_FILE}
                        REALPATH)

if ("${sawATIForceSensor_CMAKE_CONFIG_FILE}" STREQUAL "${THIS_FILE_PATH}")
  # we're using the build directories
  set (sawATIForceSensor_INCLUDE_DIR "/home/jiameng/catkin_dvrk/src/cisst-saw/sawATIForceSensor/components/include;/home/jiameng/catkin_dvrk/build_release/saw_ati_force_sensor/include")
  set (sawATIForceSensor_LIBRARY_DIR "/home/jiameng/catkin_dvrk/build_release/saw_ati_force_sensor/lib")
else ()
  # try to find the install dir, we know the install is using
  # share/sawATIForceSensor so we can go ../..
  set (RELATIVE_INSTALL_DIR "${THIS_FILE_PATH}/../..")
  get_filename_component (ABSOLUTE_INSTALL_DIR "${RELATIVE_INSTALL_DIR}" ABSOLUTE)
  # set directories using the install dir
  set (sawATIForceSensor_INCLUDE_DIR "${ABSOLUTE_INSTALL_DIR}/include")
  set (sawATIForceSensor_LIBRARY_DIR "${ABSOLUTE_INSTALL_DIR}/lib")
endif ()

set (sawATIForceSensor_LIBRARIES   "sawATIForceSensor;sawATIForceSensorQt")
