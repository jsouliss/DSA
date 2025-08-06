//
// Created by Jerry on 8/5/2025.
//
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Stack {
public:
    int top_ = -1;
    int *array;
    int capacity = 100;


    Stack() {
        array = new int[capacity];
    }

    void push(int val) {
        if (top_ >= capacity - 1) {
            printf("[!] Stack overflow\n");
            return;
        }
        else {
            ++top_;
            array[top_] = val;
        }
    }

    void pop() {
       if (!isEmpty()) {
           --top_;
       }
       else {
           printf("[!] Stack underflow\n");
           return;
       }
    }

    int top() {
        if (!isEmpty()) {
            return array[top_];
        }
        else {
            printf("[!] Stack is empty\n");
            return 0;
        }
    }

    bool isEmpty() {
        return top_ == -1;
    }

    void print() {
        int i = 0;
        while (i <= top_) {
            printf("%d ", array[i]);
            ++i;
        }
    }

    // Copy constructor
    Stack(const Stack &other) {
        capacity = other.capacity;
        top_ = other.top_;
        array = new int[capacity];
        for (int i = 0; i <= top_; ++i) {
            array[i] = other.array[i];
        }
    }

    // Assignment operator
    Stack& operator=(const Stack &other) {
        if (this != &other) {
            delete[] array; // Free existing memory
            capacity = other.capacity;
            top_ = other.top_;
            array = new int[capacity];
            for (int i = 0; i <= top_; ++i) {
                array[i] = other.array[i];
            }
        }
        return *this;
    }

    ~Stack() {
        delete[] array;
    }
};

int perform(char exp, int op1, int op2) {
    switch (exp) {
        case '+':
            return op1 + op2;
        case '-':
            return op1 - op2;
        case '*':
            return op1 * op2;
        case '/':
            if (op1 / op2 == 0) {
                printf("[!] Error: Division by zero\n");
                return 0; // Handle division by zero
            }
            return op1 / op2;
        default:
            printf("[!] Error: Invalid operator '%c'\n", exp);
    }
    return 0; // Default return value in case of error
}

int evaluatePostFix(string exp) {
    Stack s;
    for (int i = 0; i < exp.length(); ++i) {
        if (exp[i] != '+' && exp[i] != '-' && exp[i] != '*' && exp[i] != '/') {
            s.push(exp[i] - '0'); // Convert char to int
        }
        else {
            int op2 = s.top();
            s.pop();
            int op1 = s.top();
            s.pop();
            int result = perform(exp[i], op1, op2);
            s.push(result);
        }
    }
    return s.top();
}

int main() {
    string expression = "23*54*+";
    int result = evaluatePostFix(expression);
    cout << "Result of postfix expression '" << expression << "' is: " << result << endl;

    return 0;
}
