//
// Created by Jerry Solis on 11/16/24.
//

#ifndef NEETCODE_STACK_H
#define NEETCODE_STACK_H

#include "IStack.cpp"

class Stack : public IStack{
private:
    int capacity;
    int size;
    int *arr;
public:
    Stack(int capacity);
    void push(int n);
    int pop();
    int peek();
    void resize();
    ~Stack();
};

#include "Stack.cpp"

#endif //NEETCODE_STACK_H
