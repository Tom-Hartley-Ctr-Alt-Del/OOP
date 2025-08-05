#include <iostream>
using namespace std;

extern void print_summed(int *array1, int *array2);

int main() {
    int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
    int *m1_ptr=&matrix1[0][0];
    int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}};
    int *m2_ptr=&matrix2[0][0];

    print_summed(m1_ptr, m2_ptr);
    return 0;
}