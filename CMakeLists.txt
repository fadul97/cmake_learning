cmake_minimum_required(VERSION 3.2)

project(MyCMakeLearningApp CXX)

############################################################
# Create a library
############################################################

# Configured a library and linked it to my executable
add_library(MyCMakeLearningApp
    STATIC
        src/adder.cpp
)

# Add header search path 
target_include_directories(MyCMakeLearningApp
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

############################################################
# Create an executable
############################################################

add_executable(myExe src/main.cpp)

# link the adder target with the MyCMakeLearningApp target
target_link_libraries(myExe
    PRIVATE 
        MyCMakeLearningApp
)
