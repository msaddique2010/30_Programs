// 28.	Write a program to input values into variables a, b and c. Compute the value of 'disc' by using formula: disc = b2 - 4ac 
#include <stdio.h>
void program28() {
    printf("28.	Write a program to input values into variables a, b and c. Compute the value of 'disc' by using formula: disc = b2 - 4ac \n");
    // Input
    float a, b, c, Disc;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    // Processing
    Disc = (b * b) - 4 * (a * c);

    // Output
    printf("Discriminant = %.2f\n", Disc);

    // return 0;
}
