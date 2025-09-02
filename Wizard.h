Create two subclasses of Player named Wizard and Warrior that 
inherit player

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Players{
    private:
    std::string name;
    int health;
    int damage;

    public:
    Player(string name, int health, int damage);

    int getHealth(int health);

    int setHealth(int health);

    void attack(Player* opponent, int damage);

    void takeDamage(int damage);
};

#endif
