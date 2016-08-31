cmake_minimum_required (VERSION 2.6)

option (test "Build all tests." ON)

project (Strings)
set (CMAKE_CXX_FLAGS "-g -Wall -std=c++11")

add_executable (Strings ${PROJECT_SOURCE_DIR}/strings.cpp ${PROJECT_SOURCE_DIR}/word.cpp)
include_directories ("${PROJECT_SOURCE_DIR}")

if (test)
    enable_testing ()

    # compile gtest for ABI
    add_subdirectory (gtest)
    include_directories (${PROJECT_SOURCE_DIR}/gtest/include ${PROJECT_SOURCE_DIR}/gtest)

    #set (GTEST_LIB ${PROJECT_SOURCE_DIR}/local/lib/libgtest.so)
    #set (GTEST_LIB_MAIN ${PROJECT_SOURCE_DIR}/local/lib/libgtest_main.so)
    add_executable (test_Strings ${PROJECT_SOURCE_DIR}/test/test_string.cpp ${PROJECT_SOURCE_DIR}/test/test_word.cpp)
    #target_link_libraries (test_tutorial ${GTEST_LIB} ${GTEST_LIB_MAIN})
    target_link_libraries (test_Strings gtest gtest_main)

    add_test(NAME my-test COMMAND test_strings)
endif()
