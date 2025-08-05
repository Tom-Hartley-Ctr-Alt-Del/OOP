#include <iostream>
using namespace std;

void binaryConverter(int base10Value) {
    int remainder[base10Value];
    int counter=0;

    
    while (base10Value > 0) {
        remainder[counter]=base10Value%2;
        base10Value=base10Value/2;
        counter++;
    }

    for (int i=counter-1; i>=0; i--) {
        cout << remainder[i];
    }
    cout << endl;
}

#include <iostream>
using namespace std;

extern void binaryConverter(int);

int main() {
    int base10Value=50;
    binaryConverter(base10Value);
    return 0;
}