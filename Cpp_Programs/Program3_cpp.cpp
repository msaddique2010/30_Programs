// 3. Write a program to assign two variables by assignment statement. Interchange the values and print the result on the screen. 
#include <iostream>
using namespace std;
void program3(){
    cout << "3. Write a program to assign two variables by assignment statement. Interchange the values and print the result on the screen.\n";

    // Processing
    int x = 5;
    int y = 10;
    int temp;

    temp = x;
    x = y;
    y = temp;

    // Output
    cout << x << endl;
    cout << y << endl;
    // return 0;
}
