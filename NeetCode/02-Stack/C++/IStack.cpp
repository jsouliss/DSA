//
// Created by Jerry on 4/30/2025.
//

class IStack {
public:
    virtual void push (int value) = 0;
    virtual int pop () = 0;
    virtual int peek () = 0;
    virtual int stackSize() = 0;
    virtual ~IStack() = default;
};