// 3.	Write a program to assign two variables by assignment statement. Interchange the values and print the result on the screen. 
// package Program_3;

public class Program3_java {
    public void Program3(){
        System.out.println("3.\tWrite a program to assign two variables by assignment statement. Interchange the values and print the result on the screen.\n");

        // Processing
        int x = 5;
        int y = 10;
        int temp;

        temp = x;
        x = y;
        y = temp;

        // Output
        System.out.println("Inchanged Value of x is: " + x);
        System.out.println("Inchanged Value of y is: " + y);

    }
}
