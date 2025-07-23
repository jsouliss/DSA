// Linked List: Delete a node at nth position 

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head; // global 
void Insert(int data); // insert an integer at end of list 
void Print(); // print all elements in the list 
void Delete(int n); // Delete node at position n

void Insert(int data) {
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        return;
    }

    struct Node* current = head;
    while(current->next != NULL) {
        current = current->next; // List is empty new node becomes head
    }

    current->next = temp;
}

void Print() {
    struct Node* temp1 = head;

    while(temp1 != NULL) {
        printf("%d ", temp1->data);
        temp1 = temp1->next;
    }
    printf("\n");
}

void Delete(int n) {
    struct Node* temp1 = head;
    if (n == 1) {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for (i = 0; i < n - 2; i++) {
        temp1 = temp1->next;
    }
    // temp1 points to (n - 1)th Node
    struct Node* temp2 = temp1->next; // nth Node
    temp1->next = temp2->next; // (n+1)th Node
    free(temp2); // delete temp2;
}

int main() {
    head = NULL; // empty list
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); // List: 2, 4, 6, 5
    Print();
    int n;
    printf("Enter a position\n");
    scanf("%d", &n);
    Delete(n);
    Print();

    return 0;
}
