#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Stack {
    int top;
    int capacity;
    int* array;
};

// Constructor-like function
struct Stack* createStack(int capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (!stack) return NULL;
    
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(capacity * sizeof(int));
    if (!stack->array) {
        free(stack);
        return NULL;
    }
    return stack;
}

// Destructor-like function
void destroyStack(struct Stack* stack) {
    if (stack) {
        free(stack->array);
        free(stack);
    }
}

void Push(struct Stack* stack, int x) {
    if(!stack || stack->top == stack->capacity - 1) {
        printf("[!] ERROR: Stack overflow or null pointer\n");
        return;
    }
    stack->array[++stack->top] = x;
}

int Pop(struct Stack* stack) {
    if (!stack || stack->top == -1) {
        printf("[!] ERROR: Stack underflow or null pointer\n");
        return -1; // or some error value
    }
    return stack->array[stack->top--];
}

int Top(struct Stack* stack) {
    if (!stack || stack->top == -1) {
        printf("[!] ERROR: Stack is empty or null pointer\n");
        return -1;
    }
    return stack->array[stack->top];
}

bool IsEmpty(struct Stack* stack) {
    return !stack || stack->top == -1;
}

void Print(struct Stack* stack) {
    if (IsEmpty(stack)) {
        printf("[!] ERROR: Stack is empty\n");
        return;
    }
    printf("Stack elements (top to bottom): ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->array[i]);
    }
}

int main() {
    struct Stack* stack = createStack(100);
    if (!stack) {
        printf("Failed to create stack\n");
        return 1;
    }

    Push(stack, 1);
    Push(stack, 2);
    Push(stack, 3);

    printf("Top element is %d\n", Top(stack));
    
    Print(stack);
    printf("\n");
    
    printf("Popped element is %d\n", Pop(stack));
    
    Print(stack);
    printf("\n");
    
    destroyStack(stack); // Proper cleanup using the destructor function
    return 0;
}