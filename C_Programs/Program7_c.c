// 7.	Write a program to get the Roll No. of a student and marks obtained in three subject Programming Fundamentals, Introduction to Computing and Computer Graphics. Calculate the Total and Average. Each subject has a maximum of 100 marks.
#include <stdio.h>
#include <conio.h>

void program7(){
    printf("7.	Write a program to get the Roll No. of a student and marks obtained in three subject Programming Fundamentals, Introduction to Computing and Computer Graphics. Calculate the Total and Average. Each subject has a maximum of 100 marks.\n");
    // Input
    char rollnumber[20];
    printf("Enter your roll number: ");
    scanf("%s", &rollnumber);

    int PF;
    printf("Enter your PF marks: ");
    scanf("%d", &PF);

    int IC;
    printf("Enter your IC marks: ");
    scanf("%d", &IC);

    int CG;
    printf("Enter your CG marks: ");
    scanf("%d", &CG);

    // Processing
    int total;
    float average;
    total = PF + IC + CG;
    average = total / 3.0;

    // Output
    printf("Total marks: %d\n", total);
    printf("Average: %.2f", average);
    // return 0;
}
