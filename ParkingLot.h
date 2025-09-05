#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
    private:
        int maximumVehicles;
        Vehicle** vehicles;
        int currentVehicles;
    public:
        ParkingLot(int);
        int getCount();
        void parkVehicle(Vehicle*);
        void unparkVehicle(int);
};

#endif