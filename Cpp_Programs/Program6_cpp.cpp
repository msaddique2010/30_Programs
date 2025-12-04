// 6.	Write a program to get age (in years) of a person. Calculate the age in months and print the age in months. 

#include <iostream>
#include <string>
using namespace std;
void program6(){
    cout << "6.	Write a program to get age (in years) of a person. Calculate the age in months and print the age in months.\n";

    // Input
    int Age, months;

    cout << "Enter your age: ";
    cin >> Age;

    // Processing
    months = Age * 12;
    // Output
    cout << "You are " << months << " months old.";
    // return 0;
}
