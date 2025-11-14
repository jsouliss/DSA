def merge(arr, s, m, e) -> None:
    k =
    i =
    j =



def mergeSort(arr, s, e) -> None:
    if s >= e:
        return arr

    m = (s + e) // 2

    # Split left half
    mergeSort(arr, s, m)
    # Split right half
    mergeSort(arr, m + 1, e)

    merge(arr, s, m, e)

    return arr

def main():
    arr = [3, 2, 4, 1, 6]
    s = arr[0]
    e = arr[-1]
    print("The list before merge sort:", end=' ')
    for val in arr:
        print(val, end=' ')
    mergeSort(arr, s, e)
    print("\nThe list after merge sort:", end=' ')
    for val in arr:
        print(val, end=' ')


if __name__ == '__main__':
    main()