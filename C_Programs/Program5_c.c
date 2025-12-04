// 5.	Write a program to get two numbers. Calculate the sum and product of the numbers and then print the result on the screen. 
#include <stdio.h>
#include <conio.h>

void program5(){
    printf("5.	Write a program to get two numbers. Calculate the sum and product of the numbers and then print the result on the screen. \n");
    
    // Input
    int num1, num2, sum, product;
    printf("Enter 1st Number: ");
    scanf("%d", &num1);

    printf("Enter 2st Number: ");
    scanf("%d", &num2);

    // Processing
    sum = num1 + num2;
    product = num1 * num2;

    // Output 
    printf("Sum is: %d\n", sum);
    printf("Product is: %d\n", product);
    
    // return 0;
}
