// 10.	Write a program to convert 2.5 miles into kilometers and print the result on screen. (Hint: 1 mile = 1.609 kilometers) 
#include <stdio.h>
#include <conio.h>

void program10() {
    printf("10.	Write a program to convert 2.5 miles into kilometers and print the result on screen. (Hint: 1 mile = 1.609 kilometers) \n");
    // Processing
    float miles = 2.5;

    float km = miles * 1.609;

    // Output
    printf("Distance in kilometers: %.2f km\n", km);
    // return 0;
}
