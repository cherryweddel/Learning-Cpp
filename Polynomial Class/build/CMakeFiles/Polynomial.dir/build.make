# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = "/home/cherry/桌面/Study/Program Lesson/Polynomial Class"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/cherry/桌面/Study/Program Lesson/Polynomial Class/build"

# Include any dependencies generated for this target.
include CMakeFiles/Polynomial.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Polynomial.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Polynomial.dir/flags.make

CMakeFiles/Polynomial.dir/main.cpp.o: CMakeFiles/Polynomial.dir/flags.make
CMakeFiles/Polynomial.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/cherry/桌面/Study/Program Lesson/Polynomial Class/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Polynomial.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Polynomial.dir/main.cpp.o -c "/home/cherry/桌面/Study/Program Lesson/Polynomial Class/main.cpp"

CMakeFiles/Polynomial.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Polynomial.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/cherry/桌面/Study/Program Lesson/Polynomial Class/main.cpp" > CMakeFiles/Polynomial.dir/main.cpp.i

CMakeFiles/Polynomial.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Polynomial.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/cherry/桌面/Study/Program Lesson/Polynomial Class/main.cpp" -o CMakeFiles/Polynomial.dir/main.cpp.s

CMakeFiles/Polynomial.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Polynomial.dir/main.cpp.o.requires

CMakeFiles/Polynomial.dir/main.cpp.o.provides: CMakeFiles/Polynomial.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Polynomial.dir/build.make CMakeFiles/Polynomial.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Polynomial.dir/main.cpp.o.provides

CMakeFiles/Polynomial.dir/main.cpp.o.provides.build: CMakeFiles/Polynomial.dir/main.cpp.o


CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o: CMakeFiles/Polynomial.dir/flags.make
CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o: ../mainPolynomial.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/cherry/桌面/Study/Program Lesson/Polynomial Class/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o -c "/home/cherry/桌面/Study/Program Lesson/Polynomial Class/mainPolynomial.cpp"

CMakeFiles/Polynomial.dir/mainPolynomial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Polynomial.dir/mainPolynomial.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/cherry/桌面/Study/Program Lesson/Polynomial Class/mainPolynomial.cpp" > CMakeFiles/Polynomial.dir/mainPolynomial.cpp.i

CMakeFiles/Polynomial.dir/mainPolynomial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Polynomial.dir/mainPolynomial.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/cherry/桌面/Study/Program Lesson/Polynomial Class/mainPolynomial.cpp" -o CMakeFiles/Polynomial.dir/mainPolynomial.cpp.s

CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o.requires:

.PHONY : CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o.requires

CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o.provides: CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o.requires
	$(MAKE) -f CMakeFiles/Polynomial.dir/build.make CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o.provides.build
.PHONY : CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o.provides

CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o.provides.build: CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o


# Object files for target Polynomial
Polynomial_OBJECTS = \
"CMakeFiles/Polynomial.dir/main.cpp.o" \
"CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o"

# External object files for target Polynomial
Polynomial_EXTERNAL_OBJECTS =

Polynomial: CMakeFiles/Polynomial.dir/main.cpp.o
Polynomial: CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o
Polynomial: CMakeFiles/Polynomial.dir/build.make
Polynomial: CMakeFiles/Polynomial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/cherry/桌面/Study/Program Lesson/Polynomial Class/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Polynomial"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Polynomial.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Polynomial.dir/build: Polynomial

.PHONY : CMakeFiles/Polynomial.dir/build

CMakeFiles/Polynomial.dir/requires: CMakeFiles/Polynomial.dir/main.cpp.o.requires
CMakeFiles/Polynomial.dir/requires: CMakeFiles/Polynomial.dir/mainPolynomial.cpp.o.requires

.PHONY : CMakeFiles/Polynomial.dir/requires

CMakeFiles/Polynomial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Polynomial.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Polynomial.dir/clean

CMakeFiles/Polynomial.dir/depend:
	cd "/home/cherry/桌面/Study/Program Lesson/Polynomial Class/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/cherry/桌面/Study/Program Lesson/Polynomial Class" "/home/cherry/桌面/Study/Program Lesson/Polynomial Class" "/home/cherry/桌面/Study/Program Lesson/Polynomial Class/build" "/home/cherry/桌面/Study/Program Lesson/Polynomial Class/build" "/home/cherry/桌面/Study/Program Lesson/Polynomial Class/build/CMakeFiles/Polynomial.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Polynomial.dir/depend
