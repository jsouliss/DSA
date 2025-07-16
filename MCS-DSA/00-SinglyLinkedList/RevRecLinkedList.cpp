//
// Created by Jerry on 7/10/2025.
//
//
// Created by Jerry on 7/10/2025.
//
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

// Printing Linked List using recursion
void Print(struct Node* p)
{
    if (p == NULL) return;
    printf("%d ", p->data);
    Print(p->next);
}

// Printing Linked List using recursion
void RevPrint(struct Node* p)
{
    if (p == NULL) return;
    Print(p->next);
    // continues execution after the recursive call
    printf("%d ", p->data);
}

// Function to insert a new node at the end of the linked list
// Returns the head of the linked list, pointer to the first node
struct Node* Insert(struct Node* p, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (p == NULL)
    {
        p = newNode;
        return p;
    }

    // Traverse the linked list 
    struct Node* temp = p;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;

    return p;
}

struct Node* Reverse(struct Node* p)
{
    if (p == NULL || p->next == NULL)
    {
        return p; // Return the last node as the new head
    }
    struct Node* newHead = Reverse(p->next);
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;

    return newHead; // Return the new head of the reversed list
}

int main()
{
    struct Node* head = NULL; // local variable
    // Pass a copy of head
    // head is a local variable
    // We only pass a copy of address of head node
    head = Insert(head, 2);
    head = Insert(head, 6);
    head = Insert(head, 5);
    head = Insert(head, 4);
    Print(head); // 2 6 5 4
    printf("\n");
    // RevPrint(head);
    head = Reverse(head); // 4 5 6 2
    Print(head);
    
    return 0;
}