
cmake_minimum_required(VERSION 3.0)
project(SOLDIERFIRE)
#set(CMAKE_CXX_FLAGS    "${CMAKE_CXX_FLAGS}   -Wall   -std=c++11 -g  -O2")
set(CMAKE_CXX_FLAGS    "${CMAKE_CXX_FLAGS}   -Wall   -std=c++11 -g ")
set(CMAKE_CXX_COMPILER  g++)
set(CMAKE_BUILD_TYPE Debug)
include_directories(${CMAKE_SOURCE_DIR}/include )   # 包含头文件文件夹 CMAKE_SOURCE_DIR 是 当前CMakeLists.txt 所在目录
add_executable(soilgerfire_cmake_exe  main.cpp  src/Gun.cpp src/Soilger.cpp  )
