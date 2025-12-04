// 6.	Write a program to get age (in years) of a person. Calculate the age in months and print the age in months. 
// package Program_6;

import java.util.Scanner;

public class Program6_java {
    public void Program6(){
        System.out.println("6. Write a program to get age (in years) of a person. Calculate the age in months and print the age in months.\n");
        Scanner input = new Scanner(System.in);

        // Input
        System.out.print("Enter your age in years: ");
        int age = input.nextInt();

        // Processing
        int months = age * 12;

        // Output
        System.out.println("You are " + months + " months old.");

    }
}
