// 15.	Write a program to interchange values of two variables.
#include <stdio.h>
void program15() {
    printf("15.	Write a program to interchange values of two variables.\n");
    
    // Processing
    int x = 5, y = 10;
    
    int temp = x;
    x = y;
    y = temp;

    // Output
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    // return 0;
}
