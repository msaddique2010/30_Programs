// Write a program using define directive to find the area of a circle. The formula to find the area of a circle is:
//  	Area =πR^2      The value of π is 3.1417
#include <stdio.h>
#define PI_13 3.1417  // Constant definition

void program13() {
    printf("Write a program using define directive to find the area of a circle. The formula to find the area of a circle is: \nArea =πR^2\tThe value of π is 3.1417\n");
    // Processing
    float radius = 3;

    float area = PI_13 * (radius * radius);

    // Output
    printf("Area of circle: %f\n", area);
    // return 0;
}
