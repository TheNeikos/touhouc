#
# Touhouc main CMake file
#
cmake_minimum_required(VERSION 2.8)

set(CMAKE_C_COMPILER "/usr/bin/clang")
project(touhouc C)

find_library(SDL2 sdl2)

add_subdirectory(src)
