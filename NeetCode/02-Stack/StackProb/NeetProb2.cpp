//
// Created by Jerry on 5/15/2025.
//

#include <vector>
#include <iostream>
using namespace std;

class MinStack
{
public:
    MinStack();
    void push(int);
    void pop();
    int top() const;
    int getMin() const;
private:
    vector<int> s;
};

MinStack::MinStack()
{

}

void MinStack::push(int val)
{
    s.push_back(val);
}

void MinStack::pop()
{
    s.pop_back();
}

int MinStack::top() const
{
    return s[s.size() - 1];
}

int MinStack::getMin() const
{
    int min = s[0];
    for (int i = 1; i < s.size(); ++i)
    {
       if (s[i] < min)
       {
           min = s[i];
       }
    }
    return min;
}