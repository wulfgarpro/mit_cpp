cmake_minimum_required (VERSION 2.6)

project (strings)
set (CMAKE_CXX_FLAGS "-g -Wall -std=c++11")

add_executable (strings ${PROJECT_SOURCE_DIR}/app.cpp ${PROJECT_SOURCE_DIR}/word.cpp)
include_directories ("${PROJECT_SOURCE_DIR}")

option (test "Build all tests." ON)
if (test)
    enable_testing ()

    # compile gtest for ABI
    add_subdirectory (gtest)
    include_directories (${PROJECT_SOURCE_DIR}/gtest/googletest/include ${PROJECT_SOURCE_DIR}/gtest/google/test ${PROJECT_SOURCE_DIR}/gtest/googlemock/include ${PROJECT_SOURCE_DIR}/gtest/googlemock)

    add_executable (strings_test ${PROJECT_SOURCE_DIR}/test/strings_test.cpp ${PROJECT_SOURCE_DIR}/test/word_test.cpp ${PROJECT_SOURCE_DIR}/word.cpp)
    target_link_libraries (strings_test gtest gmock gmock_main) #gmock_main calls init for gtest

    add_test(NAME my-test COMMAND strings_test)
endif()
