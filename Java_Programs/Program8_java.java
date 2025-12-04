// 8. Write a program to get temperature in Fahrenheit. Convert the temperature to Celsius degrees by using the formula. 
// C = 5/9(f – 32)
// package Program_8;

import java.util.Scanner;

public class Program8_java{
    public void Program8(){
        System.out.println("8. Write a program to get temperature in Fahrenheit. Convert the temperature to Celsius degrees by using the formula.\n");
        Scanner input = new Scanner(System.in);

        // Input
        System.out.print("Enter temperature in Fahrenheit: ");
        double Fahrenheit = input.nextDouble();
         
        // Processing
        double Celsius = (5.0/9.0) * (Fahrenheit - 32.0);
        
        // Output
        System.out.println("Temperatue in Celsius is: " + String.format("%.2f", Celsius));

    }
}