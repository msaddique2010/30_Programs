// 30.	Write a program to test whether a given integer is odd or even using simple 'if' structure. 
#include <iostream>
using namespace std;

void program30() {
    cout << "30.	Write a program to test whether a given integer is odd or even using simple 'if' structure. ";
    // Processing
    int N = 2;

    if (N % 2 == 0) {
        cout << "N is Even" << endl;    // Output
    }

    if (N % 2 != 0) {
        cout << "N is Odd" << endl;     // Output
    }

    // return 0;
}
