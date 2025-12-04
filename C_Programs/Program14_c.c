// 14.	Write a program to convert millimeters into inches and print the result on screen. (Hint: 1 inch = 25.4 mm)
#include <stdio.h>
#include <conio.h>

void program14() {
    printf("14.	Write a program to convert millimeters into inches and print the result on screen. (Hint: 1 inch = 25.4 mm)\n");
    // Input
    float mm;
    printf("Enter length in millimeters: ");
    scanf("%f", &mm);

    // Processing
    float inches = mm / 25.4;

    // Output
    printf("Length in inches: %.2f\n", inches);
    
    // return 0;
}
