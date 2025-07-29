//
// Created by Jerry on 7/29/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int data;
    struct Node *link;
};

struct Node *top = NULL;

void Push(int x)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = top;

    top = temp;
}

void Pop()
{
    if (top == NULL)
    {
        printf("[!] ERROR: Stack Underflow\n");
        return;
    }
    struct Node *temp = top;
    top = top->link;
    free(temp);
}

int Top()
{
    if (top == NULL)
    {
        printf("[!] ERROR: Stack Underflow\n");
        return -1;
    }
    int val = top->data;
    return val;
}

bool IsEmpty()
{
    bool flag = false;
    if (top == NULL)
    {
        flag = true;
    }
    
    return flag;
}

void Print()
{
    struct Node *temp = top;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    Push(1);
    Push(2);
    Push(3);
    Push(4);
    Push(5);

    printf("The stack contains the following elements: ");
    Print();
    printf("Popping the top element...\n");
    Pop();
    printf("The top of the stack after popping is: %d\n", Top());
    printf("Is the stack empty? %s\n", IsEmpty() ? "Yes" : "No");
    
    return 0;
}