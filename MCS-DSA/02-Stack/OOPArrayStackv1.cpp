#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Stack {
    int top = -1;
    int capacity = 100;
    int* array = (int*)malloc(sizeof(int) * 100); // Dynamic memory allocation for array;
};

void Push(struct Stack &stack, int x) {
    if(stack.top == stack.capacity - 1) {
        printf("[!] ERROR: Stack overflow\n");
        return;
    }
    else {
        stack.array[++stack.top] = x;
    }
}

void Pop(struct Stack &stack) {
    if (stack.top == -1) {
        printf("[!] ERROR: Stack underflow\n");
        return; // or some error value
    }
    else {
        stack.top--;
        return;
    }
}

int Top(struct Stack &stack) {
    return stack.array[stack.top];
}

bool IsEmpty(struct Stack &stack) {
    if (stack.top == -1) {
        return true;
    }
    return false;
}

void Print(struct Stack &stack) {
    if (IsEmpty(stack)) {
        printf("[!] ERROR: Stack is empty\n");
        return;
    }
    struct Stack tempStack = stack; // Create a copy to avoid modifying the original stack
    while (!IsEmpty(tempStack)) {
        printf("%d ", Top(tempStack));
        Pop(tempStack);
    }
}

int main() {
    Stack stack;
    Push(stack, 1);
    Push(stack, 2);
    Push(stack, 3);

    printf("Top element is %d\n", Top(stack));
    
    printf("Stack elements: ");
    Print(stack);
    printf("\n");
    printf("Popped element is %d\n", Top(stack));
    Pop(stack);
    printf("Stack elements after pop: ");
    Print(stack);
    printf("\n");
    free(stack.array); // Free the dynamically allocated memory
    return 0;
}