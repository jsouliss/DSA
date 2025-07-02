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

    std::cout << "\nEnter the index of the element you would like to change: ";
    int index = 0;
    std::cin >> index;
    std::cout << "Enter the new value: ";
    int newValue = 0;
    std::cin >> newValue;
    dynArr->set(index, newValue);

    std::cout << "The elements in the array are: " << std::endl;
    dynArr->print();
    std::cout << std::endl;

    std::cout << "The number of elements in the array is: " << dynArr->getSize() << std::endl;
    std::cout << "The capacity of the array is: " << dynArr->getCapacity() << std::endl;

    std::cout << "Removing the last element in the array: " << dynArr->popback() << std::endl;
    std::cout << "The elements in the array are: " << std::endl;
    dynArr->print();
}