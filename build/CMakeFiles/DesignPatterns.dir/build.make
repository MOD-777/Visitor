# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/dawid/.local/bin/cmake

# The command to remove a file.
RM = /home/dawid/.local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dawid/cpp/DesignPatterns

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dawid/cpp/DesignPatterns/build

# Include any dependencies generated for this target.
include CMakeFiles/DesignPatterns.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DesignPatterns.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DesignPatterns.dir/flags.make

CMakeFiles/DesignPatterns.dir/main.cpp.o: CMakeFiles/DesignPatterns.dir/flags.make
CMakeFiles/DesignPatterns.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/cpp/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DesignPatterns.dir/main.cpp.o"
	/usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DesignPatterns.dir/main.cpp.o -c /home/dawid/cpp/DesignPatterns/main.cpp

CMakeFiles/DesignPatterns.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DesignPatterns.dir/main.cpp.i"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/cpp/DesignPatterns/main.cpp > CMakeFiles/DesignPatterns.dir/main.cpp.i

CMakeFiles/DesignPatterns.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DesignPatterns.dir/main.cpp.s"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/cpp/DesignPatterns/main.cpp -o CMakeFiles/DesignPatterns.dir/main.cpp.s

# Object files for target DesignPatterns
DesignPatterns_OBJECTS = \
"CMakeFiles/DesignPatterns.dir/main.cpp.o"

# External object files for target DesignPatterns
DesignPatterns_EXTERNAL_OBJECTS =

DesignPatterns: CMakeFiles/DesignPatterns.dir/main.cpp.o
DesignPatterns: CMakeFiles/DesignPatterns.dir/build.make
DesignPatterns: CMakeFiles/DesignPatterns.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dawid/cpp/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DesignPatterns"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DesignPatterns.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DesignPatterns.dir/build: DesignPatterns

.PHONY : CMakeFiles/DesignPatterns.dir/build

CMakeFiles/DesignPatterns.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DesignPatterns.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DesignPatterns.dir/clean

CMakeFiles/DesignPatterns.dir/depend:
	cd /home/dawid/cpp/DesignPatterns/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dawid/cpp/DesignPatterns /home/dawid/cpp/DesignPatterns /home/dawid/cpp/DesignPatterns/build /home/dawid/cpp/DesignPatterns/build /home/dawid/cpp/DesignPatterns/build/CMakeFiles/DesignPatterns.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DesignPatterns.dir/depend

