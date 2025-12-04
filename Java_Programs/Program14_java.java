// 14.	Write a program to convert millimeters into inches and print the result on screen. (Hint: 1 inch = 25.4 mm)
import java.util.Scanner;

public class Program14_java {
    public void Program14(){
        System.out.println("14.\tWrite a program to convert millimeters into inches and print the result on screen. (Hint: 1 inch = 25.4 mm)\n");
        Scanner input = new Scanner(System.in);

        // Input
        System.out.print("Enter length in millimeters: ");
        double mm = input.nextInt();

        // Processing
        double inches = mm / 25.4;

        // Output
        System.out.println("Length in inches: " + String.format("%.2f", inches));
    }
}
