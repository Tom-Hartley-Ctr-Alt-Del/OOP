#ifndef TV_H
#define TV_H
#include "Appliance.h"

class TV: public Appliance {
    protected:
        double screenSize;
    public:
        TV();
        TV(int powerRating, double screenSize);

        void set_screenSize(double screenSize);
        double get_screenSize();
        double get_powerConsumption();
};

#endif