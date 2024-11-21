import Stack

def main():
    myStack = Stack.Stack()
    myStack.push(1)
    myStack.push(2)
    myStack.push(3)
    myStack.push(4)
    myStack.push(5)
    myStack.print()
    print(myStack.pop())
    print(myStack.peek())
    myStack.print()

if __name__ == '__main__':
    main()