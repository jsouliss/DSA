from typing import Optional
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0,next=None):
        self.val = val
        self.next = next

class LinkedList:
    def __init__(self):
        self.head = None
        
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if list1 is None:
            return list2
        if list2 is None:
            return list1
        if list1.val <= list2.val:
            list1.next = self.mergeTwoLists(list1.next, list2)
            return list1
        else:
            list2.next = self.mergeTwoLists(list1, list2.next)
            return list2
    def Insert(self, val: int) -> None:
        newNode = ListNode(val)
        if self.head is None:
            self.head = newNode
            return 
            
        # If the list is not empty, traverse to the end of the list
        temp = self.head 
        while temp.next is not None:
            temp = temp.next
        # Insert the new node at the end of the list
        temp.next = newNode 
        return
    
    def Print(self) -> None:
        temp = self.head 
        while temp is not None:
            if temp.next is None:
                print(temp.val, end="")
            else:
                print(temp.val, end=" -> ")
            temp = temp.next
        print("\n")
        return 
            
def main():
    ll1 = LinkedList()
    ll1.Insert(1)
    ll1.Insert(2)
    print("Linked List 1: ")
    ll1.Print()
    
    ll2 = LinkedList()
    ll2.Insert(1)
    print("Linked List 2: ")
    ll2.Print()
    
    mergedList = LinkedList()
    mergedList.head = mergedList.mergeTwoLists(ll1.head, ll2.head)
    print("Merged Linked List: ")
    mergedList.Print()
    
if __name__ == '__main__':
    main()