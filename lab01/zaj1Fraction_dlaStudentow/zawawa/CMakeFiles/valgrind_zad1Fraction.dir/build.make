# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/agh/Nextcloud/STUDENCI/c++2022/zaj1Fraction_dlaStudentow

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agh/Nextcloud/STUDENCI/c++2022/zaj1Fraction_dlaStudentow/zawawa

# Utility rule file for valgrind_zad1Fraction.

# Include any custom commands dependencies for this target.
include CMakeFiles/valgrind_zad1Fraction.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/valgrind_zad1Fraction.dir/progress.make

CMakeFiles/valgrind_zad1Fraction: bin/zad1Fraction
	/usr/bin/valgrind --leak-check=full /home/agh/Nextcloud/STUDENCI/c++2022/zaj1Fraction_dlaStudentow/zawawa/bin/zad1Fraction

valgrind_zad1Fraction: CMakeFiles/valgrind_zad1Fraction
valgrind_zad1Fraction: CMakeFiles/valgrind_zad1Fraction.dir/build.make
.PHONY : valgrind_zad1Fraction

# Rule to build all files generated by this target.
CMakeFiles/valgrind_zad1Fraction.dir/build: valgrind_zad1Fraction
.PHONY : CMakeFiles/valgrind_zad1Fraction.dir/build

CMakeFiles/valgrind_zad1Fraction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/valgrind_zad1Fraction.dir/cmake_clean.cmake
.PHONY : CMakeFiles/valgrind_zad1Fraction.dir/clean

CMakeFiles/valgrind_zad1Fraction.dir/depend:
	cd /home/agh/Nextcloud/STUDENCI/c++2022/zaj1Fraction_dlaStudentow/zawawa && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agh/Nextcloud/STUDENCI/c++2022/zaj1Fraction_dlaStudentow /home/agh/Nextcloud/STUDENCI/c++2022/zaj1Fraction_dlaStudentow /home/agh/Nextcloud/STUDENCI/c++2022/zaj1Fraction_dlaStudentow/zawawa /home/agh/Nextcloud/STUDENCI/c++2022/zaj1Fraction_dlaStudentow/zawawa /home/agh/Nextcloud/STUDENCI/c++2022/zaj1Fraction_dlaStudentow/zawawa/CMakeFiles/valgrind_zad1Fraction.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/valgrind_zad1Fraction.dir/depend

