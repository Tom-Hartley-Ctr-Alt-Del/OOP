#include "Appliance.h"
#include <iostream>
using namespace std;

int main() {
    Appliance a1;
    cout << "The machine is set to: " << a1.get_IsOn() << ", its power rating is: " << a1.get_PowerRating() << ", and its power consumption is: " << a1.get_PowerConsumption() << endl;
    a1.set_PowerRating(10);
    cout << "Power Rating is now: " << a1.get_PowerRating() << endl;
    return 0;
}