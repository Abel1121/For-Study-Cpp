# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /cygdrive/c/Users/Mark/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Mark/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/flags.make

CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/main.cpp.o: CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/flags.make
CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/main.cpp.o -c "/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum/main.cpp"

CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum/main.cpp" > CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/main.cpp.i

CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum/main.cpp" -o CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/main.cpp.s

# Object files for target sum_of_5_number_bigger_then_max_sum
sum_of_5_number_bigger_then_max_sum_OBJECTS = \
"CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/main.cpp.o"

# External object files for target sum_of_5_number_bigger_then_max_sum
sum_of_5_number_bigger_then_max_sum_EXTERNAL_OBJECTS =

sum_of_5_number_bigger_then_max_sum.exe: CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/main.cpp.o
sum_of_5_number_bigger_then_max_sum.exe: CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/build.make
sum_of_5_number_bigger_then_max_sum.exe: CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sum_of_5_number_bigger_then_max_sum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/build: sum_of_5_number_bigger_then_max_sum.exe

.PHONY : CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/build

CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/clean

CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/depend:
	cd "/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum" "/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum" "/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum/cmake-build-debug" "/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum/cmake-build-debug" "/cygdrive/c/dev/C++ study/Lab_2/sum of 5 number bigger then max sum/cmake-build-debug/CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/sum_of_5_number_bigger_then_max_sum.dir/depend
