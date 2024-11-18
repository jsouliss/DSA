//
// Created by Jerry Solis on 11/16/24.
//

#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    Stack *stack = new Stack(10);

    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    stack->push(5);
    stack->push(6);
    stack->push(7);
    stack->push(8);
    stack->push(9);
    stack->push(10);
    stack->push(11);
    stack->push(12);

    cout << stack->pop() << endl;
    cout << stack->peek() << endl;

    stack->print();

    delete stack;

    return 0;
}