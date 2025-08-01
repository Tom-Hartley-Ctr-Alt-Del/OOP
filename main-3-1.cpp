#include <iostream>

extern bool is_fanarray(int[], int );

int main() {
    int array[5]={3,2,5,2,3}; 
    std::cout << std::boolalpha << "The statement 'the array is a fan-array' is " << is_fanarray(array, 5) << std::endl;
    return 0;
}