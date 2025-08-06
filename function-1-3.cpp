#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
    int digits[10]={0};
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            digits[array[i][j]]++;
        }
    }

    for (int l=0; l<10; l++) {
        switch (l) {
        case 0:
        cout << "0:" << digits[l]; break;
        case 1:
        cout << "1:" << digits[l]; break;
        case 2:
        cout << "2:" << digits[l]; break;
        case 3:            
        cout << "3:" << digits[l]; break;
        case 4:
        cout << "4:" << digits[l]; break;
        case 5:            
        cout << "5:" << digits[l]; break;
        case 6:
        cout << "6:" << digits[l]; break;
        case 7:            
        cout << "7:" << digits[l]; break;
        case 8:
        cout << "8:" << digits[l]; break;
        case 9:
        cout << "9:" << digits[l]; break;
        }
        cout << ";";
    }
    cout << endl;
}