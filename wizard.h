#ifndef WIZARD_H
#define WIZARD_H
#include "Player.h"
#include <string>

class Wizard : public Player{
    private:
        int mana;
    public:
        Wizard(std::string name, int health, int damage, int mana);
        int getMana()const;
        void setMana(int newMana);
        void castSpell(Player* opponent);
};

#endif
