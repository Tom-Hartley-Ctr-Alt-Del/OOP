#include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int length);

int main() {
    int length=5;
    int array[5]={1,4,3,4,1};
    cout << sum_min_max(array, length) << endl;
    return 0;
}