//
// Created by Jerry Solis on 11/16/24.
//
#ifndef NEETCODE_STACK_H
#define NEETCODE_STACK_H

#include "IStack.cpp"
#include <iostream>

class Stack : public IStack {
private:
    int capacity;
    int size;
    int* arr;
public:
    Stack(int capacity);
    void push(int n) override;
    int pop() override;
    int peek() override;
    void resize() override;
    void print() override;
    ~Stack() override;
};

Stack::Stack(int capacity) : size(0) {
    if (capacity >  0) {
        this->capacity = capacity;
        arr = new int[capacity];
    }
}

void Stack::push(int n) {
    if(size == capacity) {
        resize();
    }
    arr[size] = n;
    size++;
}

int Stack::peek() {
    if (size > 0) {
        return arr[size - 1];
    }
    return 0;
}

int Stack::pop() {
    size--;
    int val = arr[size];
    arr[size] = 0;

    return val;
}

void Stack::resize() {
    if (size == capacity) {
        capacity *= 2;
        int *temp = new int[capacity];
        for (int i = 0; i < size; ++i) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
    }
}

void Stack::print() {
    for (int i = 0; i < size; ++i) {
        if (i == size - 1) {
            std::cout << arr[i] << "";
            break;
        }
        std::cout << arr[i] << ", ";
    }
}

Stack::~Stack() {
    delete[] arr;
}

#endif //NEETCODE_STACK_H
