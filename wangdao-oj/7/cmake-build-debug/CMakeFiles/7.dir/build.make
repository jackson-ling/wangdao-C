# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\develop\develop\development code\Clion\postgraduate\wangdao-oj\7"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\develop\develop\development code\Clion\postgraduate\wangdao-oj\7\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/7.dir/flags.make

CMakeFiles/7.dir/main.c.obj: CMakeFiles/7.dir/flags.make
CMakeFiles/7.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\develop\develop\development code\Clion\postgraduate\wangdao-oj\7\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/7.dir/main.c.obj"
	C:\mingw64(clion)\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\7.dir\main.c.obj -c "D:\develop\develop\development code\Clion\postgraduate\wangdao-oj\7\main.c"

CMakeFiles/7.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/7.dir/main.c.i"
	C:\mingw64(clion)\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\develop\develop\development code\Clion\postgraduate\wangdao-oj\7\main.c" > CMakeFiles\7.dir\main.c.i

CMakeFiles/7.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/7.dir/main.c.s"
	C:\mingw64(clion)\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\develop\develop\development code\Clion\postgraduate\wangdao-oj\7\main.c" -o CMakeFiles\7.dir\main.c.s

# Object files for target 7
7_OBJECTS = \
"CMakeFiles/7.dir/main.c.obj"

# External object files for target 7
7_EXTERNAL_OBJECTS =

7.exe: CMakeFiles/7.dir/main.c.obj
7.exe: CMakeFiles/7.dir/build.make
7.exe: CMakeFiles/7.dir/linklibs.rsp
7.exe: CMakeFiles/7.dir/objects1.rsp
7.exe: CMakeFiles/7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\develop\develop\development code\Clion\postgraduate\wangdao-oj\7\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/7.dir/build: 7.exe

.PHONY : CMakeFiles/7.dir/build

CMakeFiles/7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/7.dir/clean

CMakeFiles/7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\develop\develop\development code\Clion\postgraduate\wangdao-oj\7" "D:\develop\develop\development code\Clion\postgraduate\wangdao-oj\7" "D:\develop\develop\development code\Clion\postgraduate\wangdao-oj\7\cmake-build-debug" "D:\develop\develop\development code\Clion\postgraduate\wangdao-oj\7\cmake-build-debug" "D:\develop\develop\development code\Clion\postgraduate\wangdao-oj\7\cmake-build-debug\CMakeFiles\7.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/7.dir/depend

