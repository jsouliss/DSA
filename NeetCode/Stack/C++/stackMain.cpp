//
// Created by Jerry on 4/30/2025.
//
#include <iostream>
#include "Stack.h"

using namespace std;


int main() {
    constexpr int size = 5;
    class Stack stack(size);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    cout << "The size of the stack is currently: " << stack.stackSize() << endl;

    cout << "The element at the top of the stack is: " << stack.peek() << endl;

    for(int i = 0; i < size; ++i) {
        cout << stack.pop() << " ";
    }

    return 0;
}