cmake_minimum_required(VERSION 3.6)
project(C_demo)

set(CMAKE_CXX_STANDARD 11)

set(example1 example1/main.cpp example1/Sales_data.h)
set(example2 example2/main.cpp)
set(vector vector/main.cpp)
add_executable(example1 ${example1})
add_executable(example2 ${example2})
add_executable(vector ${vector})