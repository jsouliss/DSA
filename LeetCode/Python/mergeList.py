"""
Merge Two Sorted Linked Lists

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted linked list and return the head of the new sorted linked list.

The new list should be made up of nodes from list1 and list2.

Example 1:

https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/51adfea9-493a-4abb-ece7-fbb359d1c800/public

Input: list1 = [1,2,4], list2 = [1,3,5]

Output: [1,1,2,3,4,5]
"""


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

from typing import Optional
from LeetCode.Python.singlyList import ListNode

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        l1 = list1
        l2 = list2
        nl = ListNode()
        head = nl
        while l1 and l2:
            if l1.val < l2.val:
                nl.next = l1
                l1 = l1.next
            else:
                nl.next = l2
                l2 = l2.next
            nl = nl.next
        tmp = l1 if l1 else l2
        if tmp:
            while tmp:
                nl.next = tmp
                nl = nl.next
                tmp = tmp.next
        return head.next