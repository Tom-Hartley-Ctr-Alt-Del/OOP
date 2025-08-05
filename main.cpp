#include <iostream>
using namespace std;

extern void binaryConverter(int);

int main() {
    int base10Value=50;
    binaryConverter(base10Value);
    return 0;
}