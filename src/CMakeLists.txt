cmake_minimum_required(VERSION 3.4...3.20 FATAL_ERROR)

set(jet_rendering_headers "rendering_program.h" "window.h")

set(jet_rendering_sources "rendering_program.cc" "window.cc")

find_package(OpenGL REQUIRED)

add_library(jet_rendering STATIC 
    ${jet_rendering_headers} 
    ${jet_rendering_sources})

target_include_directories(jet_rendering PRIVATE 
    ${CMAKE_PROJECT_DIR}/extern/glad/include
    ${CMAKE_PROJECT_DIR}/extern/glfw/include
    ${CMAKE_PROJECT_DIR}/extern/jet_events/include)

target_link_libraries(jet_rendering PRIVATE OpenGL::GL glad glfw jet_events)