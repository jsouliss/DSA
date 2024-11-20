class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
        self.parent = None

def depthFirstValues(root):
    if root is None:
        return []
    # We use a stack
    # We also use the stack and pop methods
    result = []
    stack = [root]
    while len(stack) > 0:
        current = stack.pop()
        result.append(current.data)
        # We need to check if node exists
        if current.right:
            stack.append(current.right)
        if current.left:
            stack.append(current.left)
    return result

def main():
    a = Node('a')
    b = Node('b')
    c = Node('c')
    d = Node('d')
    e = Node('e')
    f = Node('f')
    a.left = b
    a.right = c
    b.left = d
    b.right = e
    c.right = f
    depthFirstValues(a)

if __name__ == '__main__':
    main()