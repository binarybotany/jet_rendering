cmake_minimum_required(VERSION 3.4...3.20 FATAL_ERROR)

project(jet_rendering)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(extern/glad)
add_subdirectory(extern/glfw)
add_subdirectory(extern/jet_events)

add_subdirectory(src bin)