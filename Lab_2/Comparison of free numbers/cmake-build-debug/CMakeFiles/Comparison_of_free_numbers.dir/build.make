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
CMAKE_SOURCE_DIR = "/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Comparison_of_free_numbers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Comparison_of_free_numbers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Comparison_of_free_numbers.dir/flags.make

CMakeFiles/Comparison_of_free_numbers.dir/main.cpp.o: CMakeFiles/Comparison_of_free_numbers.dir/flags.make
CMakeFiles/Comparison_of_free_numbers.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Comparison_of_free_numbers.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Comparison_of_free_numbers.dir/main.cpp.o -c "/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers/main.cpp"

CMakeFiles/Comparison_of_free_numbers.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Comparison_of_free_numbers.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers/main.cpp" > CMakeFiles/Comparison_of_free_numbers.dir/main.cpp.i

CMakeFiles/Comparison_of_free_numbers.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Comparison_of_free_numbers.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers/main.cpp" -o CMakeFiles/Comparison_of_free_numbers.dir/main.cpp.s

# Object files for target Comparison_of_free_numbers
Comparison_of_free_numbers_OBJECTS = \
"CMakeFiles/Comparison_of_free_numbers.dir/main.cpp.o"

# External object files for target Comparison_of_free_numbers
Comparison_of_free_numbers_EXTERNAL_OBJECTS =

Comparison_of_free_numbers.exe: CMakeFiles/Comparison_of_free_numbers.dir/main.cpp.o
Comparison_of_free_numbers.exe: CMakeFiles/Comparison_of_free_numbers.dir/build.make
Comparison_of_free_numbers.exe: CMakeFiles/Comparison_of_free_numbers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Comparison_of_free_numbers.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Comparison_of_free_numbers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Comparison_of_free_numbers.dir/build: Comparison_of_free_numbers.exe

.PHONY : CMakeFiles/Comparison_of_free_numbers.dir/build

CMakeFiles/Comparison_of_free_numbers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Comparison_of_free_numbers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Comparison_of_free_numbers.dir/clean

CMakeFiles/Comparison_of_free_numbers.dir/depend:
	cd "/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers" "/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers" "/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers/cmake-build-debug" "/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers/cmake-build-debug" "/cygdrive/c/dev/C++ study/Lab_2/Comparison of free numbers/cmake-build-debug/CMakeFiles/Comparison_of_free_numbers.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Comparison_of_free_numbers.dir/depend
