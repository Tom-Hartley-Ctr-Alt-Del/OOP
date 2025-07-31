#include <iostream>

extern int sum_two_arrays(int[], int[], int);

int main() {
    int array1[2]={1,9};
    int array2[2]={1,2};
    std::cout << "The sum of both arrays is: " << sum_two_arrays(array1, array2, 2) << std::endl;
    return 0;
}