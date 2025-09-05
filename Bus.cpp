#include "Vehicle.h"
#include "Bus.h"
#include <ctime>
using namespace std;

Bus::Bus(int ID)
    : Vehicle(ID) {}

int Bus::getParkingDuration() {
    time_t timeOfEntry=getTimeOfEntry();
    int parkingDuration=(time(nullptr)-timeOfEntry)*0.75;
    return parkingDuration;
}
