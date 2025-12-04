#include <iostream>

using namespace std;
int main(){
    int r1 = 2, c1 = 2;
    int r2 = 2, c2 = 2;

    int m1[2][2] = {
        {1, 2},
        {3, 4}
    };

    int m2[2][2] = {
        {5, 6},
        {7, 8}
    };

    int result[2][2];

    if (r1 == r2 && c1 == c2){
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                result[i][j] = m1[i][j] - m2[i][j];
            }
        }
    }
    else{
        cout << "Addition cann't be done..";
    }

    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}