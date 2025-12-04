// 9. Write a program to find the maximum number from four numbers. 
#include <stdio.h>

void program9() {
    printf("9. Write a program to find the maximum number from four numbers.\n");
    // Processing
    int num1 = 5, num2 = 100, num3 = 2, num4 = 9;

    int max = num1;
    if (num2 > max){
        max = num2;
    }
    if (num3 > max){
        max = num3;
    }
    if (num4 > max){
        max = num4;
    }

    // Output
    printf("Maximum number is: %d\n", max);

    // return 0;
}
