#include "Wizard.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

int Wizard::getMana() const{
    return mana;
}

void Wizard::setMana(int newMana) {
    mana=newMana;
}

Wizard::Wizard(std::string name, int health, int damage, int mana) 
    : Player(name, health, damage) {
    setMana(mana);
}

void Wizard::castSpell(Player* opponent) {
    int mana=getMana();
    opponent->takeDamage(mana);
    cout << getName() << " casts a spell on " << opponent->getName() << " for " << mana << " damage.\n";
}
