//
// Created by Jerry on 6/12/2025.
//
// Linked List: Inserting a node at beginning

#include <stdlib.h>
#include <stdio.h>

// function declarations
void Insert(int x);
void Print();

struct Node {
    int data;
    struct Node* next;
};

// struct Node* head; // global variable, can be accessed anywhere

// Version 1:
// head is a copy of the pointer to the first node
/*
Node* Insert(Node* head, int x) {
    struct Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x; // (*temp).data = x;


    // temp->next = NULL;
    // if (head != NULL) {
    //     temp-> next = head;
    // }

    // temp->next This always assigns head to temp->next, regardless of whether head is NULL or points to another node.
    // And that’s perfectly fine, because:
    //  If the list is empty, head == NULL, so temp->next = NULL.
    //  If the list has nodes, head points to the first node, so temp->next correctly points to it.= NULL;

    temp->next = head;
    return head = temp; // make the new node the head of the list
}
*/

// Version 2:
// When you dereference it:
// *ptrToHead → gives you the actual head pointer(of type Node*)
// **ptrToHead → gives you the actual Node that head is pointing to
// But usually, you only need *ptrToHead to access
// or
// modify head
// dereference the pointer to the pointer to the first node
void Insert(Node **head, int x) {
    struct Node *temp = (Node *) malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if (*head != NULL) {
        temp->next = *head;
    }
    *head = temp;
}

void Print(struct Node* head) {
    printf("List is: ");
    while (head != NULL) {
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL; // empty list
    printf("How many numbers?\n");
    int n, i, x;
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter the number \n");
        scanf("%d", &x);

        // head = Insert(head, x);
        Insert(&head, x);
        Print(head);
    }

    return 0;
}