#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int size = 2 * n - 1;
    int matrix[size][size];
    
    // fills in matrix to zero row by row 
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            matrix[i][j] = 0;   
        }
    }
    
    for(int layer = 0; layer < n; ++layer) {
        int num = n - layer;
        for(int i = layer; i < size - layer; ++i){
            // fill in top and bottom 
            matrix[layer][i] = num;
            matrix[size - layer - 1][i] = num;
            
            // fill in left and right
            matrix[i][layer] = num;
            matrix[i][size - layer - 1] = num;
            
        }
    }
    
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

