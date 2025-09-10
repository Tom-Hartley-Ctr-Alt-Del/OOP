#include "Appliance.h"
#include "House.h"

House::House() {
    numAppliances=10;
    appliances=new Appliance*[numAppliances];

    for (int i=0; i<numAppliances; i++) {
        appliances[i]=nullptr;
    }
    currentAppliances=0;
}

House::House(int numAppliances) {
    this->numAppliances=numAppliances;
    appliances=new Appliance*[numAppliances];

    for (int i=0; i<numAppliances; i++) {
        appliances[i]=nullptr;
    }
    currentAppliances=0;
}

int House::getNumAppliances(){
    return numAppliances;
}


int House::getCurrentAppliances() {
    return currentAppliances;
}

bool House::addAppliance(Appliance* appliance) {
    if (currentAppliances >=numAppliances) {
        return false;
    }
    appliances[currentAppliances]=appliance;
    currentAppliances++;
    return true;
}

double House::getTotalPowerConsumption() {
    double totalPowerUsage=0;
    for (int i=0; i<getCurrentAppliances(); i++) {
        totalPowerUsage=totalPowerUsage+appliances[i]->getPowerConsumption();
    }
    return totalPowerUsage;
}