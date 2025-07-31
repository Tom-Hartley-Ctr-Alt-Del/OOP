#include <iostream>

extern int min_element(int[], int);

int main() {
    int array[5]={5,2,1,4,7};
    std::cout << "The minimum value in the array is " << min_element(array, 5) << std::endl;
    return 0;
}