cmake_minimum_required(VERSION 3.29)
project(NeetCode)

set(CMAKE_CXX_STANDARD 14)

# Main
add_executable(NeetCode1 00-StaticArrays/LeetCode/rem_dup.cpp)

# Main
add_executable(NeetCode2 00-StaticArrays/C++/IDynamicArray.cpp 00-StaticArrays/C++/dynArray.cpp)

add_executable(NeetCode4 00-StaticArrays/LeetCode/concatArray.cpp)

add_executable(NeetCode5 02-Stack/C++/IStack.cpp 02-Stack/C++/Stack.h
        02-Stack/C++/stackMain.cpp)
add_executable(NeetProb1 02-Stack/StackProb/ValidPar.cpp)
add_executable(NeetProbSol 02-Stack/StackProb/ValidParSol.cpp)
add_executable(MinStack 02-Stack/StackProb/NeetProb2.cpp
        03-LinkedLists/C++/SinglyLinkedList.cpp)
add_executable(SinglyLinkedList 03-LinkedLists/C++/SinglyLinkedList.cpp)
