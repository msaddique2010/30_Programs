#include <iostream>

#include "./Program1_cpp.cpp"
#include "./Program2_cpp.cpp"
#include "./Program3_cpp.cpp"
#include "./Program4_cpp.cpp"
#include "./Program5_cpp.cpp"
#include "./Program6_cpp.cpp"
#include "./Program7_cpp.cpp"
#include "./Program8_cpp.cpp"
#include "./Program9_cpp.cpp"
#include "./Program10_cpp.cpp"
#include "./Program11_cpp.cpp"
#include "./Program12_cpp.cpp"
#include "./Program13_cpp.cpp"
#include "./Program14_cpp.cpp"
#include "./Program15_cpp.cpp"
#include "./Program16_cpp.cpp"
#include "./Program17_cpp.cpp"
#include "./Program18_cpp.cpp"
#include "./Program19_cpp.cpp"
#include "./Program20_cpp.cpp"
#include "./Program21_cpp.cpp"
#include "./Program22_cpp.cpp"
#include "./Program23_cpp.cpp"
#include "./Program24_cpp.cpp"
#include "./Program25_cpp.cpp"
#include "./Program26_cpp.cpp"
#include "./Program27_cpp.cpp"
#include "./Program28_cpp.cpp"
#include "./Program29_cpp.cpp"
#include "./Program30_cpp.cpp"

using namespace std;

int main() {
    int choice;

    cout << "----------------===== PROGRAM RUNNER =====----------------\n";

    while (true) {
        cout << "\nEnter program number (1 - 30) or 0 to exit: ";
        cin >> choice;

        if (!cin) {  
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Enter a number.\n";
            continue;
        }

        if (choice == 0) {
            cout << "Exiting...\n";
            break;
        }

        switch (choice) {
            case 1: 
                program1(); 
                break;
            case 2: 
                program2(); 
                break;
            case 3: 
                program3(); 
                break;
            case 4: 
                program4(); 
                break;
            case 5: 
                program5(); 
                break;
            case 6: 
                program6(); 
                break;
            case 7: 
                program7(); 
                break;
            case 8: 
                program8(); 
                break;
            case 9: 
                program9(); 
                break;
            case 10: 
                program10(); 
                break;
            case 11: 
                program11(); 
                break;
            case 12: 
                program12(); 
                break;
            case 13: 
                program13(); 
                break;
            case 14: 
                program14(); 
                break;
            case 15: 
                program15(); 
                break;
            case 16: 
                program16(); 
                break;
            case 17: 
                program17(); 
                break;
            case 18: 
                program18(); 
                break;
            case 19: 
                program19(); 
                break;
            case 20: 
                program20(); 
                break;
            case 21: 
                program21(); 
                break;
            case 22: 
                program22(); 
                break;
            case 23: 
                program23(); 
                break;
            case 24: 
                program24(); 
                break;
            case 25: 
                program25(); 
                break;
            case 26: 
                program26(); 
                break;
            case 27: 
                program27(); 
                break;
            case 28: 
                program28(); 
                break;
            case 29: 
                program29(); 
                break;
            case 30: 
                program30(); 
                break;
            
            default:
                cout << "Program " << choice << " not found!\n";
                break;
        }
    }

    return 0;
}
