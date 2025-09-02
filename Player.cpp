#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

int Player::getHealth(&Player opponent) const{
    return opponent.health;
}

int Player::setHealth(int health) {
    this->health=health;
    return health;
}

void Player::attack(Player* opponent; int damage) {
    opponent.getHealth
}

void Player::takeDamage(int damage) {
}

int main() {
    Player(Tom, 100, 10);
    attack(Jeff, 10);
    takeDamage(10);
}

#ifndef PLAYER_H
#define PLAYER_H*
#include <iostream>
#include <string>

class Players{
    private:
    std::string name;
    int health;
    int damage;
    public:
    Player(string name, int health, int damage);
    void attack(Player*opponent, int damage);
    void takeDamage(int damage);
};

#endif