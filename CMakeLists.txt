cmake_minimum_required(VERSION 3.2)

project(MyCMakeLearningApp CXX)

# Added source file that contains function to executable target
add_executable(myExe main.cpp adder.cpp)