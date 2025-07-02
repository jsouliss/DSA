//
// Created by Jerry Solis on 11/16/24.
//
class IDynamicArray {
public:
    virtual int get(int i) = 0;
    virtual void set(int i, int n) = 0;
    virtual void pushback(int n) = 0;
    virtual int popback() = 0;
    virtual void resize() = 0;
    virtual int getSize() = 0;
    virtual int getCapacity() = 0;
    virtual void print() = 0;
    virtual ~IDynamicArray() = default;
};