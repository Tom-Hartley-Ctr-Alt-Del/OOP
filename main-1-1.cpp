#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
#include <ctime>
#include <iostream>
#include <string>
using namespace std;


int main() {
    string userInput;
    int totalVehicles=0;
    int carCounter=0;
    int busCounter=0;
    int MotorbikeCounter=0;
    int ID=0;

    cout << "How many vehicles will be entering today? ";
    cin >> totalVehicles;
    Vehicle* capacity[totalVehicles];

    for (int i=0; i<totalVehicles; i++) {
        cout << "What vehicle is enterring now? ";
        cin >> userInput;
        if (userInput=="car") {
            capacity[i]=new Car(ID);
            carCounter++;
        } else if (userInput=="bus") {
            capacity[i]=new Bus(ID);
            busCounter++;
        } else if (userInput=="motorbike") {
            capacity[i]=new Motorbike(ID);
            MotorbikeCounter++;
        } else {
            i=i-1;
            cout << "Sorry, please enter either 'car', 'motorbike', or 'bus': ";
        }
        ID++;
        cout << endl;
    }
    cout << "Thank you for parking your vehicles here! Type 'exit' when you want to leave!" << endl;
    cin >> userInput;
    if (userInput=="exit") {
        for (int j=0; j<totalVehicles; j++) {
            cout << "Vehicle:" << j << capacity[j]->getID() << " " << capacity[j]->getParkingDuration() << endl;
        }
    }
    return 0;
}