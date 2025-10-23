class MinStack:

    def __init__(self):
        self.items = []

    def push(self, val: int) -> None:
        self.items.append(val)

    def pop(self) -> None:
        self.items.pop()

    def top(self) -> int:
        return self.items[-1]

    def getMin(self) -> int:
        min = self.items[0]
        for item in self.items:
            if item < min:
                min = item

        return min

def main():
    stack = MinStack()

if __name__ == "__main__":
    main()