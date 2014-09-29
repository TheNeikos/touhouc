#
# Touhouc main CMake file
#
cmake_minimum_required(VERSION 2.8)

project(touhouc C)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/Modules)

find_package(SDL2 REQUIRED)
find_package(GLEW REQUIRED)

add_subdirectory(src)
