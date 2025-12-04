// 19.	Write a program to assign your age in a variable and find the age in months and days.
#include <stdio.h>
#include<conio.h>

void program19(){
    printf("19.	Write a program to assign your age in a variable and find the age in months and days.\n");
    
    // Processing
    int age = 20;

    int months = age * 12;
    int days = age * 365;

    // Output
    printf("Age in months: %d\n", months);
    printf("Age in days: %d\n", days);

    // return 0;
}
