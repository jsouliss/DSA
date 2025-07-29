//
// Created by Jerry on 7/29/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stack>

struct Node {
    int data;
    struct Node* next;
};

struct Node* Insert(struct Node* head, int x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    
    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    // Insert at the end of the linked list
    struct Node* temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

struct Node* Reverse (struct Node* head)
{
    if (head == NULL)
    {
        return NULL;
    }
    std::stack<struct Node*> S;
    Node* temp = head;
    while (temp != NULL)
    {
        S.push(temp);
        temp = temp->next;
    }
    temp = S.top();
    head = temp;
    S.pop();
    while (!S.empty())
    {
        temp->next = S.top();
        S.pop();
        temp = temp->next;
    }
    temp->next = NULL;

    return head;
}

void Print(struct Node* head) 
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Node* head = NULL;
    head = Insert(head, 1);
    head = Insert(head, 2);
    head = Insert(head, 3);
    head = Insert(head, 4);
    head = Insert(head, 5);
    printf("Original Linked List: ");
    Print(head);
    head = Reverse(head);
    printf("Reversed Linked List: ");
    Print(head);
    
    return 0;
}