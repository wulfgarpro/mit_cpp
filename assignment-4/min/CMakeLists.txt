cmake_minimum_required (VERSION 2.6)

project (Min)
set (CMAKE_CXX_FLAGS "-g -Wall --std=c++11")

add_executable (Min_2_1 ${PROJECT_SOURCE_DIR}/min_2_1.cpp)
add_executable (Min_2_2 ${PROJECT_SOURCE_DIR}/min_2_2.cpp)
