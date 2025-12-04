// 5.	Write a program to get two numbers. Calculate the sum and product of the numbers and then print the result on the screen. 
// package Program_5;

import java.util.Scanner;

public class Program5_java {
    public void Program5(){
        Scanner input = new Scanner(System.in);

        System.out.println("5. Write a program to get two numbers. Calculate the sum and product of the numbers and then print the result on the screen.\n");

        // Input
        int num1, num2, sum, product;
        System.out.print("Enter 1st Number: ");
        num1 = input.nextInt();

        System.out.print("Enter 2st Number: ");
        num2 = input.nextInt();

        // Processing
        sum = num1 + num2;
        product = num1 * num2;

        // Output 
        System.out.println("Sum is: " + sum);
        System.out.println("Product is: " + product);
        

    }
}
