// 28.	Write a program to input values into variables a, b and c. Compute the value of 'disc' by using formula: disc = b^2 - 4ac 

public class Program28_java {
    public void Program28() {
        System.out.println("28.\tWrite a program to input values into variables a, b and c. Compute the value of 'disc' by using formula: disc = b^2 - 4ac \n");
        java.util.Scanner input = new java.util.Scanner(System.in);

        System.out.print("Enter value of a: ");
        double a = input.nextDouble();

        System.out.print("Enter value of b: ");
        double b = input.nextDouble();

        System.out.print("Enter value of c: ");
        double c = input.nextDouble();

        double disc = (b * b) - (4 * a * c);

        System.out.println("The value of discriminant (disc) is: " + disc);

    }
}