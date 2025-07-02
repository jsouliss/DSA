//
// Created by Jerry Solis on 11/15/24.
//

#ifndef NEETCODE_DYNAMICARRAY_H
#define NEETCODE_DYNAMICARRAY_H

class DynamicArray {
private:
    int capacity;
    int size;
    int *arr;
public:
    // Constructor
    DynamicArray(int capacity);
    // Will return the element at index i,
    // assume that index i is valid
    int get(int i);
    // Will set the element at index i to n.
    // Assume that index i is valid.
    void set(int i, int n);
    // Will push the element n to the end
    // of the array.
    void pushback(int n);
    // Will pop and return the element at the end
    // of the array.
    int popback();
    // Will double the capacity of the array.
    void resize();
    // Will return the number of elements in the array.
    int getSize();
    // Will return the capacity of the array.
    int getCapacity();
    // Print elements in the array.
    void print();
    // Destructor
    ~DynamicArray();
};

#include "DynamicArray.cpp"

#endif //NEETCODE_DYNAMICARRAY_H
