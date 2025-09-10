#include "Appliance.h"
#include "House.h"
#include "Fridge.h"
#include "TV.h"
#include <iostream>
using namespace std;

int main() {
    House h1(3);
    Fridge *f1 = new Fridge(10,40.9);
    Fridge *f2 = new Fridge(10,40.9);   
    Appliance* a1 =new Appliance(9); 
    TV* t1 = new TV(19.2, 2);
    h1.addAppliance(a1);
    h1.addAppliance(f1);
    h1.addAppliance(t1);
    h1.addAppliance(f2);
    
    cout << h1.get_currentAppliances() << endl << h1.get_numAppliances() << endl << h1.get_totalPowerConsumption() << endl;
    cout << "Done" << endl;
    delete f1, f2, a1, t1;
}