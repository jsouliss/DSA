//
// Created by Jerry Solis on 11/16/24.
//

class IStack {
public:
    virtual void push(int n) = 0;
    virtual int  pop() = 0;
    virtual int  peek() = 0;
    virtual void resize() = 0;
    virtual void print() = 0;
    virtual      ~IStack() = default;
};