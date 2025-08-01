#include <iostream>

extern bool is_descending(int[], int);

int main() {
    int array[5]={1,2,3,4,0};
    std::cout << std::boolalpha << "Saying that the array is in ascending order would be " << is_descending(array, 5) << std::endl;
    return 0;
}