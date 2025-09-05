#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
class Car : public Vehicle {
    private:
    public:
        Car(int);
        int getParkingDuration();
};

#endif