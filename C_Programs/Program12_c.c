// 12.	Write a program to find the volume of a cylinder by using 'const' qualifier. The formula to find the volume of a cylinder is: 
//  	 	Volume = 𝝅𝑹𝟐𝒙𝑯     𝑻𝒉𝒆 𝒗𝒂𝒍𝒖𝒆 𝒐𝒇 𝝅 𝒊𝒔 𝟑.𝟏𝟒𝟏𝟕 
#include <stdio.h>
#include <conio.h>

#define PI 3.1417

void program12() {
    printf("12.	Write a program to find the volume of a cylinder by using 'const' qualifier. The formula to find the volume of a cylinder is: \nVolume = PI*R^2*H\n");
    // Processing
    float R = 3.0;
    float H = 4.0;

    float Volume = PI * (R * R) * H;

    // Output
    printf("Volume of cylinder: %.2f\n", Volume);
    // return 0;
}
