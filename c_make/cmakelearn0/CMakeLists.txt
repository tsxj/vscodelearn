
cmake_minimum_required(VERSION 3.0)
project(SOLDIERFIRE)
set(CMAKE_CXX_FLAGS   "${CMAKE_CXX_FLAGS}    -g -Wall")
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_BUILD_TYPE Debug)
include_directories(${CMAKE_SOURCE_DIR}/include )
add_executable(my_cmake_exe  main.cpp  src/Gun.cpp src/Soldier.cpp  )
