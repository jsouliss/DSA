class ListNode:
    def __init__(self, val=None):
        self.val = val
        self.next = None
        self.prev = None

class Deque:

    def __init__(self):
        self.head = ListNode(-1)
        self.tail = ListNode(-1)
        self.head.next = self.tail
        self.tail.prev = self.head

    def isEmpty(self) -> bool:
        if self.tail.prev == self.head:
            return True
        return False

    def append(self, value: int) -> None:
        newNode = ListNode(value)
        newNode.next = self.tail
        newNode.prev = self.tail.prev
        self.tail.prev.next = newNode
        self.tail.prev = newNode

    def appendleft(self, value: int) -> None:
        newNode = ListNode(value)
        newNode.next = self.head.next
        newNode.prev = self.head
        self.head.next.prev = newNode
        self.head.next = newNode

    def pop(self) -> int:
        # Remove from tail
        if self.tail.prev == self.head:
            return -1
        val = self.tail.prev.val
        prev = self.tail.prev
        prev.prev.next = self.tail
        self.tail.prev = prev.prev
        return val

    def popleft(self) -> int:
        # Remove from head
        if self.tail.prev == self.head:
            return -1
        val = self.head.next.val
        next = self.head.next
        next.next.prev = self.head
        self.head.next = next.next
        return val