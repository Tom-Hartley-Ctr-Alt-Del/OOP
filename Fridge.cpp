#include "Appliance.h"
#include "Fridge.h"

Fridge::Fridge()
    : Appliance(), volume(0.0) {
}

Fridge::Fridge(int powerRating, double volume) 
    : Appliance(powerRating), volume(volume){

}

void Fridge::set_volume(double volume) {
    this->volume=volume;
}

double Fridge::get_volume() {
    return volume;
}

double Fridge::get_powerConsumption() {
    double powerConsumption;
    powerConsumption=get_powerRating()*24*(volume/100);
    return powerConsumption;
}
