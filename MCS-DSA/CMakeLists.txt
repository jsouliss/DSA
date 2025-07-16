cmake_minimum_required(VERSION 3.31)
project(cmake_mcs-dsa)

set(CMAKE_CXX_STANDARD 20)

add_executable(LListv1 00-SinglyLinkedList/LinkedListv1.cpp)

add_executable(LListv2 00-SinglyLinkedList/LinkedListv2.cpp)

add_executable(LListv3 00-SinglyLinkedList/LinkedListv3.cpp)
add_executable(RLList 00-SinglyLinkedList/RLinkedList.cpp)
add_executable(RevPrintLList 00-SinglyLinkedList/RevPrintLinkedList.cpp)
add_executable(RevRecLL 00-SinglyLinkedList/RevRecLinkedList.cpp)
add_executable(DLinkedList 01-DoublyLinkedList/DoublyLinkedList.cpp)
