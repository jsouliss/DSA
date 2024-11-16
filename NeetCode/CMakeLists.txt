cmake_minimum_required(VERSION 3.29)
project(NeetCode)

set(CMAKE_CXX_STANDARD 14)

# Main
add_executable(NeetCode1 Arrays/LeetCode/rem_dup.cpp)

# Main
add_executable(NeetCode2 Arrays/C++/dynArray.cpp)

# Header implemenation
add_executable(NeetCode3 Arrays/C++/DynamicArray.cpp
        Arrays/C++/IDynamicArray.cpp)
add_executable(NeetCode4 Arrays/LeetCode/concatArray.cpp)
add_executable(NeetCode5  Stack/C++/IStack.cpp Stack/C++/Stack.cpp Stack/C++/Stack.h)
