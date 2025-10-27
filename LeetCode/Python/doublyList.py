class ListNode:
    def __init__(self, val=0):
        self.val = val
        self.prev = None
        self.next = None

# Implementation for Doubly Linked List
class LinkedList:
    def __init__(self):
        # Init the list with 'dummy' head and tail nodes which makes
        # edge cases for insert & remove easier.
        self.head = ListNode()
        self.tail = ListNode()
        self.head.next = self.tail
        self.tail.prev = self.head

    # Need to skip dummy head
    def insertFront(self, val):
        newNode = ListNode(val)
        newNode.prev = self.head
        newNode.next = self.head.next # Skip dummy head
        self.head.next.prev = newNode
        self.head.next = newNode
        return None

    # Need to skip dummy head
    def insertEnd(self, val):
        newNode = ListNode(val)
        newNode.next = self.tail # Recall tail is a dummy node
        newNode.prev = self.tail.prev
        self.tail.prev.next = newNode
        self.tail.prev = newNode
        return None

    # Remove first node after dummy head (assume it exists)
    def removeFront(self):
        pass

    # Remove last node before dummy tail (assume it exists)
    def removeEnd(self):
        pass

    def print(self):
        pass
def main():
    pass

if __name__ == '__main__':
    main()