set(file "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/lapack-3.5.0.tgz")
message(STATUS "verifying file...
     file='${file}'")
set(expect_value "b1d3e3e425b2e44a06760ff173104bdf")
set(attempt 0)
set(succeeded 0)
while(${attempt} LESS 3 OR ${attempt} EQUAL 3 AND NOT ${succeeded})
  file(MD5 "${file}" actual_value)
  if("${actual_value}" STREQUAL "${expect_value}")
    set(succeeded 1)
  elseif(${attempt} LESS 3)
    message(STATUS "MD5 hash of ${file}
does not match expected value
  expected: ${expect_value}
    actual: ${actual_value}
Retrying download.
")
    file(REMOVE "${file}")
    execute_process(COMMAND ${CMAKE_COMMAND} -P "/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-stamp/download-cisstNetlib_Fortran.cmake")
  endif()
  math(EXPR attempt "${attempt} + 1")
endwhile()

if(${succeeded})
  message(STATUS "verifying file... done")
else()
  message(FATAL_ERROR "error: MD5 hash of
  ${file}
does not match expected value
  expected: ${expect_value}
    actual: ${actual_value}
")
endif()
