#include <iostream>
using namespace std;

extern void hexDigits(int *numbers,int length);

int main() {
    int length=0;
    cout << "How many numbers will you enter: ";
    cin >> length;
    int number[length]={0};
   for (int i=0; i<length; i++) {
    cout << "Please type a value: ";
    cin >> number[i];
   }
    int *ptr=&number[0];
    hexDigits(ptr, length);
}