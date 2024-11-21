class Stack:
    def __init__(self):
        self.stack = []

    def push(self, data):
        self.stack.append(data)

    def pop(self):
        top = self.stack.pop()
        return top

    def peek(self):
        return self.stack[-1]

    def print(self):
        print(self.stack)