#include <iostream>
extern void count_digits(int *array);

int main() {
    int array[4][4]={{1,2,3,4},{1,2,3,4}, {1,2,3,4}, {1,2,3,4}};
    int *ptr=&array[0][0];
    count_digits(ptr);
    return 0;
}