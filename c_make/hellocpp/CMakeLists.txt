

cmake_minimum_required(VERSION 3.0)
project(HELLO)
set(CMAKE_CXX_COMPILER  g++)   #将编译 器设置为交叉编译器
set(CMAKE_CXX_FLAGS   "${CMAKE_CXX_FLAGS}   -Wall  -g  -O2")  # 设置编译参数
#set(CMAKE_BUILD_TYPE Debug)
#include_directories(${CMAKE_SOURCE_DIR}/include )
add_executable(helloworld_cmake_g++_exe  main.cpp   )    
