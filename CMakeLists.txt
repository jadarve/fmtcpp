cmake_minimum_required(VERSION 3.5)
project(fmtcpp)


include_directories(include)

#################################################
# COMPILER SETTINGS
#################################################

message(STATUS "Configuring for Unix system")
set (CMAKE_CXX_FLAGS            "-std=c++14 -O0 -Wall")


#################################################
# CATCH SETTINGS
#################################################
enable_testing()

file(DOWNLOAD
     "https://github.com/catchorg/Catch2/releases/download/v2.0.1/catch.hpp"
     "${CMAKE_BINARY_DIR}/catch/catch.hpp")

set(CATCH_INCLUDE_DIR ${CMAKE_BINARY_DIR})
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CATCH_INCLUDE_DIR})


#################################################
# ADD TEST FOLDER
#################################################
add_subdirectory(test)