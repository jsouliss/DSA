//
// Created by Jerry on 8/1/2025.
//
#include <iostream>
using std::cout;
using std::endl;

class ListNode
{
public:
    int val_;
    ListNode *next = nullptr;
    ListNode *prev = nullptr;
    ListNode(int val)
    {
        val_ = val;
    }
};

class LinkedList
{
public:
    ListNode *head;
    ListNode *tail;

    LinkedList(int val)
    {
        head = new ListNode(-1);
        tail = new ListNode(-1);
        head->next = tail;
        tail->prev = head;
    }

    void insertFront(int val)
    {
        ListNode *newNode = new ListNode(val);
        newNode->next = head->next;
        newNode->prev = head;

        head->next->prev = newNode;
        head->next = newNode;
    }

    void insertEnd(int val)
    {
        ListNode* newNode = new ListNode(val);
        newNode->prev = tail->prev;
        newNode->next = tail;

        tail->prev->next = newNode;
        tail->prev = newNode; 
    }

    void removeFront()
    {
        head->next->next->prev = head;
        head->next = head->next->next;
    }

    void removeEnd()
    {
        tail->prev->prev->next = tail;
        tail->prev = tail->prev->prev;
    }

    void print()
    {
        ListNode *curr = head;
        while (curr != tail)
        {
            cout << curr->val_ << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};