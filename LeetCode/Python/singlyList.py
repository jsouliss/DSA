"""
Design Singly Linked List
Solved
Design a Singly Linked List class.

Your LinkedList class should support the following operations:

LinkedList() will initialize an empty linked llist.
int get(int i) will return the value of the ith node (0-indexed). If the index is out of bounds, return -1.
void insertHead(int val) will insert a node with val at the head of the llist.
void insertTail(int val) will insert a node with val at the tail of the llist.
bool remove(int i) will remove the ith node (0-indexed). If the index is out of bounds, return false, otherwise return true.
int[] getValues() return an array of all the values in the linked llist, ordered from head to tail.
Example 1:

Input:
["insertHead", 1, "insertTail", 2, "insertHead", 0, "remove", 1, "getValues"]

Output:
[null, null, null, true, [0, 2]]
"""
from typing import List


class ListNode:
    def __init__(self, val):
        self.val = val
        self.next = None

class LinkedList:

    def __init__(self):
        self.head = None

    def get(self, index: int) -> int:
        i = 0
        curr = self.head
        while curr:
            if i == index:
                return curr.val
            curr = curr.next
            i += 1
        return -1

    def insertHead(self, val: int) -> None:
        # If llist is not empty
        newNode = ListNode(val)
        newNode.next = self.head
        self.head = newNode

    def insertTail(self, val: int) -> None:
        if self.head:
            curr = self.head
            while curr.next:
                curr = curr.next
            curr.next = ListNode(val)
        else:
            self.head = ListNode(val)

    def remove(self, index: int) -> bool:
        if self.head:
            if index == 0:
                self.head = self.head.next
                return True
            curr = self.head
            i = 0
            while curr:
                if i == index - 1 and curr.next:
                    curr.next = curr.next.next
                    return True
                curr = curr.next
                i += 1
        return False

    def getValues(self) -> List[int]:
        items = []
        curr = self.head
        while curr:
            items.append(curr.val)
            curr = curr.next
        return items

def main():
    llist = LinkedList()
    llist.insertTail(1)
    llist.insertTail(2)
    print(llist.get(0))
    llist.remove(1)
    llist.insertTail(2)
    print(llist.get(1))
    print(llist.get(0)) # Should output 1





    llist.remove(1)
    print(llist.getValues())  # Output: [0, 2]

if __name__ == "__main__":
    main()