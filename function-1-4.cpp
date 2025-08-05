#include <iostream>
using namespace std;

void print_scaled(int *array, int) {
    for (int i=1; i<=3; i++) {
        for (int j=0; j<3; j++) {
            cout << (array[(i-1)*3+j]*3) << " ";
        }
        cout << endl;
    }
}