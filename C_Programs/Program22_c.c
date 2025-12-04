// 22.	Write a program to input the name, age, height and gender of the student and prints the data of student on screen. 
#include <stdio.h>
void program22() {
    printf("22.	Write a program to input the name, age, height and gender of the student and prints the data of student on screen. \n");
    char name[50], gender[10];
    int age;
    float height;

    // Input
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Height (in feet): ");
    scanf("%f", &height);
    printf("Enter Gender: ");
    scanf("%s", gender);

    // Output
    printf("Your introduction is given below.");
    printf("Name: %s\nAge: %d years\nGender: %s\nHeight: %.2f feet.\n", name, age, gender, height);

    // return 0;
}
