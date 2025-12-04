// 30.	Write a program to test whether a given integer is odd or even using simple 'if' structure. 
#include <stdio.h>

void program30() {
    printf("30.	Write a program to test whether a given integer is odd or even using simple 'if' structure.\n ");

    // Processing
    int N = 2;

    if (N % 2 == 0) {
        printf("N is Even\n");  // Output
    }

    if (N % 2 != 0) {
        printf("N is Odd\n");   // Output
    }

    // return 0;
}
