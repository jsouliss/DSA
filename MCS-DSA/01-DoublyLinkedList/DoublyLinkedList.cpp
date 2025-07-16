//
// Created by Jerry on 7/16/2025.
//

/* Doubly Linked List Implementation */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head = NULL; // global variable

struct Node* GetNewNode(int x)
{
    // local variable
    // Will be cleared from memory when function call will finish
    // Local variable lives in Stack section of an applications memory
    // Note: malloc returns void pointer, and we can cast it to any pointer type
    // The following creates a Node in the heap section of an application's memory
    struct Node* newNode = (struct Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

void InsertAtHead(int x)
{
    // Points to the new node obtained from GetNewNode
    struct Node* newNode = GetNewNode(x);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void Print()
{
    if (head != NULL)
    {
        printf("Forward Printing: ");
        struct Node* temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void PrintReverse()
{
    if (head != NULL)
    {
        // Going to last Node
        struct Node* temp = head;
        while (temp != NULL && temp->next != NULL)
        {
            temp = temp->next;
        }
        // Traversing backwards using the prev pointer
        printf("Reverse Printing: ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->prev;
        }
        printf("\n");
    }
}

void InsertAtTail(int x)
{
    struct Node* newNode = GetNewNode(x);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    // Traverse to the last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = NULL;
}

int main()
{
    InsertAtHead(2);
    InsertAtHead(3);
    InsertAtHead(4);
    InsertAtHead(5);
    InsertAtHead(6);
    InsertAtTail(7);
    Print();
    PrintReverse();
    
    return 0;
}