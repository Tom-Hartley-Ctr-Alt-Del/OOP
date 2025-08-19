#include <iostream>
using namespace std;

void hexDigits(int *numbers,int length) {
    
    for (int i=0; i<length; i++) {
        int temporaryValue=numbers[i];
        int hexArray[temporaryValue];
        int count=0;
        while (temporaryValue>0) {
            hexArray[count]=temporaryValue%16;
            temporaryValue=temporaryValue/16;
            count++;
        }
        for (int j=count-1; j>-1; j--) {
            switch (hexArray[j]) {
                case 10:
                    cout << "A";
                    break;
                case 11:
                    cout << "B";
                    break;
                case 12:
                    cout << "C";
                    break;
                case 13:
                    cout << "D";
                    break;
                case 14:
                    cout << "E";
                    break;
                case 15:
                    cout << "F";
                    break;
                default:
                    cout << hexArray[j];
                    break;
            }
        }
        cout << endl;
    }
}

