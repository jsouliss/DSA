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


DynamicArray::DynamicArray(int capacity) : size(0), arr(new int[capacity]) {
    if(capacity > 0) {
        this->capacity = capacity;
    }
    else {
        throw std::invalid_argument("[!] capacity must be greater than 0.");
    }
}

int DynamicArray::get(int i) {
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int value = 0;
    while (count < arrSize) {
        if(count == i) {
            value = arr[i];
        }
        count++;
    }
    return value;
}

void DynamicArray::set(int i, int n) {
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    while(count < arrSize) {
        if (count == i) {
            arr[i] = n;
            break;
        }
        count++;
    }
}

void DynamicArray::pushback(int n) {
    if (size == capacity) {
        resize();
    }
    arr[size] = n;
    size++;
}

int DynamicArray::popback() {
    int value = arr[size - 1];
    arr[size - 1] = 0;
    size--;
    return value;
}

void DynamicArray::resize() {
    int *temp = new int[capacity * 2];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    capacity *= 2;
}

int DynamicArray::getSize() {
    return size;
}

int DynamicArray::getCapacity() {
    return capacity;
}

void DynamicArray::print() {
    int count = 0;
    while(count < size) {
        std::cout << arr[count++];

        if (count != size) {
            std::cout << ", ";
        }
    }
}

DynamicArray::~DynamicArray() {
    delete[] arr;
}

#endif //NEETCODE_DYNAMICARRAY_H
