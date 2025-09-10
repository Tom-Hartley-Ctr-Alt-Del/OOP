#include "Appliance.h"
#include "Fridge.h"

Fridge::Fridge()
    : Appliance(), volume(0.0) {
}

Fridge::Fridge(int powerRating, double volume) 
    : Appliance(powerRating), volume(volume){

}

void Fridge::set_Volume(double volume) {
    this->volume=volume;
}

double Fridge::get_Volume() {
    return volume;
}

double Fridge::get_PowerConsumption() {
    double powerConsumption;
    powerConsumption=get_PowerRating()*24*(volume/100);
    return powerConsumption;
}
