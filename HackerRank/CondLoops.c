/* Conditionals and Loops Bitwise Operators */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    //Write your code here.
    int and_max = 0, or_max = 0, xor_max = 0;
    for (int a = 1; a < n; ++a) {
        for(int b = a + 1; b <= n; ++b) {
            int and_result = a & b;
            if(and_result < k && and_result > and_max) {
                and_max = and_result;
            }
            int or_result = a | b;
            if(or_result < k && or_result > or_max) {
                or_max = or_result;
            }
            int xor_result = a ^ b;
            if(xor_result < k && xor_result > xor_max) {
                xor_max = xor_result;
            }
        }
    }       
    printf("%d\n%d\n%d\n", and_max, or_max, xor_max);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

