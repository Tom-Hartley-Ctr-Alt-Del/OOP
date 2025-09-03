#include "Warrior.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

string Warrior::getWeapon() const{
    return weapon;
}

void Warrior::setWeapon(string newWeapon) {
    weapon=newWeapon;
}

Warrior::Warrior(std::string name, int health, int damage, std::string weapon) 
    : Player(name, health, damage) {
    setWeapon(weapon);
}

void Warrior::swingWeapon(Player* opponent) {
    int damage= getDamage();
    opponent->takeDamage(damage);
    cout << getName() << " swings their " << getWeapon() << " at " << opponent->getName() << "!\n";
}
