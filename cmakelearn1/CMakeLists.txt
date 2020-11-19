cmake_minimum_required(VERSION 3.0)
project(CMake_study)

set(cmake_cxx_flags  "${cmake_cxx_flags} -g  -o  -Wall")
set(CMAKE_BUILD_TYPE  Debug)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(my_cmake_exe   ${CMAKE_SOURCE_DIR}/main.cpp   src/display.cpp)
