# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /tmp/tmp.vq2DZKnyzH

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/tmp.vq2DZKnyzH/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/demoforLinux.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/demoforLinux.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/demoforLinux.dir/flags.make

CMakeFiles/demoforLinux.dir/main.cpp.o: CMakeFiles/demoforLinux.dir/flags.make
CMakeFiles/demoforLinux.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.vq2DZKnyzH/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/demoforLinux.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/demoforLinux.dir/main.cpp.o -c /tmp/tmp.vq2DZKnyzH/main.cpp

CMakeFiles/demoforLinux.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demoforLinux.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.vq2DZKnyzH/main.cpp > CMakeFiles/demoforLinux.dir/main.cpp.i

CMakeFiles/demoforLinux.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demoforLinux.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.vq2DZKnyzH/main.cpp -o CMakeFiles/demoforLinux.dir/main.cpp.s

CMakeFiles/demoforLinux.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/demoforLinux.dir/main.cpp.o.requires

CMakeFiles/demoforLinux.dir/main.cpp.o.provides: CMakeFiles/demoforLinux.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/demoforLinux.dir/build.make CMakeFiles/demoforLinux.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/demoforLinux.dir/main.cpp.o.provides

CMakeFiles/demoforLinux.dir/main.cpp.o.provides.build: CMakeFiles/demoforLinux.dir/main.cpp.o


# Object files for target demoforLinux
demoforLinux_OBJECTS = \
"CMakeFiles/demoforLinux.dir/main.cpp.o"

# External object files for target demoforLinux
demoforLinux_EXTERNAL_OBJECTS =

demoforLinux: CMakeFiles/demoforLinux.dir/main.cpp.o
demoforLinux: CMakeFiles/demoforLinux.dir/build.make
demoforLinux: CMakeFiles/demoforLinux.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/tmp.vq2DZKnyzH/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable demoforLinux"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demoforLinux.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/demoforLinux.dir/build: demoforLinux

.PHONY : CMakeFiles/demoforLinux.dir/build

CMakeFiles/demoforLinux.dir/requires: CMakeFiles/demoforLinux.dir/main.cpp.o.requires

.PHONY : CMakeFiles/demoforLinux.dir/requires

CMakeFiles/demoforLinux.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/demoforLinux.dir/cmake_clean.cmake
.PHONY : CMakeFiles/demoforLinux.dir/clean

CMakeFiles/demoforLinux.dir/depend:
	cd /tmp/tmp.vq2DZKnyzH/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/tmp.vq2DZKnyzH /tmp/tmp.vq2DZKnyzH /tmp/tmp.vq2DZKnyzH/cmake-build-debug /tmp/tmp.vq2DZKnyzH/cmake-build-debug /tmp/tmp.vq2DZKnyzH/cmake-build-debug/CMakeFiles/demoforLinux.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/demoforLinux.dir/depend

