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
CMAKE_SOURCE_DIR = "/cygdrive/c/dev/C++ study/Lab_1/Age_user"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/dev/C++ study/Lab_1/Age_user/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Age_user.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Age_user.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Age_user.dir/flags.make

CMakeFiles/Age_user.dir/main.cpp.o: CMakeFiles/Age_user.dir/flags.make
CMakeFiles/Age_user.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/dev/C++ study/Lab_1/Age_user/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Age_user.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Age_user.dir/main.cpp.o -c "/cygdrive/c/dev/C++ study/Lab_1/Age_user/main.cpp"

CMakeFiles/Age_user.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Age_user.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/dev/C++ study/Lab_1/Age_user/main.cpp" > CMakeFiles/Age_user.dir/main.cpp.i

CMakeFiles/Age_user.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Age_user.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/dev/C++ study/Lab_1/Age_user/main.cpp" -o CMakeFiles/Age_user.dir/main.cpp.s

# Object files for target Age_user
Age_user_OBJECTS = \
"CMakeFiles/Age_user.dir/main.cpp.o"

# External object files for target Age_user
Age_user_EXTERNAL_OBJECTS =

Age_user.exe: CMakeFiles/Age_user.dir/main.cpp.o
Age_user.exe: CMakeFiles/Age_user.dir/build.make
Age_user.exe: CMakeFiles/Age_user.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/dev/C++ study/Lab_1/Age_user/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Age_user.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Age_user.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Age_user.dir/build: Age_user.exe

.PHONY : CMakeFiles/Age_user.dir/build

CMakeFiles/Age_user.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Age_user.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Age_user.dir/clean

CMakeFiles/Age_user.dir/depend:
	cd "/cygdrive/c/dev/C++ study/Lab_1/Age_user/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/dev/C++ study/Lab_1/Age_user" "/cygdrive/c/dev/C++ study/Lab_1/Age_user" "/cygdrive/c/dev/C++ study/Lab_1/Age_user/cmake-build-debug" "/cygdrive/c/dev/C++ study/Lab_1/Age_user/cmake-build-debug" "/cygdrive/c/dev/C++ study/Lab_1/Age_user/cmake-build-debug/CMakeFiles/Age_user.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Age_user.dir/depend

