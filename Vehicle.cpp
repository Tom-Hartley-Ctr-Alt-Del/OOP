#include "Vehicle.h"
#include <ctime>
using namespace std;

Vehicle::Vehicle(int ID)
    : ID(ID), timeOfEntry(time(nullptr)) {}

int Vehicle::getID() {
    return ID;
}

time_t Vehicle::getTimeOfEntry() {
    return timeOfEntry;
}

int Vehicle::getParkingDuration() {
    time_t timeOfEntry=getTimeOfEntry();
    int parkingDuration=time(nullptr)-timeOfEntry;
    return parkingDuration;
}