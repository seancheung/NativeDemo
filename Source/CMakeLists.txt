cmake_minimum_required(VERSION 3.5)
project(Source)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES demo.c demo.h)
add_executable(Source ${SOURCE_FILES})