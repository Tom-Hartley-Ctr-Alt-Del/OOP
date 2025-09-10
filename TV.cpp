#include "Appliance.h"
#include "TV.h"

TV::TV() 
    : Appliance(), screenSize(0.0) {
}

TV::TV(int powerRating, double screenSize)
    : Appliance(powerRating), screenSize(screenSize) {
}

double TV::get_screenSize() {
    return screenSize;
}

void TV::set_screenSize(double screenSize) {
    this->screenSize=screenSize;
    
}


double TV::get_powerConsumption() {
    double powerConsumption;
    powerConsumption=get_powerRating()*(screenSize/10);
    return powerConsumption;
}