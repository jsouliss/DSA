//
// Created by Jerry on 4/30/2025.
//

#ifndef STACK_H
#define STACK_H
#include "IStack.cpp"
#include <vector>

class Stack final : public IStack {
public:
     explicit Stack(int);
     void push (int value) override;
     int pop () override;
     int peek () override;
     int stackSize() override;
     ~Stack() override;
private:
     std::vector<int>stack;
     int top = -1;
     int capacity;
     int size = 0;
};

inline Stack::Stack(const int capacity) {
     this->capacity = capacity;
}

inline void Stack::push(const int value) {
     if (size < capacity) {
          stack.push_back(value);
          size++;
     }
}

inline int Stack::stackSize() {
     return size;
}

inline int Stack::pop() {
     if (size > 0) {
          const int value = stack[size - 1];
          stack.pop_back();
          size--;
          return value;
     }
     return -1;
}

inline int Stack::peek() {
     if (size > 0) {
          return stack.back();
     }
     return -1;
}

inline Stack::~Stack() {

}

#endif //STACK_H
