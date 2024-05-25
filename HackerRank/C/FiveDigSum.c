#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    if(n >= 10000 && n <= 99999) {
        int sum = 0;
        int rem = 0;
        // 10564
        // ----- Iteration 1 -----
        // 10564 % 10 = 4
        // 10564 / 10 = 1056
        // sum = 0 + 4
        // ----- Iteration 2 -----
        // 1056 % 10 = 6
        // 1056 / 10 = 105
        // sum = 4 + 6 = 10
        // ----- Iteration 3 -----
        // 105 % 10 = 5
        // 105 / 10 = 10
        // sum = 10 + 5 = 15
        // ----- Iteration 4 -----
        // 10 % 10 = 0
        // 10 / 10 = 1
        // sum = 15 + 0 = 15
        // ----- Iteration 5 -----
        // 1 % 10 = 1
        // 1 / 10 = 0
        // sum = 15 + 1 = 16
        
        while(n != 0) {
            rem = n % 10;
            n = n / 10;
            sum += rem;        
        }
        printf("%d", sum);
    }
    
    return 0;
}
