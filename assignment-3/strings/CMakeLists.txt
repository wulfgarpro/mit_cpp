cmake_minimum_required (VERSION 2.6)

project (Strings)
set (CMAKE_CXX_FLAGS "-g -Wall -std=c++11")

add_executable (Strings ${PROJECT_SOURCE_DIR}/strings.cpp ${PROJECT_SOURCE_DIR}/word.cpp)
include_directories ("${PROJECT_SOURCE_DIR}")

option (test "Build all tests." ON)
if (test)
    enable_testing ()

    # compile gtest for ABI
    add_subdirectory (gtest)
    include_directories (${PROJECT_SOURCE_DIR}/gtest/include ${PROJECT_SOURCE_DIR}/gtest)

    add_executable (test_Strings ${PROJECT_SOURCE_DIR}/test/test_string.cpp ${PROJECT_SOURCE_DIR}/test/test_word.cpp ${PROJECT_SOURCE_DIR}/word.cpp)
    target_link_libraries (test_Strings gtest gtest_main)

    add_test(NAME my-test COMMAND test_Strings)
endif()
