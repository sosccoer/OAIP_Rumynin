# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/3_laba.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/3_laba.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/3_laba.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3_laba.dir/flags.make

CMakeFiles/3_laba.dir/main.cpp.o: CMakeFiles/3_laba.dir/flags.make
CMakeFiles/3_laba.dir/main.cpp.o: /Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3\ laba/main.cpp
CMakeFiles/3_laba.dir/main.cpp.o: CMakeFiles/3_laba.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/3_laba.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/3_laba.dir/main.cpp.o -MF CMakeFiles/3_laba.dir/main.cpp.o.d -o CMakeFiles/3_laba.dir/main.cpp.o -c "/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba/main.cpp"

CMakeFiles/3_laba.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_laba.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba/main.cpp" > CMakeFiles/3_laba.dir/main.cpp.i

CMakeFiles/3_laba.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_laba.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba/main.cpp" -o CMakeFiles/3_laba.dir/main.cpp.s

# Object files for target 3_laba
3_laba_OBJECTS = \
"CMakeFiles/3_laba.dir/main.cpp.o"

# External object files for target 3_laba
3_laba_EXTERNAL_OBJECTS =

3_laba: CMakeFiles/3_laba.dir/main.cpp.o
3_laba: CMakeFiles/3_laba.dir/build.make
3_laba: CMakeFiles/3_laba.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 3_laba"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/3_laba.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3_laba.dir/build: 3_laba
.PHONY : CMakeFiles/3_laba.dir/build

CMakeFiles/3_laba.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/3_laba.dir/cmake_clean.cmake
.PHONY : CMakeFiles/3_laba.dir/clean

CMakeFiles/3_laba.dir/depend:
	cd "/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba" "/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba" "/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba/cmake-build-debug" "/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba/cmake-build-debug" "/Users/lelya.rumyningmail.com/Desktop/OAIP_Rumynin/3 laba/cmake-build-debug/CMakeFiles/3_laba.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/3_laba.dir/depend
