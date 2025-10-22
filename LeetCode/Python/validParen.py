"""
Valid Parentheses

You are given a string s consisting of the following characters: '(', ')', '{', '}', '[' and ']'.

The input string s is valid if and only if:

Every open bracket is closed by the same type of close bracket.
Open brackets are closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
Return true if s is a valid string, and false otherwise.

Example 1:

Input: s = "[]"

Output: true
"""


def isValid(s: str) -> bool:
    if len(s) >= 0 and len(s) % 2 == 0:
        stack = []
        for i in range(0, len(s)):
            if s[i] == '[' or s[i] == '{' or s[i] == '(':
                stack.append(s[i])
            elif s[i] == ')' or s[i] == '}' or s[i] == ']':
                if stack:
                    if stack[-1] == '(' and s[i] == ')' or stack[-1] == '{' and s[i] == '}' or stack[-1] == '[' and s[i] == ']':
                        stack.pop()
                    else:
                        return False
                else:
                    return False
        if len(stack) == 0:
            return True
        else:
            return False
    else:
        return False

def main():
    s = '[(])'
    print(isValid(s))

if __name__ == '__main__':
    main()