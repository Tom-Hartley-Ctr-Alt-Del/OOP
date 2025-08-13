#include "workshop.h"
#include <iostream>
using namespace std;

extern void changeValue(double*); void printArray(double* arrayPtr, int n); double* dynamicArray(int size, double M); double arrayMax(double* arrayValues, int m);

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

