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
CMAKE_SOURCE_DIR = /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran/INSTALL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/INSTALL

# Include any dependencies generated for this target.
include CMakeFiles/testversion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testversion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testversion.dir/flags.make

CMakeFiles/testversion.dir/ilaver.f.o: CMakeFiles/testversion.dir/flags.make
CMakeFiles/testversion.dir/ilaver.f.o: /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran/INSTALL/ilaver.f
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/INSTALL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building Fortran object CMakeFiles/testversion.dir/ilaver.f.o"
	/usr/bin/f95  $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -c /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran/INSTALL/ilaver.f -o CMakeFiles/testversion.dir/ilaver.f.o

CMakeFiles/testversion.dir/ilaver.f.i: cmake_force
	@echo "Preprocessing Fortran source to CMakeFiles/testversion.dir/ilaver.f.i"
	/usr/bin/f95  $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -E /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran/INSTALL/ilaver.f > CMakeFiles/testversion.dir/ilaver.f.i

CMakeFiles/testversion.dir/ilaver.f.s: cmake_force
	@echo "Compiling Fortran source to assembly CMakeFiles/testversion.dir/ilaver.f.s"
	/usr/bin/f95  $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -S /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran/INSTALL/ilaver.f -o CMakeFiles/testversion.dir/ilaver.f.s

CMakeFiles/testversion.dir/ilaver.f.o.requires:

.PHONY : CMakeFiles/testversion.dir/ilaver.f.o.requires

CMakeFiles/testversion.dir/ilaver.f.o.provides: CMakeFiles/testversion.dir/ilaver.f.o.requires
	$(MAKE) -f CMakeFiles/testversion.dir/build.make CMakeFiles/testversion.dir/ilaver.f.o.provides.build
.PHONY : CMakeFiles/testversion.dir/ilaver.f.o.provides

CMakeFiles/testversion.dir/ilaver.f.o.provides.build: CMakeFiles/testversion.dir/ilaver.f.o


CMakeFiles/testversion.dir/LAPACK_version.f.o: CMakeFiles/testversion.dir/flags.make
CMakeFiles/testversion.dir/LAPACK_version.f.o: /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran/INSTALL/LAPACK_version.f
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/INSTALL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building Fortran object CMakeFiles/testversion.dir/LAPACK_version.f.o"
	/usr/bin/f95  $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -c /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran/INSTALL/LAPACK_version.f -o CMakeFiles/testversion.dir/LAPACK_version.f.o

CMakeFiles/testversion.dir/LAPACK_version.f.i: cmake_force
	@echo "Preprocessing Fortran source to CMakeFiles/testversion.dir/LAPACK_version.f.i"
	/usr/bin/f95  $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -E /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran/INSTALL/LAPACK_version.f > CMakeFiles/testversion.dir/LAPACK_version.f.i

CMakeFiles/testversion.dir/LAPACK_version.f.s: cmake_force
	@echo "Compiling Fortran source to assembly CMakeFiles/testversion.dir/LAPACK_version.f.s"
	/usr/bin/f95  $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -S /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran/INSTALL/LAPACK_version.f -o CMakeFiles/testversion.dir/LAPACK_version.f.s

CMakeFiles/testversion.dir/LAPACK_version.f.o.requires:

.PHONY : CMakeFiles/testversion.dir/LAPACK_version.f.o.requires

CMakeFiles/testversion.dir/LAPACK_version.f.o.provides: CMakeFiles/testversion.dir/LAPACK_version.f.o.requires
	$(MAKE) -f CMakeFiles/testversion.dir/build.make CMakeFiles/testversion.dir/LAPACK_version.f.o.provides.build
.PHONY : CMakeFiles/testversion.dir/LAPACK_version.f.o.provides

CMakeFiles/testversion.dir/LAPACK_version.f.o.provides.build: CMakeFiles/testversion.dir/LAPACK_version.f.o


# Object files for target testversion
testversion_OBJECTS = \
"CMakeFiles/testversion.dir/ilaver.f.o" \
"CMakeFiles/testversion.dir/LAPACK_version.f.o"

# External object files for target testversion
testversion_EXTERNAL_OBJECTS =

testversion: CMakeFiles/testversion.dir/ilaver.f.o
testversion: CMakeFiles/testversion.dir/LAPACK_version.f.o
testversion: CMakeFiles/testversion.dir/build.make
testversion: CMakeFiles/testversion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/INSTALL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking Fortran executable testversion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testversion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testversion.dir/build: testversion

.PHONY : CMakeFiles/testversion.dir/build

CMakeFiles/testversion.dir/requires: CMakeFiles/testversion.dir/ilaver.f.o.requires
CMakeFiles/testversion.dir/requires: CMakeFiles/testversion.dir/LAPACK_version.f.o.requires

.PHONY : CMakeFiles/testversion.dir/requires

CMakeFiles/testversion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testversion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testversion.dir/clean

CMakeFiles/testversion.dir/depend:
	cd /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/INSTALL && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran/INSTALL /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran/INSTALL /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/INSTALL /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/INSTALL /home/jiameng/catkin_dvrk/build_release/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/INSTALL/CMakeFiles/testversion.dir/DependInfo.cmake
.PHONY : CMakeFiles/testversion.dir/depend

