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
CMAKE_SOURCE_DIR = /home/ylj/jam/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ylj/jam/test/build

# Include any dependencies generated for this target.
include CMakeFiles/unittest_foo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/unittest_foo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/unittest_foo.dir/flags.make

tests.cpp: ../test/MyTestSuite.h
tests.cpp: ../src/tl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ylj/jam/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating tests.cpp"
	/usr/bin/python /usr/bin/cxxtestgen --error-printer -o /home/ylj/jam/test/build/tests.cpp /home/ylj/jam/test/test/MyTestSuite.h /home/ylj/jam/test/src/tl.cpp

CMakeFiles/unittest_foo.dir/tests.cpp.o: CMakeFiles/unittest_foo.dir/flags.make
CMakeFiles/unittest_foo.dir/tests.cpp.o: tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ylj/jam/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/unittest_foo.dir/tests.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittest_foo.dir/tests.cpp.o -c /home/ylj/jam/test/build/tests.cpp

CMakeFiles/unittest_foo.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittest_foo.dir/tests.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ylj/jam/test/build/tests.cpp > CMakeFiles/unittest_foo.dir/tests.cpp.i

CMakeFiles/unittest_foo.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittest_foo.dir/tests.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ylj/jam/test/build/tests.cpp -o CMakeFiles/unittest_foo.dir/tests.cpp.s

CMakeFiles/unittest_foo.dir/tests.cpp.o.requires:

.PHONY : CMakeFiles/unittest_foo.dir/tests.cpp.o.requires

CMakeFiles/unittest_foo.dir/tests.cpp.o.provides: CMakeFiles/unittest_foo.dir/tests.cpp.o.requires
	$(MAKE) -f CMakeFiles/unittest_foo.dir/build.make CMakeFiles/unittest_foo.dir/tests.cpp.o.provides.build
.PHONY : CMakeFiles/unittest_foo.dir/tests.cpp.o.provides

CMakeFiles/unittest_foo.dir/tests.cpp.o.provides.build: CMakeFiles/unittest_foo.dir/tests.cpp.o


CMakeFiles/unittest_foo.dir/src/tl.cpp.o: CMakeFiles/unittest_foo.dir/flags.make
CMakeFiles/unittest_foo.dir/src/tl.cpp.o: ../src/tl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ylj/jam/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/unittest_foo.dir/src/tl.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittest_foo.dir/src/tl.cpp.o -c /home/ylj/jam/test/src/tl.cpp

CMakeFiles/unittest_foo.dir/src/tl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittest_foo.dir/src/tl.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ylj/jam/test/src/tl.cpp > CMakeFiles/unittest_foo.dir/src/tl.cpp.i

CMakeFiles/unittest_foo.dir/src/tl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittest_foo.dir/src/tl.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ylj/jam/test/src/tl.cpp -o CMakeFiles/unittest_foo.dir/src/tl.cpp.s

CMakeFiles/unittest_foo.dir/src/tl.cpp.o.requires:

.PHONY : CMakeFiles/unittest_foo.dir/src/tl.cpp.o.requires

CMakeFiles/unittest_foo.dir/src/tl.cpp.o.provides: CMakeFiles/unittest_foo.dir/src/tl.cpp.o.requires
	$(MAKE) -f CMakeFiles/unittest_foo.dir/build.make CMakeFiles/unittest_foo.dir/src/tl.cpp.o.provides.build
.PHONY : CMakeFiles/unittest_foo.dir/src/tl.cpp.o.provides

CMakeFiles/unittest_foo.dir/src/tl.cpp.o.provides.build: CMakeFiles/unittest_foo.dir/src/tl.cpp.o


# Object files for target unittest_foo
unittest_foo_OBJECTS = \
"CMakeFiles/unittest_foo.dir/tests.cpp.o" \
"CMakeFiles/unittest_foo.dir/src/tl.cpp.o"

# External object files for target unittest_foo
unittest_foo_EXTERNAL_OBJECTS =

../bin/unittest_foo: CMakeFiles/unittest_foo.dir/tests.cpp.o
../bin/unittest_foo: CMakeFiles/unittest_foo.dir/src/tl.cpp.o
../bin/unittest_foo: CMakeFiles/unittest_foo.dir/build.make
../bin/unittest_foo: CMakeFiles/unittest_foo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ylj/jam/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../bin/unittest_foo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unittest_foo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/unittest_foo.dir/build: ../bin/unittest_foo

.PHONY : CMakeFiles/unittest_foo.dir/build

CMakeFiles/unittest_foo.dir/requires: CMakeFiles/unittest_foo.dir/tests.cpp.o.requires
CMakeFiles/unittest_foo.dir/requires: CMakeFiles/unittest_foo.dir/src/tl.cpp.o.requires

.PHONY : CMakeFiles/unittest_foo.dir/requires

CMakeFiles/unittest_foo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/unittest_foo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/unittest_foo.dir/clean

CMakeFiles/unittest_foo.dir/depend: tests.cpp
	cd /home/ylj/jam/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ylj/jam/test /home/ylj/jam/test /home/ylj/jam/test/build /home/ylj/jam/test/build /home/ylj/jam/test/build/CMakeFiles/unittest_foo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/unittest_foo.dir/depend
