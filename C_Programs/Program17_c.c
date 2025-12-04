// 17.	 Write a program to separate the integral and fractional parts of a 15.58971 real number and print the result on screen. 
#include <stdio.h>
#include <conio.h>

void program17() {
    printf("17.	 Write a program to separate the integral and fractional parts of a 15.58971 real number and print the result on screen. \n");
    // Processing
    float val = 15.58971;

    int integral = (int) val;
    float fractional = val - integral;
    
    // Output
    printf("Integral part: %d\n", integral);
    printf("Fractional part: %.5f\n", fractional);

    // return 0;
}
