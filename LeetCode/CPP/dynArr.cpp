//
// Created by dev on 10/16/25.
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class DynamicArray {
public:
    DynamicArray(int capacity) : capacity(capacity), length(0){
        this->arr = new int[capacity];
    }

    int get(int i) {
        return this->arr[i];
    }

    void set(int i, int n) {
        this->arr[i] = n;
    }

    void pushback(int n) {
        if (length == capacity) {
            resize();
        }
        arr[length] = n;
        length++;
    }

    int popback() {
        if (length > 0) {
            length--;
        }
        return arr[length];
    }

    void resize() {
        capacity *= 2;
        int* tmp = new int[capacity];
        for (int i = 0; i < length; ++i) {
            tmp[i] = arr[i];
        }
        delete[] arr;
        arr = tmp;
    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }
private:
    int capacity;
    int length;
    int* arr;
};

int main() {


    return 0;
}