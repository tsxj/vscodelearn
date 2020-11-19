这个工程为C++  编程模板工程
（1）根据实际情况，编写头文件、源文件和main.cpp

（2）根据实际情况修改CMakeLists.txt 中包含的文件和编译参数

这句修改编译参数：
set(cmake_cxx_flags   "${CMAKE_CXX_FLAGS}   -Wall")

这句修改包含文件：
add_executable(my_cmake_exe  main.cpp  src/Gun.cpp src/Soldier.cpp  )

（3） 如果修改正确，则激活main.cpp ,然后，F5就可生成可执行文件