#include <iostream>

extern double average_mean(int[], int);

int main() {
    int array[5]={1,2,3,4,5};
    std::cout << "The average value in the array is: " << average_mean(array, 5) << std::endl;
    return 0;
}