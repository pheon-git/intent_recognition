cmake_minimum_required(VERSION 3.10)
project(intent_recognition)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(include)

add_subdirectory(src)

add_subdirectory(test)
add_subdirectory(lib/googletest)
