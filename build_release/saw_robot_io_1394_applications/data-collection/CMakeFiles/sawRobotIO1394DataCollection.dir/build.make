# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/applications

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394_applications

# Include any dependencies generated for this target.
include data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/depend.make

# Include the progress variables for this target.
include data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/progress.make

# Include the compile flags for this target's objects.
include data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/flags.make

data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o: data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/flags.make
data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o: /home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/applications/data-collection/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394_applications/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o"
	cd /home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394_applications/data-collection && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o -c /home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/applications/data-collection/main.cpp

data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.i"
	cd /home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394_applications/data-collection && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/applications/data-collection/main.cpp > CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.i

data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.s"
	cd /home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394_applications/data-collection && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/applications/data-collection/main.cpp -o CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.s

data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o.requires:

.PHONY : data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o.requires

data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o.provides: data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o.requires
	$(MAKE) -f data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/build.make data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o.provides.build
.PHONY : data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o.provides

data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o.provides.build: data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o


# Object files for target sawRobotIO1394DataCollection
sawRobotIO1394DataCollection_OBJECTS = \
"CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o"

# External object files for target sawRobotIO1394DataCollection
sawRobotIO1394DataCollection_EXTERNAL_OBJECTS =

/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/build.make
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /usr/lib/x86_64-linux-gnu/libxml2.so
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /usr/lib/x86_64-linux-gnu/libGLU.so
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /usr/lib/x86_64-linux-gnu/libGL.so
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /usr/lib/x86_64-linux-gnu/libGLU.so
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /usr/lib/x86_64-linux-gnu/libGL.so
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /home/jiameng/catkin_dvrk/devel_release/lib/libcisstNetlib.a
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /home/jiameng/catkin_dvrk/devel_release/lib/libcisstNetlib_hanson_haskell.a
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /home/jiameng/catkin_dvrk/devel_release/lib/libcisstNetlib_lawson_hanson.a
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /home/jiameng/catkin_dvrk/devel_release/lib/libcisstNetlib_lapack.a
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /home/jiameng/catkin_dvrk/devel_release/lib/libcisstNetlib_blas.a
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /home/jiameng/catkin_dvrk/devel_release/lib/libcisstNetlib_gfortran.so
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /home/jiameng/catkin_dvrk/devel_release/lib/libcisstNetlib_quadmath.a
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: /home/jiameng/catkin_dvrk/devel_release/lib/libcisstNetlib_gcc.a
/home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection: data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394_applications/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection"
	cd /home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394_applications/data-collection && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sawRobotIO1394DataCollection.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/build: /home/jiameng/catkin_dvrk/devel_release/.private/saw_robot_io_1394_applications/bin/sawRobotIO1394DataCollection

.PHONY : data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/build

data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/requires: data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/main.cpp.o.requires

.PHONY : data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/requires

data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/clean:
	cd /home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394_applications/data-collection && $(CMAKE_COMMAND) -P CMakeFiles/sawRobotIO1394DataCollection.dir/cmake_clean.cmake
.PHONY : data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/clean

data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/depend:
	cd /home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394_applications && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/applications /home/jiameng/catkin_dvrk/src/cisst-saw/sawRobotIO1394/applications/data-collection /home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394_applications /home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394_applications/data-collection /home/jiameng/catkin_dvrk/build_release/saw_robot_io_1394_applications/data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : data-collection/CMakeFiles/sawRobotIO1394DataCollection.dir/depend

