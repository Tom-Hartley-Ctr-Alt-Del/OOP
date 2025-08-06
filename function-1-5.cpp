#include <iostream>
using namespace std;
void print_summed(int *array1,int *array2) {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << (array1[i*3+j]+array2[i*3+j]) << " ";
        }
        cout << endl;
    }
}