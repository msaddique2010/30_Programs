// 24. Write a program to input marks of five subjects of a student. Calculate the Total and Average marks. (Each subject has weight of 100 marks). 
import java.util.Scanner;

public class Program24_java {
    public void Program24(){
        System.out.println("24. Write a program to input marks of five subjects of a student. Calculate the Total and Average marks. (Each subject has weight of 100 marks).\n");

        Scanner input = new Scanner(System.in);
        
        double subject1, subject2, subject3, subject4, subject5;
        double Total, Average;

        // Input
        System.out.print("Enter subject1 marks: ");
        subject1 = input.nextInt();
        
        System.out.print("Enter subject2 marks: ");
        subject2 = input.nextInt();
        
        System.out.print("Enter subject3 marks: ");
        subject3 = input.nextInt();
        
        System.out.print("Enter subject4 marks: ");
        subject4 = input.nextInt();
        
        System.out.print("Enter subject5 marks: ");
        subject5 = input.nextInt();
        
        // Processing
        Total = subject1 + subject2 + subject3 + subject4 + subject5;
        Average = Total / 5;

        // Output
        System.out.println("Total = " + Total);
        System.out.println("Average = " + Average);

    }
}
