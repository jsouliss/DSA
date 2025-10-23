class Stack:
    def __init__(self):
        self.items = []

    def push(self, val):
        self.items.append(val)

    def pop(self):
        if len(self.items):
            print("Stack is empty.")
            return -1
        return self.items.pop()

    def peek(self):
        if len(self.items) == 0:
            print("Stack is empty.")
            return -1
        return self.items[-1]

    def display(self):
        for i in range(0, len(self.items)):
            print(self.items[i], end=' ')

def main():
    stack = Stack()
    stack.push(1)
    stack.push(2)
    stack.push(3)
    print("The elements in the array stack are: ")
    stack.display()
    print('\n')
    print("After pop operation: ")
    stack.pop()
    stack.display()
    print('\n')
    val = stack.peek()
    print("After peek operation: ")
    print(val)
    print('\n')

if __name__ == '__main__':
    main()