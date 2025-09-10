#include "Appliance.h"
#include "TV.h"

TV::TV() 
    : Appliance(), screenSize(0.0) {
}

TV::TV(int powerRating, double screenSize)
    : Appliance(powerRating), screenSize(screenSize) {
}

double TV::getScreenSize() {
    return screenSize;
}

void TV::setScreenSize(double screenSize) {
    this->screenSize=screenSize;
    
}


double TV::getPowerConsumption() {
    double powerConsumption;
    powerConsumption=getPowerRating()*(screenSize/10);
    return powerConsumption;
}