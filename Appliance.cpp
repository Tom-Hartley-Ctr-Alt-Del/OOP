#include "Appliance.h"

Appliance::Appliance(){
    powerRating=0;
    isOn=false;
}

Appliance::Appliance(int powerRating) {
    this->powerRating=powerRating;
    isOn=false;
}

void Appliance::turnOn() {
    isOn=true;
}

void Appliance::turnOff() {
    isOn=false;
}

int Appliance::getPowerRating() {
    return powerRating;
}

void Appliance::setPowerRating(int powerRating) {
    this->powerRating=powerRating;
}

double Appliance::getPowerConsumption() {
    return 0.0;
}

bool Appliance::getIsOn() {
    return isOn;
}