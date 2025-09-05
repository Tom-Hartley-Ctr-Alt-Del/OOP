#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
#include "ParkingLot.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    ParkingLot lot(10);  // Create ParkingLot with capacity 10
    string vehicleType;
    int ID = 0;

    cout << "Start parking vehicles. Lot capacity is 10.\n";

    // Park vehicles until lot is full
    while (lot.getCount() < 10) {
        cout << "Enter vehicle type to park (car, bus, motorbike): ";
        cin >> vehicleType;

        Vehicle* vehicle = nullptr;

        if (vehicleType == "car") {
            vehicle = new Car(ID);
        } else if (vehicleType == "bus") {
            vehicle = new Bus(ID);
        } else if (vehicleType == "motorbike") {
            vehicle = new Motorbike(ID);
        } else {
            cout << "Invalid vehicle type. Please enter 'car', 'bus', or 'motorbike'.\n";
            continue;  // ask again without increasing ID
        }

        lot.parkVehicle(vehicle);
        ID++;
    }

    cout << "Parking lot is full!\n";

    // Ask user for vehicle ID to unpark
    int removeID;
    cout << "Enter the ID of the vehicle to unpark: ";
    cin >> removeID;
    lot.unparkVehicle(removeID);

    return 0;
}
