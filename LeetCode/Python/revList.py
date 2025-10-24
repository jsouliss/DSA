from typing import Optional
from LeetCode.Python.singlyList import ListNode


def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
    prev = None
    nxt = None
    curr = head
    while curr:
        nxt = curr.next
        curr.next = prev
        prev = curr
        curr = nxt
    return 