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

int Appliance::get_PowerRating() {
    return powerRating;
}

void Appliance::set_PowerRating(int powerRating) {
    this->powerRating=powerRating;
}

double Appliance::get_PowerConsumption() {
    return 0.0;
}

bool Appliance::get_IsOn() {
    return isOn;
}