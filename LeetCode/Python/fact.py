def fact_rec(n):
    if n <= 1: # base case
        return 1
    return n * fact_rec(n - 1)

def fact_iter(n):
    res = 1
    while n >= 1:
        res = res * n
        n -= 1
    return res

def main():
    n = 5
    print(f"The result of {n}! using recursive method is {fact_rec(n)}")
    print(f"The result of {n}! using itereative method is {fact_iter(n)}")

if __name__ == '__main__':
    main()