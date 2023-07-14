cmake_minimum_required(VERSION 3.4...3.20 FATAL_ERROR)

project(JET_rendering)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(JET_rendering_headers "rendering_program.h")

set(JET_rendering_sources "rendering_program.cc")

add_library(JET_rendering STATIC 
    ${JET_rendering_headers} 
    ${JET_rendering_sources})