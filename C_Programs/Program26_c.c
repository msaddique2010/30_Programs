// 26.	Write a program to convert 12000 rupees into dollars (1 dollar = Rs. 60) 
#include <stdio.h>

void program26() {
    printf("26.	Write a program to convert 12000 rupees into dollars (1 dollar = Rs. 60) \n");
    
    // Processing
    float Rupees, Dollar;
    Rupees = 12000;

    Dollar = Rupees / 60;

    // Output
    printf("Dollar = %.2f\n", Dollar);

    // return 0;
}
