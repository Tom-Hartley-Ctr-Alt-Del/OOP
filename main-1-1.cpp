#include "workshop.h"
#include <iostream>
using namespace std;

void changeValue(double* ptr) {
    *ptr=42.0;
    cout << *ptr << endl;
}

void printArray(double* arrayPtr, int n) {
    for (int i=0; i<n; i++) {
        cout << arrayPtr[i] << " ";
    }
    cout << endl;
}

double* dynamicArray(int size, double M) {
    double* doubleArray= new double[size];
    for (int j=0; j<size; j++) {
        doubleArray[j]=M;
    }
    return doubleArray;
}

double arrayMax(double* arrayValues, int m) {
    double max=arrayValues[0];
    for(int j=1; j<m; j++) {
        if (arrayValues[j]>max) {
            max=arrayValues[j];
        }
    }
    return max;
}

int main() {
    double doubleValue=0.0;
    char firstInitial='s';
    double* doubleValuePtr=&doubleValue;
    char* firstInitialPtr=&firstInitial;

    double array[4]={0,4,2,1};
    double* arrayPtr=&array[0];

    changeValue(doubleValuePtr);
    cout << *firstInitialPtr << endl;
    printArray(arrayPtr, 4);
    double *randomArray=dynamicArray(5, 1.234);
    printArray(randomArray, 5);
    cout << endl;
    arrayMax(randomArray, 5);
    delete[] randomArray;

    return 0;
}

