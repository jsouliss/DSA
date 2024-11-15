//
// Created by Jerry Solis on 11/15/24.
//
// Constructor
#include <stdexcept>
#include <iostream>
#include "DynamicArray.h"

DynamicArray::DynamicArray(int capacity) {
    if(capacity > 0) {
        capacity = capacity;
        size = 0;
        arr = new int[capacity];
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
    while(size > 0) {
        std::cout << arr[size - 1] << ", ";
        size--;
    }
}

DynamicArray::~DynamicArray() {

}