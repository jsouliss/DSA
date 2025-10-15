# Python array implementation

class Array:
    def __init__(self):
        self.capacity = 20
        self.arr = [None] * self.capacity
        self.length = 0

    # insert element at the end of the array
    def insertAtEnd(self, val):
        if self.length < self.capacity:
            self.arr[self.length] = val
            self.length += 1

    # remove element at the end of the array
    def removeLastElem(self):
        self.arr[self.length] = 0
        self.length -= 1

    # insert element in middle of array
    def insertAtMid(self, val):
        mid = int(self.length / 2)
        for i in range(self.length, mid - 1, -1):
            self.arr[i + 1] = self.arr[i]
        self.arr[mid] = val
        self.length += 1

    # remove middle array element
    def removeMid(self):
        mid = int(self.length / 2)
        for i in range(mid, self.length, 1):
            self.arr[i] = self.arr[i + 1]
        self.arr[self.length] = 0
        self.length -= 1

    # print array elements
    def printArr(self):
        for i in range(0, self.length):
            print(self.arr[i], end=' ')
        print('\n')

def main():
    arr = Array()
    print("Printing array elements: ", end='')
    arr.insertAtEnd(1)
    arr.insertAtEnd(2)
    arr.insertAtEnd(3)
    arr.insertAtEnd(4)
    arr.insertAtEnd(5)
    arr.insertAtEnd(6)
    arr.insertAtEnd(7)
    arr.insertAtEnd(8)
    arr.insertAtEnd(9)
    arr.insertAtEnd(10)
    arr.printArr()
    print("Removing last element: ", end='')
    arr.removeLastElem()
    arr.printArr()
    print("Removing middle element: ", end='')
    arr.removeMid()
    arr.printArr()
    print("Inserting element at middle: ", end='')
    arr.insertAtMid(20)
    arr.printArr()

if __name__ == '__main__':
    main()