#include <iostream>

extern int array_sum(int[], int);

int main() {
    int array[3] = {1,2,3};
    std::cout << "The total of all numbers in the array is " << array_sum(array, 3) << std::endl;
    return 0;
}
