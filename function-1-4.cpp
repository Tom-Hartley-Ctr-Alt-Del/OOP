#include <iostream>
using namespace std;

void print_scaled(int *array, int scale) {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << array[i*3+j]*scale << " ";
        }
        cout << endl;
    }
}