#include <vector>
#include <iostream>
//
// Created by Jerry on 6/10/2025.
//
class Node
{
public:
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}
};

class LinkedList
{
private:

    Node* head;
    Node* tail;

public:

    // Initialize an empty list
    LinkedList() : head(nullptr), tail(nullptr) {}

    /*
     * Will return the value of the `ith` node (0-indexed)
     * If the index is out-of-bounds return `-1`
     */
    int get(int index)
    {
        if (index < 0)
        {
            return -1;
        }
        if (head == nullptr)
        {
            return -1;
        }
        if (head->next == nullptr)
        {
            return head->value;
        }

        Node* curr = head;

        for (int i = 0; i < index && curr != nullptr; ++i)
        {
            curr = curr->next;
        }

        if (curr == nullptr)
        {
            return -1;
        }

        return curr->value;
    }

    void insertHead(int val)
    {
        Node* newNode = new Node(val);

        // The list is empty
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void insertTail(int val)
    {
        Node* newNode = new Node(val);

        // The list is empty
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    bool remove(int index)
    {
        /*
         * Conditions:
         *  List is empty
         *  Index starts at head Node
         *  List contains more than one node
        */
        Node* temp = nullptr;
        bool flag = false;

        // List is empty
        if (head == nullptr || index < 0)
        {
            return flag;
        }

        // List with one Node
        temp = head;
        if (index == 0)
        {
            head = head->next;
            if (head == nullptr)
            {
                tail = nullptr;
            }
            delete temp;
            flag = true;
            return flag;
        }

        // List contains more than one node
        for (int i = 0; temp != nullptr && i < index - 1; ++i)
        {
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr)
        {
            return false;
        }

        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
        return true;
    }

    std::vector<int> getValues()
    {
        std::vector<int> vals;
        Node* curr = head;

        while (curr != nullptr)
        {
            vals.push_back(curr->value);
            curr = curr->next;
        }

        return vals;
    }
};

int main()
{
    LinkedList myList;

    myList.insertHead(1);
    myList.insertTail(2);
    myList.insertHead(0);
    myList.remove(1);
    std::vector<int> vals = myList.getValues();

    for (int i = 0; i < vals.size(); ++i)
    {
        std::cout << vals[i] << " ";
    }

    return 0;
}