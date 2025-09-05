#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"
class Bus : public Vehicle {
    private:
    public:
        Bus(int);
        int getParkingDuration();
};

#endif