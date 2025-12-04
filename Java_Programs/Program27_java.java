// 27.	Write a program to input time in hours, minutes and seconds. Convert time into seconds and print the result on screen.

import java.util.Scanner;

public class Program27_java {
    public void Program27(){
        System.out.println("27.\tWrite a program to input time in hours, minutes and seconds. Convert time into seconds and print the result on screen.\n");
        Scanner input = new Scanner(System.in);

        int Hours, Minutes, Seconds;
        int time_in_seconds;

        // Input
        System.out.print("Enter Hours: ");
        Hours = input.nextInt();

        System.out.print("Enter Minutes: ");
        Minutes = input.nextInt();

        System.out.print("Enter Seconds: ");
        Seconds = input.nextInt();

        // Processing
        time_in_seconds = (Hours * 60 * 60) + (Minutes * 60) + Seconds;

        // Output
        System.out.println("Time in seconds = " + time_in_seconds);

    }
}
