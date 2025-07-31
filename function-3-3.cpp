#include <iostream>
double weighted_average(int array[], int n) {
    if (n<1) {
        return 0;
    }
    double weighted_average=0;
    for (int i=0; i<n; i++) {
        int target_number=array[i];
        int frequency=0;
        for (int j=0; j<n; j++) {
            if (target_number==array[j]) {
                frequency++;
            }
        }
        weighted_average=weighted_average+frequency*target_number;
    }
    weighted_average=weighted_average/n;
    return weighted_average;
}