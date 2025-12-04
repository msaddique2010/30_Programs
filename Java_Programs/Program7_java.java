// 7.	Write a program to get the Roll No. of a student and marks obtained in three subject Programming Fundamentals, Introduction to Computing and Computer Graphics. Calculate the Total and Average. Each subject has a maximum of 100 marks.
// package Program_7;

import java.util.Scanner;

public class Program7_java {
    public void Program7(){
        System.out.println("7.\tWrite a program to get the Roll No. of a student and marks obtained in three subject Programming Fundamentals, Introduction to Computing and Computer Graphics. Calculate the Total and Average. Each subject has a maximum of 100 marks.");
        Scanner input = new Scanner(System.in);
        
        // Input
        System.out.print("Enter your roll number: ");
        String rollno = input.nextLine();

        System.out.print("Enter marks of PF: ");
        int pf = input.nextInt();

        System.out.print("Enter marks of IC: ");
        int ic = input.nextInt();

        System.out.print("Enter marks of CG: ");
        int cg = input.nextInt();

        // Processing
        int total = pf + ic + cg;
        double avg = total / 3.0;

        // Output
        System.out.println("Against Roll Number: " + rollno);
        System.out.println("Total Marks are: " + total);
        System.out.println("Average is: " + avg);

    }
}
