def fibRec(n):
    if n <= 1:
        return n

    return fibRec(n - 1) + fibRec(n - 2)

def fibIter(n):
    if n == 0: return 0
    if n == 1: return 1

    prev2 = 0
    prev1 = 1

    # if n = 5, n + 1 = 6, loop stops at i = 5
    for i in range(2, n + 1):
        curr = prev2 + prev1
        prev2 = prev1
        prev1 = curr
    return prev1

def main():
    n = 5
    print(f"fib({n}) is: {fibRec(5)}")
    print(f"fib({n}) is: {fibIter(5)}")

if __name__ == "__main__":
    main()