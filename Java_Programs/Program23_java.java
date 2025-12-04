import java.util.Scanner;

public class Program23_java {
    public void Program23(){
        Scanner input = new Scanner(System.in);

        final double PI_23 = 3.14159;
        System.out.println("23.	Write a program to input the radius of a circle and calculate area & circumstance of the circle.\nFormula for Area of a circle = 𝝅𝑹^𝟐\nFormula for Circumference of a circle = 𝟐𝝅𝑹 \n");
        
        // Input
        double R, Area, Circumference;
        System.out.print("Enter radius: ");
        R = input.nextDouble();

        // Processing
        Area = PI_23 * (R * R);
        Circumference = 2 * PI_23 * R;

        // Output
        System.out.println("Area: " + String.format("%.4f", Area));
        System.out.println("Circumference: " + String.format("%.4f", Circumference));

    }
}
