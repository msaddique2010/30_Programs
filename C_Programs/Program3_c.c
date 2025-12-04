// 3.	Write a program to assign two variables by assignment statement. Interchange the values and print the result on the screen. 
#include <stdio.h>
#include <conio.h>
void program3(){
    printf("3.	Write a program to assign two variables by assignment statement. Interchange the values and print the result on the screen. \n");
    
    // Processing
    int x = 5;
    int y = 10;
    int temp;

    temp = x;
    x = y;
    y = temp;

    // Output
    printf("%d\n", x);
    printf("%d\n", y);
    // return 0;
}
