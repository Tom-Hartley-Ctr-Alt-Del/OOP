#include <iostream>
using namespace std;

void print_scaled(int *array, int);

int main() {
    int array[3][3]={{0,1,2}, {3,4,5}, {6,7,8}};
    int scale=3;
    int *ptr=&array[0][0];
    print_scaled(ptr, scale);
    return 0;
}