cmake_minimum_required(VERSION 3.31)
project(cmake_mcs-dsa)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG   ${CMAKE_SOURCE_DIR}/cmake-build-debug/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/cmale-build-release/)

add_executable(LinkedListv1 00-SinglyLinkedList/LinkedListv1.cpp)
add_executable(LinkedListv2 00-SinglyLinkedList/LinkedListv2.cpp)
add_executable(LinkedListv3 00-SinglyLinkedList/LinkedListv3.cpp)
add_executable(RLinkedList 00-SinglyLinkedList/RLinkedList.cpp)
add_executable(RevPrintLinkedList 00-SinglyLinkedList/RevPrintLinkedList.cpp)
add_executable(RevRecLinkedList 00-SinglyLinkedList/RevRecLinkedList.cpp)
add_executable(DoublyLinkedList 01-DoublyLinkedList/DoublyLinkedList.cpp)
add_executable(ArrayStack 02-Stack/ArrayStack.cpp)
add_executable(OOPArrayStack 02-Stack/OOPArrayStack.cpp)
