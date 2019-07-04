cmake_minimum_required(VERSION 3.13)

include_directories(${gtest_SOURCE_DIR}/include)
set(test0000 0000.cpp 0000_test.cpp 0000.h)
add_executable(0000_test ${test0000})

target_link_libraries(0000_test gtest_main)