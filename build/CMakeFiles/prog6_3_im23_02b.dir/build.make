# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/build

# Include any dependencies generated for this target.
include CMakeFiles/prog6_3_im23_02b.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/prog6_3_im23_02b.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/prog6_3_im23_02b.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prog6_3_im23_02b.dir/flags.make

CMakeFiles/prog6_3_im23_02b.dir/test.cpp.o: CMakeFiles/prog6_3_im23_02b.dir/flags.make
CMakeFiles/prog6_3_im23_02b.dir/test.cpp.o: /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/test.cpp
CMakeFiles/prog6_3_im23_02b.dir/test.cpp.o: CMakeFiles/prog6_3_im23_02b.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prog6_3_im23_02b.dir/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog6_3_im23_02b.dir/test.cpp.o -MF CMakeFiles/prog6_3_im23_02b.dir/test.cpp.o.d -o CMakeFiles/prog6_3_im23_02b.dir/test.cpp.o -c /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/test.cpp

CMakeFiles/prog6_3_im23_02b.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog6_3_im23_02b.dir/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/test.cpp > CMakeFiles/prog6_3_im23_02b.dir/test.cpp.i

CMakeFiles/prog6_3_im23_02b.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog6_3_im23_02b.dir/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/test.cpp -o CMakeFiles/prog6_3_im23_02b.dir/test.cpp.s

CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.o: CMakeFiles/prog6_3_im23_02b.dir/flags.make
CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.o: /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/include/polynomiac_basic.cpp
CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.o: CMakeFiles/prog6_3_im23_02b.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.o -MF CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.o.d -o CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.o -c /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/include/polynomiac_basic.cpp

CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/include/polynomiac_basic.cpp > CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.i

CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/include/polynomiac_basic.cpp -o CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.s

# Object files for target prog6_3_im23_02b
prog6_3_im23_02b_OBJECTS = \
"CMakeFiles/prog6_3_im23_02b.dir/test.cpp.o" \
"CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.o"

# External object files for target prog6_3_im23_02b
prog6_3_im23_02b_EXTERNAL_OBJECTS =

prog6_3_im23_02b: CMakeFiles/prog6_3_im23_02b.dir/test.cpp.o
prog6_3_im23_02b: CMakeFiles/prog6_3_im23_02b.dir/include/polynomiac_basic.cpp.o
prog6_3_im23_02b: CMakeFiles/prog6_3_im23_02b.dir/build.make
prog6_3_im23_02b: CMakeFiles/prog6_3_im23_02b.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable prog6_3_im23_02b"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prog6_3_im23_02b.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prog6_3_im23_02b.dir/build: prog6_3_im23_02b
.PHONY : CMakeFiles/prog6_3_im23_02b.dir/build

CMakeFiles/prog6_3_im23_02b.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prog6_3_im23_02b.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prog6_3_im23_02b.dir/clean

CMakeFiles/prog6_3_im23_02b.dir/depend:
	cd /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/build /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/build /home/fer/Documents/prog6_for_3_IM23_02B_IMIFI/build/CMakeFiles/prog6_3_im23_02b.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prog6_3_im23_02b.dir/depend

