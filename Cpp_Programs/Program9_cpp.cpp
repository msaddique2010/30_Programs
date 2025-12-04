// 9. Write a program to find the maximum number from four numbers. 
#include <iostream>
#include <string>

using namespace std;

void program9() {

    cout << "9. Write a program to find the maximum number from four numbers.\n";
    // Processing
    int num1 = 5, num2 = 100, num3 = 2, num4 = 9;

    int max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;
    if (num4 > max)
        max = num4;

    // Output
    cout << "Maximum number is: " << max << endl;
    // return 0;
}
