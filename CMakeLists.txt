cmake_minimum_required(VERSION 3.3)
project(cpp_singleton_example)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp singleton.cpp singleton.h)
add_executable(cpp_singleton_example ${SOURCE_FILES})