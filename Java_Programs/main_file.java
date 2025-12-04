import java.util.Scanner;

public class main_file {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        Program1_java p1 = new Program1_java();
        Program2_java p2 = new Program2_java();
        Program3_java p3 = new Program3_java();
        Program4_java p4 = new Program4_java();
        Program5_java p5 = new Program5_java();
        Program6_java p6 = new Program6_java();
        Program7_java p7 = new Program7_java();
        Program8_java p8 = new Program8_java();
        Program9_java p9 = new Program9_java();
        Program10_java p10 = new Program10_java();
        Program11_java p11 = new Program11_java();
        Program12_java p12 = new Program12_java();
        Program13_java p13 = new Program13_java();
        Program14_java p14 = new Program14_java();
        Program15_java p15 = new Program15_java();
        Program16_java p16 = new Program16_java();
        Program17_java p17 = new Program17_java();
        Program18_java p18 = new Program18_java();
        Program19_java p19 = new Program19_java();
        Program20_java p20 = new Program20_java();
        Program21_java p21 = new Program21_java();
        Program22_java p22 = new Program22_java();
        Program23_java p23 = new Program23_java();
        Program24_java p24 = new Program24_java();
        Program25_java p25 = new Program25_java();
        Program26_java p26 = new Program26_java();
        Program27_java p27 = new Program27_java();
        Program28_java p28 = new Program28_java();
        Program29_java p29 = new Program29_java();
        Program30_java p30 = new Program30_java();

        while (true) {
            System.out.print("Enter program number (1-30), or 0 to exit: ");
            int choice = sc.nextInt();

            if (choice == 0) {
                System.out.println("Exiting program...");
                break;
            }

            switch (choice) {
                case 1: p1.Program1(); break;
                case 2: p2.Program2(); break;
                case 3: p3.Program3(); break;
                case 4: p4.Program4(); break;
                case 5: p5.Program5(); break;
                case 6: p6.Program6(); break;
                case 7: p7.Program7(); break;
                case 8: p8.Program8(); break;
                case 9: p9.Program9(); break;
                case 10: p10.Program10(); break;
                case 11: p11.Program11(); break;
                case 12: p12.Program12(); break;
                case 13: p13.Program13(); break;
                case 14: p14.Program14(); break;
                case 15: p15.Program15(); break;
                case 16: p16.Program16(); break;
                case 17: p17.Program17(); break;
                case 18: p18.Program18(); break;
                case 19: p19.Program19(); break;
                case 20: p20.Program20(); break;
                case 21: p21.Program21(); break;
                case 22: p22.Program22(); break;
                case 23: p23.Program23(); break;
                case 24: p24.Program24(); break;
                case 25: p25.Program25(); break;
                case 26: p26.Program26(); break;
                case 27: p27.Program27(); break;
                case 28: p28.Program28(); break;
                case 29: p29.Program29(); break;
                case 30: p30.Program30(); break;
 
                default:
                    System.out.println("Invalid input. Enter a number between 1 and 30.");
            }

            System.out.println();
        }

        sc.close();
    }
}
