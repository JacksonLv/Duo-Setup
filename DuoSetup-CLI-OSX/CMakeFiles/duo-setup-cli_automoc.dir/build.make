# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.4

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
CMAKE_COMMAND = /Users/Guohui/cmake-3.4.3-Darwin-x86_64/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Users/Guohui/cmake-3.4.3-Darwin-x86_64/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Guohui/DuoSetup

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Guohui/DuoSetup-build

# Utility rule file for duo-setup-cli_automoc.

# Include the progress variables for this target.
include CMakeFiles/duo-setup-cli_automoc.dir/progress.make

CMakeFiles/duo-setup-cli_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/Guohui/DuoSetup-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc for target duo-setup-cli"
	/Users/Guohui/cmake-3.4.3-Darwin-x86_64/CMake.app/Contents/bin/cmake -E cmake_autogen /Users/Guohui/DuoSetup-build/CMakeFiles/duo-setup-cli_automoc.dir/ ""

duo-setup-cli_automoc: CMakeFiles/duo-setup-cli_automoc
duo-setup-cli_automoc: CMakeFiles/duo-setup-cli_automoc.dir/build.make

.PHONY : duo-setup-cli_automoc

# Rule to build all files generated by this target.
CMakeFiles/duo-setup-cli_automoc.dir/build: duo-setup-cli_automoc

.PHONY : CMakeFiles/duo-setup-cli_automoc.dir/build

CMakeFiles/duo-setup-cli_automoc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/duo-setup-cli_automoc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/duo-setup-cli_automoc.dir/clean

CMakeFiles/duo-setup-cli_automoc.dir/depend:
	cd /Users/Guohui/DuoSetup-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Guohui/DuoSetup /Users/Guohui/DuoSetup /Users/Guohui/DuoSetup-build /Users/Guohui/DuoSetup-build /Users/Guohui/DuoSetup-build/CMakeFiles/duo-setup-cli_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/duo-setup-cli_automoc.dir/depend
