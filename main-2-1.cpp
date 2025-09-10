#include "Appliance.h"
#include "Fridge.h"
#include <iostream>
using namespace std;

int main() {
    Appliance a1;
    Fridge f1(10,9);
    cout << f1.getPowerConsumption() << endl;
    cout << f1.getIsOn() << endl;
    cout << f1.getVolume() << endl;
    cout << f1.getPowerRating();
    return 0;
}