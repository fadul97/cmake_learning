cmake_minimum_required(VERSION 3.2)

project(MyCMakeLearningApp CXX)

add_executable(myExe main.cpp adder.cpp)

target_include_directories(myExe
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)