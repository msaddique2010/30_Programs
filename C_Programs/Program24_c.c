// 24. Write a program to input marks of five subjects of a student. Calculate the Total and Average marks. (Each subject has weight of 100 marks). 
#include <stdio.h>

void program24() {
    printf("24. Write a program to input marks of five subjects of a student. Calculate the Total and Average marks. (Each subject has weight of 100 marks). \n");

    // Input
    float subject1, subject2, subject3, subject4, subject5;
    float Total, Average;
    printf("Enter subject1 marks: ");
    scanf("%f", &subject1);
    printf("Enter subject2 marks: ");
    scanf("%f", &subject2);
    printf("Enter subject3 marks: ");
    scanf("%f", &subject3);
    printf("Enter subject4 marks: ");
    scanf("%f", &subject4);
    printf("Enter subject5 marks: ");
    scanf("%f", &subject5);

    // Processing
    Total = subject1 + subject2 + subject3 + subject4 + subject5;
    Average = Total / 5;

    // Output
    printf("Total = %.2f\n", Total);
    printf("Average = %.2f\n", Average);

    // return 0;
}
