# CMake minimum version number requirements
cmake_minimum_required(VERSION 3.10)

# Project information
project(broken-key)

# Find all source files in the curent directory
aux_source_directory(. DIR_SRCS)

# Add AST subdirectory
add_subdirectory(AST)

# Specify build target
add_executable(broke broken-key.cpp)

# Add link library
target_link_libraries(broke AST)