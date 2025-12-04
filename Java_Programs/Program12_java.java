// 12.	Write a program to find the volume of a cylinder by using 'const' qualifier. The formula to find the volume of a cylinder is: 
//  	 	Volume = 𝝅𝑹𝟐𝒙𝑯     𝑻𝒉𝒆 𝒗𝒂𝒍𝒖𝒆 𝒐𝒇 𝝅 𝒊𝒔 𝟑.𝟏𝟒𝟏𝟕 

public class Program12_java {
    static final double PI = 3.1417;
    public void Program12(){
        System.out.println("12.\tWrite a program to find the volume of a cylinder by using 'const' qualifier.\n");
        
        // Input
        double R = 3.0, H = 4.0;

        // Processing
        double Volume = (double)PI * (R * R) * H;

        // Output
        System.out.println("Volume of cylinder: " + String.format("%.2f", Volume));
    }
}
