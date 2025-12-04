import java.util.Scanner;

public class Program22_java {
    public void Program22(){
        Scanner input = new Scanner(System.in);
        System.out.println("22.	Write a program to input the name, age, height and gender of the student and prints the data of student on screen.");

        String name, gender;
        int age;
        double height;

        // Input
        System.out.print("Enter Name: ");
        name = input.nextLine();

        System.out.print("Enter Age: ");
        age = input.nextInt();

        System.out.print("Enter Height (in feet): ");
        height = input.nextDouble();

        input.nextLine();  // consume the leftover newline
        System.out.print("Enter Gender: ");
        gender = input.nextLine();

        // Output
        System.out.println("\nYour introduction is given below:");
        System.out.println("Name: "+ name +"\nAge: " + age + " years\nGender: "+ gender +"\nHeight: " + height);

    }
}
