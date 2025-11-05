from typing import Optional
from LeetCode.Python.singlyList import ListNode
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next

# Iterative
def reverseListIter(self, head: Optional[ListNode]) -> Optional[ListNode]:
    prev = None
    curr = head
    while curr:
        nxt_tmp = curr.next
        curr.next = prev
        prev = curr
        curr = nxt_tmp
    return prev

# Recursive
def reverseListRecur(self, head: Optional[ListNode]) -> Optional[ListNode]:
    if not head and not head.next:
        return head
    new_head = self.reverseListRecur(head.next) # Does not get updated after return statement
    head.next.next = head
    head.next = None
    return new_head