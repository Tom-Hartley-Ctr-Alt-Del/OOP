#include "Appliance.h"
#include "Fridge.h"

Fridge::Fridge()
    : Appliance(), volume(0.0) {
}

Fridge::Fridge(int powerRating, double volume) 
    : Appliance(powerRating), volume(volume){

}

void Fridge::setVolume(double volume) {
    this->volume=volume;
}

double Fridge::getVolume() {
    return volume;
}

double Fridge::getPowerConsumption() {
    double powerConsumption;
    powerConsumption=getPowerRating()*24*(volume/100);
    return powerConsumption;
}
