#include <iostream>

extern int num_count(int[], int, int);

int main() {
    int array[5]= {1,2,3,2,0};
    int desired_number=2;
    std::cout << "The values in the array equal to " << desired_number << " are " << num_count(array, -1, 2) << std::endl;
    return 0;
}