"""
Given two binary strings a and b,
return their sum as a binary string.

Example 1:

Input: a = "11", b = "1"
Output: "100"
"""


def addBinary(a, b):
    if len(a) > len(b):
        max = a
        min = b
    else:
        max = b
        min = a
    min = min.rjust(len(max), "0")
    result = ""
    carry = 0
    for i in range(len(max) - 1, -1, -1):
        r = carry
        r += 1 if max[i] == "1" else 0
        r += 1 if min[i] == "1" else 0
        result = ("1" if r % 2 == 1 else "0") + result
        carry = 0 if r < 2 else 1

    if carry != 0:
        result = "1" + result

    return result


def main():
    a = "11"
    b = "1"
    print(addBinary(a, b))


if __name__ == "__main__":
    main()
