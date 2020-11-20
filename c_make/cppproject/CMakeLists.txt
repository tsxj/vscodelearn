
cmake_minimum_required(VERSION 3.0)
project(CPPPROJECT)
set(CMAKE_CXX_FLAGS   "${CMAKE_CXX_FLAGS}   -Wall  -g  -O2")
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_COMPILER  g++)
include_directories(${CMAKE_SOURCE_DIR}/include )
add_executable(cppproject_cmake_exe  main.cpp  src/swap.cpp   )
