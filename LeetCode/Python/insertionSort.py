def insertionSort(arr: list) -> None:
    for i in range(1, len(arr)):
        j = i - 1
        while j >= 0 and arr[j + 1] < arr[j]:
            tmp = arr[j + 1]
            arr[j + 1] = arr[j]
            arr[j] = tmp
            j -= 1

def main():
    arr = [5, 4, 3, 2, 1]
    print("Before sorting: ")
    for num in arr:
        print(num, end=' ')
    insertionSort(arr)
    print("\nAfter sorting: ")
    for num in arr:
        print(num, end=' ')

if __name__ == '__main__':
    main()