#include "Vehicle.h"
#include "Car.h"
#include <ctime>
using namespace std;

Car::Car(int ID)
    : Vehicle(ID) {}

int Car::getParkingDuration() {
    time_t timeOfEntry=getTimeOfEntry();
    int parkingDuration=(time(nullptr)-timeOfEntry)*0.9;
    return parkingDuration;
}
