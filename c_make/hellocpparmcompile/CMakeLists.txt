

cmake_minimum_required(VERSION 3.0)
project(HELLO)
set(CMAKE_C_COMPILER  arm-linux-gcc)   #将编译 器设置为交叉编译器 
set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS}   -Wall  -g  -O2")  # 设置编译参数
#set(CMAKE_BUILD_TYPE Debug)
#include_directories(${CMAKE_SOURCE_DIR}/include )
add_executable(helloworld_cmake_arm_exe  main.c )    
