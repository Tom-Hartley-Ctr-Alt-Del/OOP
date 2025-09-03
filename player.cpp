#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

string Player::getName() const{
    return name;
}

int Player::getHealth() const{
    return health;
}

int Player::getDamage()const {
    return damage;
}

void Player::setName(string newName) {
    name=newName;
}

void Player::setHealth(int newHealth) {
    health=newHealth;
}

void Player::setDamage(int newDamage) {
    damage=newDamage;
}

Player::Player(string name, int health, int damage) {
    setName(name);
    setHealth(health);
    setDamage(damage);
}

void Player::attack(Player* opponent, int damage) {
    opponent -> takeDamage(damage);
}

void Player::takeDamage(int damage) {
    int health=getHealth();
    health=health-damage;
    setHealth(health);
    cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}