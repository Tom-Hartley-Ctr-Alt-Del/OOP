#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main() {
    int length=5;
    int array[5]={1,4,3,4,1};
    cout << sum_if_palindrome(array, length) << endl;
    return 0;
}