//
// Created by Jerry on 5/13/2025.
//

#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

bool validPar(char s[])
{
    bool flag = false;
    size_t length = strlen(s);
    stack<char> parStack;

    for (int i = 0; i < length; ++i)
    {
        if (s[i] == '[' || s[i] == '(' || s[i] == '{')
        {
           parStack.push(s[i]);
        }
        else if (s[i] == ']' || s[i] == ')' || s[i] == '}')
        {
            char top = parStack.top();
            parStack.pop();
            if (top == '{' && s[i] != '}' ||
                top == '(' && s[i] != ')' ||
                top == '[' && s[i] != ']')
            {
                return flag;
            }
        }
    }

    if (parStack.empty())
    {
        return true;
    }

    return flag;
}

int main()
{
    bool flag = false;
    // char s[] = "[(])"; // Unbalanced Parenthesis
    char s[] = "([{}])"; // Balanced Parenthesis

    flag = validPar(s);

    if (flag)
    {
        cout << "The parenthesis are valid." << endl;
    }
    else
    {
        cout << "The parenthesis are invalid." << endl;
    }

    return 0;
}