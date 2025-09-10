#ifndef FRIDGE_H
#define FRIDGE_H
#include "Appliance.h"

class Fridge: public Appliance {
    protected:
        double volume;
    public:
        Fridge();
        Fridge(int powerRating, double volume);

        void set_Volume(double volume);
        double get_Volume();
        double get_PowerConsumption();
};

#endif