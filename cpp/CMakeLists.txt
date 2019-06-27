cmake_minimum_required(VERSION 3.13)

project(MyLeetCode)
set(CMAKE_CXX_STANDARD 14)


set(TESTING_SOURCE_FILES
        )
add_executable(Testing ${TESTING_SOURCE_FILES})


add_executable(helloworld helloworld.cpp)
