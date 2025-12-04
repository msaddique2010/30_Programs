// 12.	Write a program to find the volume of a cylinder by using 'const' qualifier. 

#include <iostream>
#include <string>

using namespace std;

void program12() {
    cout << "12. Write a program to find the volume of a cylinder by using 'const' qualifier.\n";

    // Processing
    const float PI = 3.1417;
    double R = 3.0, H = 4.0;

    double Volume = PI * (R * R) * H;

    // Output
    cout << "Volume of cylinder: " << Volume << endl;
    // return 0;
}
