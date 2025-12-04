// 8. Write a program to get temperature in Fahrenheit. Convert the temperature to Celsius degrees by using the formula. 
// C = 5/9(f – 32)

#include <stdio.h>

void program8(){
    printf("8. Write a program to get temperature in Fahrenheit. Convert the temperature to Celsius degrees by using the formula. \nC = 5/9(f – 32)\n");

    // Input
    float Fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    // Processing
    float Celsius;
    Celsius = (5.0/9.0) * (Fahrenheit - 32.0); 
    
    // Output
    printf("Temeratue in Celsius is: %.2f", Celsius);
    // return 0;
}