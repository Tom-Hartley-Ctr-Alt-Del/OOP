#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"
class Motorbike : public Vehicle {
    private:
    public:
        Motorbike(int);
        int getParkingDuration();
};

#endif