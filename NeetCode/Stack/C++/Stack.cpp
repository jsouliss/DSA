//
// Created by Jerry Solis on 11/16/24.
//

#include "Stack.h"

Stack::Stack(int capacity) {
    this->capacity = capacity;
    size = 0;
    arr = new int[capacity];
}

void Stack::push(int n) {
    if(size == capacity) {
        resize();
    }
    arr[size] = n;
    size++;
}

void

void peek() {
    return
}

int Stack::pop() {

}

int Stack::peek() {

}

Stack::~Stack() {
    delete[] arr;
}