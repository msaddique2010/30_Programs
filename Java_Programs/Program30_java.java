// 30.	Write a program to test whether a given integer is odd or even using simple 'if' structure. 

public class Program30_java {
    public void Program30(){
        System.out.println("30.	Write a program to test whether a given integer is odd or even using simple 'if' structure. \n");
        // Processing
        int N = 2;

        if (N % 2 == 0) {
            System.out.println(N + " is Even");     // Output
        }

        if (N % 2 != 0) {
            System.out.println(N + " is Odd");      // Output
        }
    }
}
