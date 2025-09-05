#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
    private:
        std::time_t timeOfEntry;
        int ID;
    public:
        Vehicle(int ID);
        int getID();
        std::time_t getTimeOfEntry();
        virtual int getParkingDuration();
};


#endif