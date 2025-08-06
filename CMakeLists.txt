cmake_minimum_required(VERSION 3.25)
project(DSA)

set(CMAKE_CXX_STANDARD 20)

# Set default build type if not specified
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# Optional: Explicitly control output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE})

add_executable(StackLinkedList MCS-DSA/02-Stack/StackLinkedList.cpp)
add_executable(ReverseString MCS-DSA/02-Stack/ReverseString.cpp)
add_executable(bubbleSort Algorithms/bubbleSort.cpp)
add_executable(ReverseStackLinkedList MCS-DSA/02-Stack/ReverseStackLinkedList.cpp)
add_executable(mergeTwoSortedLists NeetCode/03-LinkedLists/C++/mergeTwoSortedLists.cpp)
add_executable(MergeLinkedLists NeetCode/03-LinkedLists/C++/MergeLinkedLists.cpp)
add_executable(BalParen MCS-DSA/02-Stack/BalParen.cpp)
add_executable(DoublyLinkedList NeetCode/03-LinkedLists/C++/DoublyLinkedList.cpp)
add_executable(PrefixPostfix MCS-DSA/02-Stack/PrefixPostfix.cpp)
