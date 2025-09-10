#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"

class House: public Appliance {
    protected:
        int numAppliances;
        Appliance** appliances;
        int currentAppliances;
    public:
        House();
        House(int numAppliances);
        bool addAppliance(Appliance* appliance);
        double get_TotalPowerConsumption();
        int get_NumAppliances();
        int get_CurrentAppliances();
};

#endif