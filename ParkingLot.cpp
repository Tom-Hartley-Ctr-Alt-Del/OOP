#include "Vehicle.h"
#include "ParkingLot.h"
#include <iostream>
using namespace std;

int ParkingLot::getCount() {
    return currentVehicles;
}

ParkingLot::ParkingLot(int maximumVehicles) {
    currentVehicles=0;
    this->maximumVehicles=maximumVehicles;
    vehicles=new Vehicle*[maximumVehicles];
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if(currentVehicles<maximumVehicles) {
        vehicles[currentVehicles]=vehicle;
        currentVehicles++;
    } else {
        cout << "The lot is full" << endl;
        return;
    }
}

void ParkingLot::unparkVehicle(int ID) {
    for (int i=0; i<currentVehicles; i++) {
        if (vehicles[i]->getID()==ID) {
            cout << "Please proceed to the exit. " << endl;
            delete vehicles[i];
            for (int j=i; j<currentVehicles-1; j++) {
                vehicles[j]=vehicles[j+1];
            }
            currentVehicles--;
            return;
        }
    }
    cout << "Vehicle not in lot" << endl;
}