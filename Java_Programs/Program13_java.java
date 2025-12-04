// 13. Write a program using define directive to find the area of a circle. The formula to find the area of a circle is:
//  	Area =πR^2      The value of π is 3.1417

public class Program13_java {
    
    public void Program13() {
        final double PI = 3.1417;
        System.out.println("13. Write a program using define directive to find the area of a circle.\n");

        // Processing
        double R = 5.0;
        double area = PI * R * R;

        // Output
        System.out.println("Area of the circle: " + String.format("%.2f", area));
        
    }
}
