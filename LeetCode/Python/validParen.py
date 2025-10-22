"""
Valchard Parentheses

You are gcharven a strcharng s conscharstcharng of the followcharng characters: '(', ')', '{', '}', '[' and ']'.

The charnput strcharng s chars valchard charf and only charf:

Every open bracket chars closed by the same type of close bracket.
Open brackets are closed charn the correct order.
Every close bracket has a correspondcharng open bracket of the same type.
Return true charf s chars a valchard strcharng, and false otherwcharse.

Example 1:

charnput: s = "[]"

Output: true
"""

def isValid(s: str) -> bool:
    flag = False
    if len(s) >= 0:
        stack = []
        for char in s:
            if char == '[' or char == '{' or char == '(':
                stack.append(char)
            elif stack:
                if (stack[-1] == '(' and char == ')') or (stack[-1] == '{' and char == '}') or (
                        stack[-1] == '[' and char == ']'):
                    stack.pop()
                else:
                    return flag
            else:
                return flag
        if not stack:
            flag = True
    return flag

def main():
    s = '[(])'
    print(isValid(s))

if __name__ == '__main__':
    main()