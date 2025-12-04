// 16.	Write a program to assign a value 3 to "int" type variables a, b and c using multiple assignment statement. Calculate the product of these numbers.

public class Program16_java{
    public void Program16(){
        System.out.println("16. Write a program to assign a value 3 to \"int\" type variables a, b and c using multiple assignment statement. Calculate the product of these numbers.");
    
        // Processing
        int a, b, c;
        a = b = c = 3;
        
        int product = a * b * c;

        // Output
        System.out.println("Product of " + a + " " +b + " " + c + " is: " + product);
    }
}