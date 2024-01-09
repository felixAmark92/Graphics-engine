cmake_minimum_required(VERSION 3.27)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 src/glad.c src/main.cpp
        src/shader.h
        src/shader.cpp)

target_include_directories(untitled1 PRIVATE ${CMAKE_SOURCE_DIR}/include)

target_link_directories(untitled1 PRIVATE ${CMAKE_SOURCE_DIR}/lib)

target_link_libraries(untitled1 PRIVATE glfw3)
