# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\DevTools\JetBrains Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\DevTools\JetBrains Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SimplifiedGenAlgorithm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SimplifiedGenAlgorithm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SimplifiedGenAlgorithm.dir/flags.make

CMakeFiles/SimplifiedGenAlgorithm.dir/main.c.obj: CMakeFiles/SimplifiedGenAlgorithm.dir/flags.make
CMakeFiles/SimplifiedGenAlgorithm.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SimplifiedGenAlgorithm.dir/main.c.obj"
	D:\DevTools\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SimplifiedGenAlgorithm.dir\main.c.obj   -c C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\main.c

CMakeFiles/SimplifiedGenAlgorithm.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimplifiedGenAlgorithm.dir/main.c.i"
	D:\DevTools\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\main.c > CMakeFiles\SimplifiedGenAlgorithm.dir\main.c.i

CMakeFiles/SimplifiedGenAlgorithm.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimplifiedGenAlgorithm.dir/main.c.s"
	D:\DevTools\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\main.c -o CMakeFiles\SimplifiedGenAlgorithm.dir\main.c.s

CMakeFiles/SimplifiedGenAlgorithm.dir/population.c.obj: CMakeFiles/SimplifiedGenAlgorithm.dir/flags.make
CMakeFiles/SimplifiedGenAlgorithm.dir/population.c.obj: ../population.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/SimplifiedGenAlgorithm.dir/population.c.obj"
	D:\DevTools\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SimplifiedGenAlgorithm.dir\population.c.obj   -c C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\population.c

CMakeFiles/SimplifiedGenAlgorithm.dir/population.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimplifiedGenAlgorithm.dir/population.c.i"
	D:\DevTools\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\population.c > CMakeFiles\SimplifiedGenAlgorithm.dir\population.c.i

CMakeFiles/SimplifiedGenAlgorithm.dir/population.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimplifiedGenAlgorithm.dir/population.c.s"
	D:\DevTools\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\population.c -o CMakeFiles\SimplifiedGenAlgorithm.dir\population.c.s

CMakeFiles/SimplifiedGenAlgorithm.dir/individual.c.obj: CMakeFiles/SimplifiedGenAlgorithm.dir/flags.make
CMakeFiles/SimplifiedGenAlgorithm.dir/individual.c.obj: ../individual.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/SimplifiedGenAlgorithm.dir/individual.c.obj"
	D:\DevTools\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SimplifiedGenAlgorithm.dir\individual.c.obj   -c C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\individual.c

CMakeFiles/SimplifiedGenAlgorithm.dir/individual.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimplifiedGenAlgorithm.dir/individual.c.i"
	D:\DevTools\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\individual.c > CMakeFiles\SimplifiedGenAlgorithm.dir\individual.c.i

CMakeFiles/SimplifiedGenAlgorithm.dir/individual.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimplifiedGenAlgorithm.dir/individual.c.s"
	D:\DevTools\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\individual.c -o CMakeFiles\SimplifiedGenAlgorithm.dir\individual.c.s

# Object files for target SimplifiedGenAlgorithm
SimplifiedGenAlgorithm_OBJECTS = \
"CMakeFiles/SimplifiedGenAlgorithm.dir/main.c.obj" \
"CMakeFiles/SimplifiedGenAlgorithm.dir/population.c.obj" \
"CMakeFiles/SimplifiedGenAlgorithm.dir/individual.c.obj"

# External object files for target SimplifiedGenAlgorithm
SimplifiedGenAlgorithm_EXTERNAL_OBJECTS =

SimplifiedGenAlgorithm.exe: CMakeFiles/SimplifiedGenAlgorithm.dir/main.c.obj
SimplifiedGenAlgorithm.exe: CMakeFiles/SimplifiedGenAlgorithm.dir/population.c.obj
SimplifiedGenAlgorithm.exe: CMakeFiles/SimplifiedGenAlgorithm.dir/individual.c.obj
SimplifiedGenAlgorithm.exe: CMakeFiles/SimplifiedGenAlgorithm.dir/build.make
SimplifiedGenAlgorithm.exe: CMakeFiles/SimplifiedGenAlgorithm.dir/linklibs.rsp
SimplifiedGenAlgorithm.exe: CMakeFiles/SimplifiedGenAlgorithm.dir/objects1.rsp
SimplifiedGenAlgorithm.exe: CMakeFiles/SimplifiedGenAlgorithm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable SimplifiedGenAlgorithm.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SimplifiedGenAlgorithm.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SimplifiedGenAlgorithm.dir/build: SimplifiedGenAlgorithm.exe

.PHONY : CMakeFiles/SimplifiedGenAlgorithm.dir/build

CMakeFiles/SimplifiedGenAlgorithm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SimplifiedGenAlgorithm.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SimplifiedGenAlgorithm.dir/clean

CMakeFiles/SimplifiedGenAlgorithm.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\cmake-build-debug C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\cmake-build-debug C:\Users\thoma\Documents\Coding\SimplifiedGenAlgorithm\cmake-build-debug\CMakeFiles\SimplifiedGenAlgorithm.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SimplifiedGenAlgorithm.dir/depend

