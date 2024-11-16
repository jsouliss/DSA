//
// Created by Jerry Solis on 11/15/24.
//

#ifndef NEETCODE_DYNAMICARRAY_H
#define NEETCODE_DYNAMICARRAY_H

#include "IDynamicArray.cpp"

class DynamicArray : public IDynamicArray {
private:
    int capacity;
    int size;
    int *arr;
public:
    // Constructor
    DynamicArray(int capacity);
    // Will return the element at index i,
    // assume that index i is valid
    int get(int i) override;
    // Will set the element at index i to n.
    // Assume that index i is valid.
    void set(int i, int n) override;
    // Will push the element n to the end
    // of the array.
    void pushback(int n) override;
    // Will pop and return the element at the end
    // of the array.
    int popback() override;
    // Will double the capacity of the array.
    void resize() override;
    // Will return the number of elements in the array.
    int getSize() override;
    // Will return the capacity of the array.
    int getCapacity() override;
    // Print elements in the array.
    void print() override;
    // Destructor
    ~DynamicArray() override;
};

#include "DynamicArray.cpp"

#endif //NEETCODE_DYNAMICARRAY_H
