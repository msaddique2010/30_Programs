// 27.	Write a program to input time in hours, minutes and seconds. Convert time into seconds and print the result on screen. 
#include <stdio.h>

void program27() {
    printf("27.	Write a program to input time in hours, minutes and seconds. Convert time into seconds and print the result on screen. \n");

    // Input
    int Hours, Minutes, Seconds;
    int time_in_seconds;
    printf("Enter Hours: ");
    scanf("%d", &Hours);
    printf("Enter Minutes: ");
    scanf("%d", &Minutes);
    printf("Enter Seconds: ");
    scanf("%d", &Seconds);

    // Processing
    time_in_seconds = (Hours * 60 * 60) + (Minutes * 60) + Seconds;

    // Output
    printf("Time in seconds = %d\n", time_in_seconds);

    // return 0;
}
