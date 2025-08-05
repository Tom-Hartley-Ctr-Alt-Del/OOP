#include <iostream>
using namespace std;
void count_digits(int *array) {
    int digits[10]= {0};
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            digits[array[i*4+j]]++;
        }
    }
    
    for (int k=0; k<10; k++) {
        switch (k) {
        case 0:
        cout << digits[k] << ":number of zeros"; break;
        case 1:
        cout << digits[k] << ":number of ones"; break;
        case 2:
        cout << digits[k] << ":number of twos"; break;
        case 3:
        cout << digits[k] << ":number of threes"; break;
        case 4:
        cout << digits[k] << ":number of fours"; break;
        case 5:
        cout << digits[k] << ":number of fives"; break;
        case 6:
        cout << digits[k] << ":number of sixes"; break;
        case 7:
        cout << digits[k] << ":number of sevens"; break;
        case 8:
        cout << digits[k] << ":number of eights"; break;
        case 9:
        cout << digits[k] << ":number of nines"; break;
    }
    cout << ";";
    }
    cout << endl;
}