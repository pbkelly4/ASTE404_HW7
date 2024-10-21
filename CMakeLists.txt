cmake_minimum_required(VERSION 3.29)

# Set the project name
project(untitled)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)

# Find GoogleTest
find_package(GTest REQUIRED)

# Include GTest headers
include_directories(${GTEST_INCLUDE_DIRS})

# Define the main application target
add_executable(untitled main.cpp vec.h)

# Define the unit test target
add_executable(untitled_tests vec_tests.cpp vec.h)

# Link the libraries for the test target
target_link_libraries(untitled_tests GTest::GTest GTest::Main pthread)

# Link libraries for the main executable (if needed)
target_link_libraries(untitled pthread)