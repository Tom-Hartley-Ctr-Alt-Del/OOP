#include "Appliance.h"
#include "TV.h"
#include <iostream>
using namespace std;

int main() {
    TV t1(10,9);
    cout << t1.getPowerConsumption() << endl;
    cout << t1.getIsOn() << endl;
    cout << t1.getScreenSize() << endl;
    cout << t1.getPowerRating();
    return 0;
}