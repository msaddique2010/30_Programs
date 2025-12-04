// 9. Write a program to find the maximum number from four numbers. 
// package Program_9;

import java.util.Scanner;

public class Program9_java {
    public void Program9(){
        System.out.println("9. Write a program to find the maximum number from four numbers.\n");
        Scanner input = new Scanner(System.in);

        // Input
        System.out.print("Enter 1st number: ");
        int num1 = input.nextInt();

        System.out.print("Enter 2st number: ");
        int num2 = input.nextInt();

        System.out.print("Enter 3st number: ");
        int num3 = input.nextInt();

        System.out.print("Enter 4st number: ");
        int num4 = input.nextInt();

        // Processing
        int max = num1;

        if (num2 > max){
            max = num2;
        }

        if (num3 > max){
            max = num3;
        }

        if (num4 > max){
            max = num4;
        }

        // Output
        System.out.println("Maximum number among "+ num1 +", " + num2 +", "+ num3 +", "+ num4 + " is: " + max);
    }
}
