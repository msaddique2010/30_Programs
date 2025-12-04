// 20.	Write a program to print the output as given under by using escape sequence.    
//  	 	 	 	C:\Windows> 
//  	 	 	 	'P'     'A'     'K' 
//  	 	 	 	 "Pakistan" 
#include <iostream>
using namespace std;

void program20() {
    cout << "20. Write a program to print the output as given below by using escape sequence\n";

    // Processing
    string text = "C:\\Windows>\n\'P\'\t\'A\'\t\'K\'\n\"Pakistan\"";

    // Output
    cout << "Output: \n";
    cout << text;
    // return 0;
}
