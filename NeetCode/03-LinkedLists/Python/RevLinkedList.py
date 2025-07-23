from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class SinglyLinkedList:
    # Iterative approach to reverse a singly linked list
    # def reverseList(self, head: Optional[ListNode]):
    #     if head is None:
    #         return head
    #     
    #     current = head
    #     prev = None
    #     next = None
    #     
    #     # Traverse to end of List
    #     while current:
    #         next = current.next
    #         current.next = prev
    #         prev = current
    #         current = next
    #     head = prev
    #     return head 
        
    # Recursive approach to reverse a singly linked list
    # Solution by NeetCode
    def reverseList(self, head: Optional[ListNode]):
        if not head:
            return None
        newNode = head
        if head.next:
            newNode = self.reverseList(head.next)
            head.next.next = head
        head.next = None
        return newNode
    
    def Insert(self, head: Optional[ListNode] = None, x: int = 0):
        newNode = ListNode()
        newNode.val = x
        newNode.next = None
        
        if head is None:
            head = newNode
            return head
        
        temp = head
        while temp.next:
            temp = temp.next
        temp.next = newNode
        
        return head

    def Print(self, head: Optional[ListNode] = None):
        print("\n")
        temp = head
        while temp:
            print(temp.val, end=' ')
            temp = temp.next
        print("\n")
        
def main():
    head = None
    head = SinglyLinkedList().Insert(head, 1)
    head = SinglyLinkedList().Insert(head, 2)
    head = SinglyLinkedList().Insert(head, 3)
    # head = SinglyLinkedList().Insert(head, 4)
    # head = SinglyLinkedList().Insert(head, 5)
    # print("Before Reversing:\n")
    # SinglyLinkedList().Print(head)
    head = SinglyLinkedList().reverseList(head)
    # print("After Reversing:\n")
    SinglyLinkedList().Print(head)
    
if __name__ == '__main__':
    main()