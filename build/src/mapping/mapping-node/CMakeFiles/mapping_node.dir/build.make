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
include src/mapping/mapping-node/CMakeFiles/mapping_node.dir/depend.make

# Include the progress variables for this target.
include src/mapping/mapping-node/CMakeFiles/mapping_node.dir/progress.make

# Include the compile flags for this target's objects.
include src/mapping/mapping-node/CMakeFiles/mapping_node.dir/flags.make

src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o: src/mapping/mapping-node/CMakeFiles/mapping_node.dir/flags.make
src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o: ../src/mapping/mapping-node/src/node_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chen/project/fl-slam/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o"
	cd /home/chen/project/fl-slam/build/src/mapping/mapping-node && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mapping_node.dir/src/node_main.cc.o -c /home/chen/project/fl-slam/src/mapping/mapping-node/src/node_main.cc

src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapping_node.dir/src/node_main.cc.i"
	cd /home/chen/project/fl-slam/build/src/mapping/mapping-node && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chen/project/fl-slam/src/mapping/mapping-node/src/node_main.cc > CMakeFiles/mapping_node.dir/src/node_main.cc.i

src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapping_node.dir/src/node_main.cc.s"
	cd /home/chen/project/fl-slam/build/src/mapping/mapping-node && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chen/project/fl-slam/src/mapping/mapping-node/src/node_main.cc -o CMakeFiles/mapping_node.dir/src/node_main.cc.s

src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o.requires:

.PHONY : src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o.requires

src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o.provides: src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o.requires
	$(MAKE) -f src/mapping/mapping-node/CMakeFiles/mapping_node.dir/build.make src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o.provides.build
.PHONY : src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o.provides

src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o.provides.build: src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o


# Object files for target mapping_node
mapping_node_OBJECTS = \
"CMakeFiles/mapping_node.dir/src/node_main.cc.o"

# External object files for target mapping_node
mapping_node_EXTERNAL_OBJECTS =

/usr/local/bin/mapping_node: src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o
/usr/local/bin/mapping_node: src/mapping/mapping-node/CMakeFiles/mapping_node.dir/build.make
/usr/local/bin/mapping_node: src/mapping/mapping-node/libflslam.a
/usr/local/bin/mapping_node: src/dds_wrapper/libdds_wrapper.so
/usr/local/bin/mapping_node: src/mapping/rtkfusion/librtkfusion.a
/usr/local/bin/mapping_node: src/transformer/libtransformer.so
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_base.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_strings.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_synchronization.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_time.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_leak_check.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_cord.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_cordz_info.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_cord_internal.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_cordz_functions.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_cordz_handle.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_hash.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_city.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_bad_variant_access.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_low_level_hash.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_raw_hash_set.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_bad_optional_access.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_hashtablez_sampler.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_exponential_biased.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_synchronization.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_stacktrace.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_graphcycles_internal.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_time.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_civil_time.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_time_zone.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_symbolize.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_malloc_internal.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_debugging_internal.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_demangle_internal.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_str_format_internal.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_strings.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_strings_internal.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_base.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_spinlock_wait.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_int128.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_throw_delegate.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_raw_logging_internal.a
/usr/local/bin/mapping_node: ../thirdparty/x86-64/abseil-20211102/lib/libabsl_log_severity.a
/usr/local/bin/mapping_node: src/mapping/mapping-node/CMakeFiles/mapping_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chen/project/fl-slam/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /usr/local/bin/mapping_node"
	cd /home/chen/project/fl-slam/build/src/mapping/mapping-node && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mapping_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/mapping/mapping-node/CMakeFiles/mapping_node.dir/build: /usr/local/bin/mapping_node

.PHONY : src/mapping/mapping-node/CMakeFiles/mapping_node.dir/build

src/mapping/mapping-node/CMakeFiles/mapping_node.dir/requires: src/mapping/mapping-node/CMakeFiles/mapping_node.dir/src/node_main.cc.o.requires

.PHONY : src/mapping/mapping-node/CMakeFiles/mapping_node.dir/requires

src/mapping/mapping-node/CMakeFiles/mapping_node.dir/clean:
	cd /home/chen/project/fl-slam/build/src/mapping/mapping-node && $(CMAKE_COMMAND) -P CMakeFiles/mapping_node.dir/cmake_clean.cmake
.PHONY : src/mapping/mapping-node/CMakeFiles/mapping_node.dir/clean

src/mapping/mapping-node/CMakeFiles/mapping_node.dir/depend:
	cd /home/chen/project/fl-slam/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chen/project/fl-slam /home/chen/project/fl-slam/src/mapping/mapping-node /home/chen/project/fl-slam/build /home/chen/project/fl-slam/build/src/mapping/mapping-node /home/chen/project/fl-slam/build/src/mapping/mapping-node/CMakeFiles/mapping_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/mapping/mapping-node/CMakeFiles/mapping_node.dir/depend

