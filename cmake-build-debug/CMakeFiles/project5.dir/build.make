# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\alexe\CLionProjects\project5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\alexe\CLionProjects\project5\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\project5.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\project5.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\project5.dir\flags.make

CMakeFiles\project5.dir\proj5.cpp.obj: CMakeFiles\project5.dir\flags.make
CMakeFiles\project5.dir\proj5.cpp.obj: ..\proj5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alexe\CLionProjects\project5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project5.dir/proj5.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project5.dir\proj5.cpp.obj /FdCMakeFiles\project5.dir\ /FS -c C:\Users\alexe\CLionProjects\project5\proj5.cpp
<<

CMakeFiles\project5.dir\proj5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project5.dir/proj5.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe > CMakeFiles\project5.dir\proj5.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alexe\CLionProjects\project5\proj5.cpp
<<

CMakeFiles\project5.dir\proj5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project5.dir/proj5.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project5.dir\proj5.cpp.s /c C:\Users\alexe\CLionProjects\project5\proj5.cpp
<<

CMakeFiles\project5.dir\Runner.cpp.obj: CMakeFiles\project5.dir\flags.make
CMakeFiles\project5.dir\Runner.cpp.obj: ..\Runner.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alexe\CLionProjects\project5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project5.dir/Runner.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project5.dir\Runner.cpp.obj /FdCMakeFiles\project5.dir\ /FS -c C:\Users\alexe\CLionProjects\project5\Runner.cpp
<<

CMakeFiles\project5.dir\Runner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project5.dir/Runner.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe > CMakeFiles\project5.dir\Runner.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alexe\CLionProjects\project5\Runner.cpp
<<

CMakeFiles\project5.dir\Runner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project5.dir/Runner.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project5.dir\Runner.cpp.s /c C:\Users\alexe\CLionProjects\project5\Runner.cpp
<<

CMakeFiles\project5.dir\Vector.cpp.obj: CMakeFiles\project5.dir\flags.make
CMakeFiles\project5.dir\Vector.cpp.obj: ..\Vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alexe\CLionProjects\project5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project5.dir/Vector.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project5.dir\Vector.cpp.obj /FdCMakeFiles\project5.dir\ /FS -c C:\Users\alexe\CLionProjects\project5\Vector.cpp
<<

CMakeFiles\project5.dir\Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project5.dir/Vector.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe > CMakeFiles\project5.dir\Vector.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alexe\CLionProjects\project5\Vector.cpp
<<

CMakeFiles\project5.dir\Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project5.dir/Vector.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project5.dir\Vector.cpp.s /c C:\Users\alexe\CLionProjects\project5\Vector.cpp
<<

# Object files for target project5
project5_OBJECTS = \
"CMakeFiles\project5.dir\proj5.cpp.obj" \
"CMakeFiles\project5.dir\Runner.cpp.obj" \
"CMakeFiles\project5.dir\Vector.cpp.obj"

# External object files for target project5
project5_EXTERNAL_OBJECTS =

project5.exe: CMakeFiles\project5.dir\proj5.cpp.obj
project5.exe: CMakeFiles\project5.dir\Runner.cpp.obj
project5.exe: CMakeFiles\project5.dir\Vector.cpp.obj
project5.exe: CMakeFiles\project5.dir\build.make
project5.exe: CMakeFiles\project5.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\alexe\CLionProjects\project5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable project5.exe"
	"C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\project5.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\project5.dir\objects1.rsp @<<
 /out:project5.exe /implib:project5.lib /pdb:C:\Users\alexe\CLionProjects\project5\cmake-build-debug\project5.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\project5.dir\build: project5.exe

.PHONY : CMakeFiles\project5.dir\build

CMakeFiles\project5.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\project5.dir\cmake_clean.cmake
.PHONY : CMakeFiles\project5.dir\clean

CMakeFiles\project5.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\alexe\CLionProjects\project5 C:\Users\alexe\CLionProjects\project5 C:\Users\alexe\CLionProjects\project5\cmake-build-debug C:\Users\alexe\CLionProjects\project5\cmake-build-debug C:\Users\alexe\CLionProjects\project5\cmake-build-debug\CMakeFiles\project5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\project5.dir\depend
