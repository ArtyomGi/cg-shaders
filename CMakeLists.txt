cmake_minimum_required(VERSION 3.1.0)

project(shaders_program)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets OpenGL REQUIRED)

add_executable(shaders_program
    main.cpp
    RayStructs.h
    ShaderWidget.cpp
    ShaderWidget.h
    raytracing.frag
    raytracing.vert
)

target_link_libraries(shaders_program Qt5::Widgets Qt5::OpenGL)