# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if list1 is not None and list2 is not None:
            mergedList = ListNode()
            current = mergedList
            while list1 is not None and list2 is not None:
                if list1.val <= list2.val:
                    current.next = list1
                    list1 = list1.next
                else:
                    current.next = list2
                    list2 = list2.next
                current = current.next
            # Attach any remaining nodes
            if list1 is not None:
                current.next = list1
            elif list2 is not None:
                current.next = list2
            return mergedList.next # skip the dummy head
        elif list1 is None and list2 is not None:
            return list2
        elif list2 is None and list1 is not None:
            return list1
        return list2