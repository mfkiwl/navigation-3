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
CMAKE_SOURCE_DIR = /home/chen/project/fl-slam

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chen/project/fl-slam/build

# Include any dependencies generated for this target.
include src/transformer/CMakeFiles/transformer.dir/depend.make

# Include the progress variables for this target.
include src/transformer/CMakeFiles/transformer.dir/progress.make

# Include the compile flags for this target's objects.
include src/transformer/CMakeFiles/transformer.dir/flags.make

src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o: src/transformer/CMakeFiles/transformer.dir/flags.make
src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o: ../src/transformer/tf2/src/cache.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chen/project/fl-slam/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o"
	cd /home/chen/project/fl-slam/build/src/transformer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/transformer.dir/tf2/src/cache.cpp.o -c /home/chen/project/fl-slam/src/transformer/tf2/src/cache.cpp

src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/transformer.dir/tf2/src/cache.cpp.i"
	cd /home/chen/project/fl-slam/build/src/transformer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chen/project/fl-slam/src/transformer/tf2/src/cache.cpp > CMakeFiles/transformer.dir/tf2/src/cache.cpp.i

src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/transformer.dir/tf2/src/cache.cpp.s"
	cd /home/chen/project/fl-slam/build/src/transformer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chen/project/fl-slam/src/transformer/tf2/src/cache.cpp -o CMakeFiles/transformer.dir/tf2/src/cache.cpp.s

src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o.requires:

.PHONY : src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o.requires

src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o.provides: src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o.requires
	$(MAKE) -f src/transformer/CMakeFiles/transformer.dir/build.make src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o.provides.build
.PHONY : src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o.provides

src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o.provides.build: src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o


src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o: src/transformer/CMakeFiles/transformer.dir/flags.make
src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o: ../src/transformer/tf2/src/buffer_core.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chen/project/fl-slam/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o"
	cd /home/chen/project/fl-slam/build/src/transformer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o -c /home/chen/project/fl-slam/src/transformer/tf2/src/buffer_core.cpp

src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.i"
	cd /home/chen/project/fl-slam/build/src/transformer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chen/project/fl-slam/src/transformer/tf2/src/buffer_core.cpp > CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.i

src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.s"
	cd /home/chen/project/fl-slam/build/src/transformer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chen/project/fl-slam/src/transformer/tf2/src/buffer_core.cpp -o CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.s

src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o.requires:

.PHONY : src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o.requires

src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o.provides: src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o.requires
	$(MAKE) -f src/transformer/CMakeFiles/transformer.dir/build.make src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o.provides.build
.PHONY : src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o.provides

src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o.provides.build: src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o


src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o: src/transformer/CMakeFiles/transformer.dir/flags.make
src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o: ../src/transformer/tf2/src/static_cache.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chen/project/fl-slam/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o"
	cd /home/chen/project/fl-slam/build/src/transformer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o -c /home/chen/project/fl-slam/src/transformer/tf2/src/static_cache.cpp

src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.i"
	cd /home/chen/project/fl-slam/build/src/transformer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chen/project/fl-slam/src/transformer/tf2/src/static_cache.cpp > CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.i

src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.s"
	cd /home/chen/project/fl-slam/build/src/transformer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chen/project/fl-slam/src/transformer/tf2/src/static_cache.cpp -o CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.s

src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o.requires:

.PHONY : src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o.requires

src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o.provides: src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o.requires
	$(MAKE) -f src/transformer/CMakeFiles/transformer.dir/build.make src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o.provides.build
.PHONY : src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o.provides

src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o.provides.build: src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o


# Object files for target transformer
transformer_OBJECTS = \
"CMakeFiles/transformer.dir/tf2/src/cache.cpp.o" \
"CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o" \
"CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o"

# External object files for target transformer
transformer_EXTERNAL_OBJECTS =

src/transformer/libtransformer.so: src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o
src/transformer/libtransformer.so: src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o
src/transformer/libtransformer.so: src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o
src/transformer/libtransformer.so: src/transformer/CMakeFiles/transformer.dir/build.make
src/transformer/libtransformer.so: src/transformer/tf2_ros/libtf2_ros.a
src/transformer/libtransformer.so: src/transformer/robot_state_publisher/libtf2_robot_state_publisher.a
src/transformer/libtransformer.so: src/dds_wrapper/libdds_wrapper.so
src/transformer/libtransformer.so: src/transformer/CMakeFiles/transformer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chen/project/fl-slam/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libtransformer.so"
	cd /home/chen/project/fl-slam/build/src/transformer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/transformer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/transformer/CMakeFiles/transformer.dir/build: src/transformer/libtransformer.so

.PHONY : src/transformer/CMakeFiles/transformer.dir/build

src/transformer/CMakeFiles/transformer.dir/requires: src/transformer/CMakeFiles/transformer.dir/tf2/src/cache.cpp.o.requires
src/transformer/CMakeFiles/transformer.dir/requires: src/transformer/CMakeFiles/transformer.dir/tf2/src/buffer_core.cpp.o.requires
src/transformer/CMakeFiles/transformer.dir/requires: src/transformer/CMakeFiles/transformer.dir/tf2/src/static_cache.cpp.o.requires

.PHONY : src/transformer/CMakeFiles/transformer.dir/requires

src/transformer/CMakeFiles/transformer.dir/clean:
	cd /home/chen/project/fl-slam/build/src/transformer && $(CMAKE_COMMAND) -P CMakeFiles/transformer.dir/cmake_clean.cmake
.PHONY : src/transformer/CMakeFiles/transformer.dir/clean

src/transformer/CMakeFiles/transformer.dir/depend:
	cd /home/chen/project/fl-slam/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chen/project/fl-slam /home/chen/project/fl-slam/src/transformer /home/chen/project/fl-slam/build /home/chen/project/fl-slam/build/src/transformer /home/chen/project/fl-slam/build/src/transformer/CMakeFiles/transformer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/transformer/CMakeFiles/transformer.dir/depend

