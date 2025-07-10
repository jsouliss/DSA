from typing import List

class Node:
    def __init__(self):
        self.val = None
        self.next = None

class LinkedList:

    def __init__(self):
        self.head = None
        self.tail = self.head

    def get(self, index: int) -> int:
        if self.head is None:
            return -1

        current = self.head
        i = 0

        while current is not None:
            if i == index:
                return current.val
            current = current.next
            i += 1

        return -1

    def insertHead(self, val: int) -> None:
        newNode = Node()
        newNode.val = val

        if self.head is None:
            self.head = newNode
            self.tail = newNode
        else:
            newNode.next = self.head
            self.head = newNode

    def insertTail(self, val: int) -> None:
        newNode = Node()
        newNode.val = val

        if self.head is None:
            self.head = newNode
            self.tail = newNode
        else:
            self.tail.next = newNode
            self.tail = newNode

    def remove(self, index: int) -> bool:
        i = 0
        current = self.head

        if self.head is None or index < 0:
            return False

        if index == 0:
            self.head = self.head.next
            return True

        while current is not None and current.next is not None:
            if i == index - 1:
                # If we are removing the tail
                if current.next == self.tail:
                    self.tail = current
                current.next = current.next.next
                return True
            current = current.next
            i += 1

        return False

    def getValues(self) -> List[int]:
        llist = []

        current = self.head

        while current is not None:
            llist.append(current.val)
            current = current.next

        return llist

def main():
    llist = LinkedList()
    llist.insertTail(1)
    llist.insertTail(2)
    llist.get(1)
    llist.remove(1)
    llist.insertTail(2)
    llist.get(1)
    llist.get(0)

if __name__ == '__main__':
    main()