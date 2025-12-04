// 25. Write a program to input the values of three sides of a triangle and calculate its area using the formula:  
// 	 	Area = √𝒔(𝒔 − 𝒂)(𝒔 − 𝒃)(𝒔 − 𝒄)   	 	where s = (a + b + c)/2 
import java.util.Scanner;

public class Program25_java {
    public void Program25(){
        System.out.println("25. Write a program to input the values of three sides of a triangle and calculate its area");
        Scanner input = new Scanner(System.in);

        double a, b, c, s, Area;

        // Input
        System.out.print("Enter side a: ");
        a = input.nextDouble();

        System.out.print("Enter side b: ");
        b = input.nextDouble();

        System.out.print("Enter side c: ");
        c = input.nextDouble();


        // Processing
        s = (a + b + c) / 2;
        Area = Math.sqrt(s * (s - a) * (s - b) * (s - c));

        // Output
        System.out.println("Area = " + Area);

    }
}
