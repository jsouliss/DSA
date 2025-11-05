def fib(n):
    if n <= 1:
        return n

    return fib(n - 1) + fib(n - 2)

def main():
    n = 5
    print(f"fib({n}) is: {fib(5)}")

if __name__ == "__main__":
    main()