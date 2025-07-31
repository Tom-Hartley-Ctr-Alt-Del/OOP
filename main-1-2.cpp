#include <iostream>

extern double average(int[], int);

int main() {
    int array[5]={1,2,3,4,5};
    std::cout << "The average value in the array is: " << average(array, 5) << std::endl;
    return 0;
}