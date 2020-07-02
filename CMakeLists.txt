cmake_minimum_required(VERSION 3.13)
project(filler C)

# set assigns an environment variable.
set(CMAKE_C_STANDARD 99)

# file represents file manipulation, and stores all the matching
# globbing-expressions in the variable SOURCES
file(GLOB SOURCES src/*.c)

# Adds an executable target called <name> to be built from the source files
# listedin the command invocation. The <name> corresponds to the logical target
# name and must be globally unique within a project. The actual file name of the
# executable built is constructed based on conventions of the native platform
# (such as <name>.exe or just <name>.
add_executable(filler ${SOURCES})

target_include_directories(filler PRIVATE ${CMAKE_SOURCE_DIR}/libft/includes)

target_link_libraries(filler ${CMAKE_SOURCE_DIR}/libft/libft.a)