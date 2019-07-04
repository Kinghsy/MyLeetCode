cmake_minimum_required(VERSION 3.13)

include_directories(${gtest_SOURCE_DIR}/include)
set(test0001 0001.cpp 0001_test.cpp 0001.h)
add_executable(0001_test ${test0001})

target_link_libraries(0001_test gtest_main)