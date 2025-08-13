#include <iostream>
using namespace std;

void changeValue(double* ptr) {
    *ptr=42.0;
    cout << *ptr << endl;
}