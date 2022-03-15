cmake_minimum_required(VERSION 3.2)

project(MyCMakeLearningApp CXX)

add_executable(myExe main.cpp)

# Configured a library and linked it to my executable
add_library(adder
    adder.h
    adder.cpp
)

target_link_libraries(myExe
    PRIVATE
        adder
)