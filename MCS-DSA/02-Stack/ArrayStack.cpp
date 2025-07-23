// Stack - Array based implementation 
#include <stdio.h>

// Global variables
#define MAX_SIZE 100
int A[MAX_SIZE];
int top = -1;

void Push (int x) {
    // Handling overflow condition
    if (top == MAX_SIZE - 1) {
        printf("[!] ERROR: Stack Overflow\n");
        return;
    }
    // top++;
    // A[top] = x;
    // Alternate syntax
    A[++top] = x; // top incremented first, then x is assigned to A[top]
}

void Pop() {
    if (top == -1) {
        printf("[!] ERROR: No element to pop\n");
        return;
    }
    top--;
}

int Top() {
    return A[top];
}

void Print() {
    int i;
    printf("Stack: ");
    for (i = 0; i <= top; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    Push(2);
    Print();
    Push(5);
    Print();
    Push(10);
    Print();
    Pop();
    Print();    
    Push(12);
    Print(); 
    return 0;
}