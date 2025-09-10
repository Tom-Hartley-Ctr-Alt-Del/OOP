#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
    protected:
        int powerRating;
        bool isOn;

    public:
        Appliance();
        Appliance(int);
        void turnOn();
        void turnOff();
        virtual double get_PowerConsumption();
        int get_PowerRating();
        void set_PowerRating(int);
        bool get_IsOn();
};

#endif