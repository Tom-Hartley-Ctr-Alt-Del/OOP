#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
    private:
        int maximumVehicles;
        Vehicle** vehicles;
        int currentVehicles;
        int maxParkingDuration;
    public:
        ParkingLot(int);
        int getMaxParkingDuration();
        int getCount();
        void parkVehicle(Vehicle*);
        void unparkVehicle(int);
        int countOverstayingVehicles();
};

#endif