class ListNode:
    def __init__(self, val):
        self.val = val
        self.next = None
        self.prev = None

# Implementation for Doubly Linked List
class LinkedList:
    def __init__(self, val):
        self.head = ListNode(-1)
        self.tail = ListNode(-1)
        self.head.next = self.tail
        self.tail.prev = self.head
    
    def insertFront(self, val):
        newNode = ListNode(val)
        newNode.prev = self.head
        newNode.next = self.head.next
        
        self.head.next.prev = newNode
        self.head.next = newNode
            
    def insertEnd (self, val):
        newNode = ListNode(val)
        newNode.next = self.tail
        newNode.prev = self.tail.prev
        
        self.tail.prev.next = newNode
        self.tail.prev = newNode
        
    def removeFront(self):
        self.head.next.next.prev = self.head
        self.head.next = self.head.next.next
    
    def removeEnd(self):
        self.tail.prev.prev.next = self.tail
        self.tail.prev = self.tail.prev.prev  
    
    def print(self):
        curr = self.head.next
        
        while curr != self.tail:
            print(f"{curr.val} ")
            curr = curr.next
        print("\n")