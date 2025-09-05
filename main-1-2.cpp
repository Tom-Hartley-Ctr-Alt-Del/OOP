#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
#include "ParkingLot.h"
#include <ctime>
#include <iostream>
#include <string>
using namespace std;


int main() {
    ParkingLot lot(3);
    string userInput;
    int totalVehicles=0;
    int carCounter=0;
    int busCounter=0;
    int MotorbikeCounter=0;
    int ID=0;

    while (lot.getCount() <3) {
        cout << "What vehicle is enterring now? ";
        cin >> userInput;

        Vehicle* vehicle;

        if (userInput=="car") {
            vehicle=new Car(ID);
            carCounter++;
        } else if (userInput=="bus") {
            vehicle=new Bus(ID);
            busCounter++;
        } else if (userInput=="motorbike") {
            vehicle=new Motorbike(ID);
            MotorbikeCounter++;
        } else {
           cout << "Sorry, you cannot park here.";
           continue;
        }
        lot.parkVehicle(vehicle);
        ID++;
    }
   
    cout << "The lot is full";

    int removeID;

    cout << "Enter the ID of the vehicle you want to remove: ";
    cin >> removeID;
    lot.unparkVehicle(removeID);
    return 0;
}