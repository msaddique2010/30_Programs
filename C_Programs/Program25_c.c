// Write a program to input the values of three sides of a triangle and calculate its area using the formula:  
// 	 	Area = √𝒔(𝒔 − 𝒂)(𝒔 − 𝒃)(𝒔 − 𝒄)   	 	where s = (a + b + c)/2 
#include <stdio.h>
#include <math.h>
void program25() {
    printf("Write a program to input the values of three sides of a triangle and calculate its area using the formula:\nArea = √𝒔(𝒔 − 𝒂)(𝒔 − 𝒃)(𝒔 − 𝒄)\twhere s = (a + b + c)/2 \n");

    // Input
    float a, b, c, s, Area;
    printf("Enter side a: ");
    scanf("%f", &a);
    printf("Enter side b: ");
    scanf("%f", &b);
    printf("Enter side c: ");
    scanf("%f", &c);

    // Processing
    s = (a + b + c) / 2;
    Area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output
    printf("Area = %.2f\n", Area);

    // return 0;
}
