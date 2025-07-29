//
// Created by Jerry on 7/29/2025.
//
#include <string>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
// #include <stack> // Stack from Standard Template Library (STL)
class Stack
{
private:
    char A[101];
    int top = -1; // Initialize top to -1 to indicate an empty stack
public:
    void Push(int x);
    void Pop();
    int Top();
    bool IsEmpty();
};

void Stack::Push(int x) 
{
    top = top + 1;
    A[top] = x;
}

void Stack::Pop()
{
    if (IsEmpty())
    {
        printf("[!] ERROR: Stack Underflow");
        return;
    }
    top = top - 1;
}

int Stack::Top()
{
    if (IsEmpty())
    {
        printf("[!] ERROR: Stack Underflow");
        return -1;
    }
    return A[top];
}

bool Stack::IsEmpty()
{
    if (top == -1)
    {
        return true;
    }
    return false;
}

void Reverse(char C[], int length)
{
    Stack S;
    for (int i = 0; i < length; ++i)
    {
        S.Push(C[i]);
    }

    // Reversing string
    for (int i = 0; i < length; ++i)
    {
        char c = static_cast<char>(S.Top());
        S.Pop();
        C[i] = c;
    }
}

int main()
{
    char C[51];
    printf("Enter String: ");
    gets(C);
    Reverse(C, strlen(C));
    printf("Output = %s", C);
    return 0;
}