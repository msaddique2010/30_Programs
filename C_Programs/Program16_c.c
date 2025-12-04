// 16.	Write a program to assign a value 3 to "int" type variables a, b and c using multiple assignment statement. Calculate the product of these numbers.
#include <stdio.h>

void program16() {
    printf("16.	Write a program to assign a value 3 to \"int\" type variables a, b and c using multiple assignment statement. Calculate the product of these numbers.\n");
    
    // Processing
    int a, b, c;
    a = b = c = 3;
    
    int product = a * b * c;

    // Output
    printf("Product = %d\n", product);
    // return 0;
}
