// 23.	Write a program to input the radius of a circle and calculate area & circumstance of the circle. 
// Formula for Area of a circle = 𝝅𝑹𝟐 
// Formula for Circumference of a circle = 𝟐𝝅𝑹 
#include <stdio.h>
#define PI_23 3.14159

void program23() {
    printf("23.	Write a program to input the radius of a circle and calculate area & circumstance of the circle.\nFormula for Area of a circle = 𝝅𝑹^𝟐\nFormula for Circumference of a circle = 𝟐𝝅𝑹 \n");
    // Input
    float R, Area, Circumference;
    printf("Enter radius: ");
    scanf("%f", &R);

    // Processing
    Area = PI_23 * (R * R);
    Circumference = 2 * PI_23 * R;

    // Output
    printf("Area: %.4f\n", Area);
    printf("Circumference: %.4f\n", Circumference);

    // return 0;
}
