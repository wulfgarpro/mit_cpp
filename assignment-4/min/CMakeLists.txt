cmake_minimum_required (VERSION 2.6)

project (Min)
set (CMAKE_CXX_FLAGS "-g -Wall")

add_executable (Min ${PROJECT_SOURCE_DIR}/min.cpp)
