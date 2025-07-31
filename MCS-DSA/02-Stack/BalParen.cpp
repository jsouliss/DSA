//
// Created by Jerry on 7/30/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>

class Stack
{
private:
    int top = -1;
    int capacity;
    char *arr = nullptr;
public:
    Stack();
    Stack(int capacity);
    // Copy Constructor to avoid shallow copy
    Stack(const Stack &obj);
    void Push(char x);
    void Pop();
    char Top();
    bool IsEmpty();
    ~Stack();
};

Stack::Stack() : capacity{0}
{
    this->arr = (char*)malloc(sizeof(char) * this->capacity);
}

Stack::Stack(int capacity) : capacity{capacity}
{
    this->arr = (char*)malloc(sizeof(char) * this->capacity);
}

// Deep Copy 
Stack::Stack(const Stack &obj) 
{
    this->capacity = obj.capacity;
    this->top = obj.top;

    // Allocate memory
    this->arr = (char*)malloc(sizeof(char) * capacity);

    for (int i = 0; i <= top; ++i)
    {
        this->arr[i] = obj.arr[i];
    }
}

void Stack::Push(char x)
{
    if (top + 1 == capacity)
    {
        printf("[!] ERROR: STACK OVERFLOW");
    }
    else
    {
        this->top+=1;
        arr[top] = x;
    }
}

void Stack::Pop()
{
    if (!IsEmpty())
    {
        this->top--;
    }
    else
    {
        printf("[!] ERROR: STACK UNDERFLOW\n");
    }
}

char Stack::Top()
{
    if (!IsEmpty())
    {
        return this->arr[this->top];
    }
    else
    {
        printf("[!] ERROR: STACK UNDERFLOW\n");
        return -1;
    }
}

bool Stack::IsEmpty()
{
    return this->top == -1;
}

bool IsBalParen(std::string exp)
{
    int n = exp.length();
    Stack s(10);

    for (int i = 0; i < n; ++i)
    {
        if (exp[i] == '[' || exp[i] == '(' || exp[i] == '{')
        {
            s.Push(exp[i]);
        }
        else if (exp[i] == ']' || exp[i] == ')' || exp[i] == '}')
        {
            if (s.IsEmpty())
            {
                return false;
            }
            s.Pop();
        }
    }

    return s.IsEmpty();
}

Stack::~Stack()
{
    free(this->arr);
}

void Print(const Stack &s)
{
    Stack temp = s;
    while (!temp.IsEmpty())
    {
        printf("%d ", temp.Top());
        temp.Pop();
    }
    printf("\n");
}

int main()
{
    // const int capacity = 4;
    // Stack s(capacity);

    // s.Push('[');
    // s.Push('(');
    // s.Push(')');
    // s.Push(']');
    // Print(s);

    std::string exp = "[}]";
    bool flag = IsBalParen(exp);

    if (flag)
    {
        printf("[+] The expression is balanced");
    }
    else
    {
        printf("[+] The expression is not balanced");
    }
    
    return 0;
}