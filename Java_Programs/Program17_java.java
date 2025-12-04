// 17.	 Write a program to separate the integral and fractional parts of a 15.58971 real number and print the result on screen. 

public class Program17_java {
        public void Program17(){
            System.out.println("17.\t Write a program to separate the integral and fractional parts of a 15.58971 real number and print the result on screen.\n");

            // Processing
            double val = 15.58971;
            
            int integral = (int)val;
            double fractional = val - integral;

            // Output
            System.out.println("Integeral Part is: " + integral);
            System.out.println("Fractonal Part is: " + String.format("%.6f", fractional));

        }
}
