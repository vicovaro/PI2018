# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.1.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.1.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\msys64\home\Utilisateur\PI2018\source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\msys64\home\Utilisateur\PI2018\source\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/source.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/source.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/source.dir/flags.make

CMakeFiles/source.dir/main.cpp.obj: CMakeFiles/source.dir/flags.make
CMakeFiles/source.dir/main.cpp.obj: CMakeFiles/source.dir/includes_CXX.rsp
CMakeFiles/source.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\msys64\home\Utilisateur\PI2018\source\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/source.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\source.dir\main.cpp.obj -c C:\msys64\home\Utilisateur\PI2018\source\main.cpp

CMakeFiles/source.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/source.dir/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\msys64\home\Utilisateur\PI2018\source\main.cpp > CMakeFiles\source.dir\main.cpp.i

CMakeFiles/source.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/source.dir/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\msys64\home\Utilisateur\PI2018\source\main.cpp -o CMakeFiles\source.dir\main.cpp.s

CMakeFiles/source.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/source.dir/main.cpp.obj.requires

CMakeFiles/source.dir/main.cpp.obj.provides: CMakeFiles/source.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\source.dir\build.make CMakeFiles/source.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/source.dir/main.cpp.obj.provides

CMakeFiles/source.dir/main.cpp.obj.provides.build: CMakeFiles/source.dir/main.cpp.obj


# Object files for target source
source_OBJECTS = \
"CMakeFiles/source.dir/main.cpp.obj"

# External object files for target source
source_EXTERNAL_OBJECTS =

source.exe: CMakeFiles/source.dir/main.cpp.obj
source.exe: CMakeFiles/source.dir/build.make
source.exe: C:/msys64/mingw64/lib/libSDL2main.a
source.exe: C:/msys64/mingw64/lib/libSDL2main.a
source.exe: C:/msys64/mingw64/lib/libSDL2main.a
source.exe: C:/msys64/mingw64/lib/libSDL2.dll.a
source.exe: C:/msys64/mingw64/lib/libSDL2_ttf.dll.a
source.exe: C:/msys64/mingw64/lib/libSDL2_image.dll.a
source.exe: C:/msys64/mingw64/lib/libSDL2main.a
source.exe: C:/msys64/mingw64/lib/libSDL2.dll.a
source.exe: C:/msys64/mingw64/lib/libSDL2_ttf.dll.a
source.exe: C:/msys64/mingw64/lib/libSDL2_image.dll.a
source.exe: CMakeFiles/source.dir/linklibs.rsp
source.exe: CMakeFiles/source.dir/objects1.rsp
source.exe: CMakeFiles/source.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\msys64\home\Utilisateur\PI2018\source\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable source.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\source.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/source.dir/build: source.exe

.PHONY : CMakeFiles/source.dir/build

CMakeFiles/source.dir/requires: CMakeFiles/source.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/source.dir/requires

CMakeFiles/source.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\source.dir\cmake_clean.cmake
.PHONY : CMakeFiles/source.dir/clean

CMakeFiles/source.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\msys64\home\Utilisateur\PI2018\source C:\msys64\home\Utilisateur\PI2018\source C:\msys64\home\Utilisateur\PI2018\source\cmake-build-debug C:\msys64\home\Utilisateur\PI2018\source\cmake-build-debug C:\msys64\home\Utilisateur\PI2018\source\cmake-build-debug\CMakeFiles\source.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/source.dir/depend

