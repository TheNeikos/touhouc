#
# Touhouc main CMake file
#
cmake_minimum_required(VERSION 2.8)

project(touhouc C)

find_library(SDL2 sdl2)

add_subdirectory(src)
