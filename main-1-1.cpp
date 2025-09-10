#include "Appliance.h"
#include <iostream>
using namespace std;

int main() {
    Appliance a1;
    cout << "The machine is set to: " << a1.getIsOn() << ", its power rating is: " << a1.getPowerRating() << ", and its power consumption is: " << a1.getPowerConsumption() << endl;
    a1.setPowerRating(10);
    cout << "Power Rating is now: " << a1.getPowerRating() << endl;
    return 0;
}