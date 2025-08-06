#include <iostream> 
#include <cmath>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binaryArray[5]={1,0,1,0,1};
    cout << binary_to_int(binaryArray, 5) << endl;
    return 0;
}