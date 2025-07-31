#include <iostream>

extern int array_sum(int[], int);

int main() {
    int array[6] = {1,2,3,4,5};
    std::cout << "The total of all numbers in the array is " << array_sum(array, -1) << std::endl;
    return 0;
}