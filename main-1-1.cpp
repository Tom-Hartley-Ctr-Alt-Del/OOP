#include "Appliance.h"
#include <iostream>
using namespace std;

int main() {
    Appliance a1;
    cout << "The machine is set to: " << a1.get_isOn() << ", its power rating is: " << a1.get_powerRating() << ", and its power consumption is: " << a1.get_powerConsumption() << endl;
    a1.set_powerRating(10);
    cout << "Power Rating is now: " << a1.get_powerRating() << endl;
    return 0;
}