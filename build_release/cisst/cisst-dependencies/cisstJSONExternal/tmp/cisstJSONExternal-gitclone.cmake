if("1.7.4.1" STREQUAL "")
  message(FATAL_ERROR "Tag for git checkout should not be empty.")
endif()

set(run 0)

if("/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal-stamp/cisstJSONExternal-gitinfo.txt" IS_NEWER_THAN "/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal-stamp/cisstJSONExternal-gitclone-lastrun.txt")
  set(run 1)
endif()

if(NOT run)
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal-stamp/cisstJSONExternal-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal'")
endif()

# try the clone 3 times incase there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git" clone --origin "origin" "https://github.com/jhu-cisst-external/jsoncpp.git" "cisstJSONExternal"
    WORKING_DIRECTORY "/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/jhu-cisst-external/jsoncpp.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git" checkout 1.7.4.1
  WORKING_DIRECTORY "/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '1.7.4.1'")
endif()

execute_process(
  COMMAND "/usr/bin/git" submodule init 
  WORKING_DIRECTORY "/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to init submodules in: '/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal'")
endif()

execute_process(
  COMMAND "/usr/bin/git" submodule update --recursive 
  WORKING_DIRECTORY "/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal-stamp/cisstJSONExternal-gitinfo.txt"
    "/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal-stamp/cisstJSONExternal-gitclone-lastrun.txt"
  WORKING_DIRECTORY "/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/jiameng/catkin_dvrk/build_release/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal-stamp/cisstJSONExternal-gitclone-lastrun.txt'")
endif()

