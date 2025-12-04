// 18.	Write a program to assign values to variables 'vi' and 't' a compute the value of 's' by using the formula: 
//  	 	 	𝑺 = 𝒗𝒊 ∗ 𝒕 + ½ 𝒂𝒕𝟐 
#include <stdio.h>

void program18() {
    printf("18.	Write a program to assign values to variables 'vi' and 't' a compute the value of 's' by using the formula: \n𝑺 = 𝒗𝒊 ∗ 𝒕 + ½ 𝒂𝒕𝟐 \n");
    
    //Processing
    float vi = 5;
    float a = 2;
    float t = 3;

    float S = (vi * t) + ((1.0 / 2.0) * a * (t * t));

    // Output
    printf("S = %f\n", S);
    // return 0;
}