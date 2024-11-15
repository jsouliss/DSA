//
// Created by Jerry Solis on 11/15/24.
//

#include <iostream>
#include "DynamicArray.h"

int main() {
    DynamicArray *dynArr = new DynamicArray(10);
    int numElements = 0;

    std::cout << "Please enter the number of elements you would like to add to the array: ";
    std::cin >> numElements;
    std::cout << "Please enter values to enter into the array: ";
    for (int i = 0; i < numElements; ++i) {
        int value;
        std::cin >> value;
        dynArr->pushback(value);
    }
    std::cout << "The elements in the array are: " << std::endl;
    dynArr->print();
}