class ListNode:
    def __init__(self, val=0):
        self.val = val
        self.prev = None
        self.next = None


class MyLinkedList:

    def __init__(self):
        # Dummy nodes for edge cases
        self.head = ListNode()
        self.tail = ListNode()
        self.head.next = self.tail
        self.tail.prev = self.head
        self.length = 0

    def get(self, index: int) -> int:
        if index < 0:
            return -1
        i = 0
        val = 0
        curr = self.head.next  # Skip dummy node
        while curr is not self.tail:
            if i == index:
                val = curr.val
                return val
            curr = curr.next
            i += 1
        return -1

    def addAtHead(self, val: int) -> None:
        newNode = ListNode(val)
        newNode.next = self.head.next
        newNode.prev = self.head
        self.head.next.prev = newNode
        self.head.next = newNode
        self.length += 1
        return None

    def addAtTail(self, val: int) -> None:
        newNode = ListNode(val)
        newNode.next = self.tail
        newNode.prev = self.tail.prev
        self.tail.prev.next = newNode
        self.tail.prev = newNode
        self.length += 1
        return None

    def addAtIndex(self, index: int, val: int) -> None:
        if index > self.length or index < 0:
            return None
        if index == 0:
            self.addAtHead(val)
        elif index == self.length:
            self.addAtTail(val)
        else:
            i = 0
            curr = self.head.next
            newNode = ListNode(val)
            while curr is not self.tail:
                if i == index - 1:
                    # Insert newNode AFTER curr (which is before the node at index)
                    newNode.next = curr.next
                    newNode.prev = curr
                    curr.next.prev = newNode
                    curr.next = newNode
                    self.length += 1
                    break
                curr = curr.next
                i += 1
        return None

    def deleteAtIndex(self, index: int) -> None:
        if index < 0 or index >= self.length:
            return None
        i = 0
        curr = self.head.next
        if index == 0:
            curr.next.prev = self.head
            curr.prev.next = curr.next
            self.length -= 1
            return None
        while curr is not self.tail:
            if i == index - 1:
                curr.next = curr.next.next
                curr.next.prev = curr
                self.length -= 1
                break
            curr = curr.next
            i += 1
        return None

# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)