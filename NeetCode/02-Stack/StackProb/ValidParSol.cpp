//
// Created by Jerry on 5/14/2025.
//

#include <stack>
#include <map>
#include <iostream>

using namespace std;

class Solution {
public:
    bool validPar(string s)
    {
        std::map<char, char> closeToOpen = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        std::stack<char> stack;

        for (char c : s)
        {
            if (closeToOpen.count(c))
            {
                if (!stack.empty() && stack.top() == closeToOpen[c])
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};