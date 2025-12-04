// 15.	Write a program to interchange values of two variables.

public class Program15_java {
    public void Program15(){
        System.out.println("15.\tWrite a program to interchange values of two variables.\n");

        // Processing
        int x = 5, y = 10;
        
        int temp = x;
        x = y;
        y = temp;

        // Output
        System.out.println("x = " + x);
        System.out.println("y = " + y);
    }
}
