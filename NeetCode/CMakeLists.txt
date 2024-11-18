cmake_minimum_required(VERSION 3.29)
project(NeetCode)

set(CMAKE_CXX_STANDARD 14)

# Main
add_executable(NeetCode1 Arrays/LeetCode/rem_dup.cpp)

# Main
add_executable(NeetCode2 Arrays/C++/IDynamicArray.cpp Arrays/C++/dynArray.cpp)

add_executable(NeetCode4 Arrays/LeetCode/concatArray.cpp)

add_executable(NeetCode5 Stack/C++/IStack.cpp Stack/C++/Stack.h
        Stack/C++/stackMain.cpp)