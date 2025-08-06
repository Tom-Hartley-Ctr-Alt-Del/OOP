#include <iostream>
using namespace std;

extern int sum_diagonal(int *array);

int main() {
    int array[4][4]={{1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4}};
    int *ptr=&array[0][0];
    cout << sum_diagonal(ptr) << endl;
    return 0;
}