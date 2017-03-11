cmake_minimum_required(VERSION 2.8.4)
project(fraction_lib)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        fraction/fraction.cpp fraction/fraction.h main.cpp)

add_executable(fraction_test ${SOURCE_FILES} fraction/fraction.h main.cpp)