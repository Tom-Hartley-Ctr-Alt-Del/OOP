#include "Appliance.h"
#include "TV.h"
#include <iostream>
using namespace std;

int main() {
    TV t1(10,9);
    cout << t1.get_powerConsumption() << endl;
    cout << t1.get_isOn() << endl;
    cout << t1.get_screenSize() << endl;
    cout << t1.get_powerRating();
    return 0;
}