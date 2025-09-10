#include "Appliance.h"
#include "Fridge.h"
#include <iostream>
using namespace std;

int main() {
    Appliance a1;
    Fridge f1(10,9);
    cout << f1.get_powerConsumption() << endl;
    cout << f1.get_isOn() << endl;
    cout << f1.get_volume() << endl;
    cout << f1.get_powerRating();
    return 0;
}