#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubbleSort(int arr[], int size) {
    bool swapped = 0;

    for (int i = 0; i < size - 1; ++i) {
        swapped = false;
        
        for (int j = 0; j < size - i - 1; ++j) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void Print(int arr[], int size) {
    int i = 0;
    
    while(i < size) {
        printf("%d ", arr[i]);
        ++i;
    } 
}

int main() {
    int arr[] = {7, 8, 5, 0, 2, 3, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("The array before using bubble sort: ");
    Print(arr, size);
    printf("\n");
    
    bubbleSort(arr, size);

    printf("The array after using bubble sort: ");
    Print(arr, size);
    printf("\n");

    return 0;
}