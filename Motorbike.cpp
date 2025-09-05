#include "Vehicle.h"
#include "Motorbike.h"
#include <ctime>
using namespace std;

Motorbike::Motorbike(int ID)
    : Vehicle(ID) {}

int Motorbike::getParkingDuration() {
    time_t timeOfEntry=getTimeOfEntry();
    int parkingDuration=(time(nullptr)-timeOfEntry)*0.85;
    return parkingDuration;
}
