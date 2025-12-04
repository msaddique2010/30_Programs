// 6.	Write a program to get age (in years) of a person. Calculate the age in months and print the age in months. 
#include <stdio.h>
#include <conio.h>

void program6(){
    printf("6.	Write a program to get age (in years) of a person. Calculate the age in months and print the age in months. \n");
    // Input
    int Age, months;

    printf("Enter your age: ");
    scanf("%d", &Age);

    // Processing
    months = Age * 12;
    
    // Output
    printf("You are %d months old.\n", months);
    // return 0;
}
