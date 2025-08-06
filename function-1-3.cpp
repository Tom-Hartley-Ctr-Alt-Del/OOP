#include <iostream>
using namespace std;

void count_digits(int *array) {
    int digits[10]={0};
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            digits[array[i*4+j]]++;
        }
    }

    for (int l=0; l<10; l++) {
        switch (l) {
        case 0:
        cout << digits[l] << ":number of zeros"; break;
        case 1:
        cout << digits[l] << ":number of ones"; break;
        case 2:
        cout << digits[l] << ":number of twos"; break;
        case 3:            
        cout << digits[l] << ":number of threes"; break;
        case 4:
        cout << digits[l] << ":number of fours"; break;
        case 5:            
        cout << digits[l] << ":number of fives"; break;
        case 6:
        cout << digits[l] << ":numbner of sixes"; break;
        case 7:            
        cout << digits[l] << ":number of sevens"; break;
        case 8:
        cout << digits[l] << ":number of eights"; break;
        case 9:
        cout << digits[l] << ":number of nines"; break;
        }
        cout << ";";
    }
    cout << endl;
}   