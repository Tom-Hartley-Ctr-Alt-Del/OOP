#include <iostream>

extern void print_summed(int *array1,int *array2);

int main() {
    int array1[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int *ptr1=&array1[0][0];
    int array2[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int *ptr2=&array2[0][0];
    print_summed(ptr1, ptr2);
    return 0;
}