#ifndef MAGE_H
#define MAGE_H
#include <iostream>
#include "Character.hpp"

using namespace std;

class Mage : public Character{
    public:
    ~Mage(){};
    Mage(string name, int level){
        this->name = name;
        this->level = level;
        this->setDamage(level);
        this->setHealth(level);
    };

    int attack() const override{return this->damage;}; // This is the attack function, this is to attack someone and is to return the amount of damage
    void setDamage(int level) override {this->damage = 10 * (level * 2);}; // damage is scaled by the level, a mage's base damage is 10
    string getType() override {return " is a Mage ";}; // this is virtual because type changes from type to type
    void setHealth(int level) override {this->health = 25 * level;}; // health is scaled by level, a mages base health is 25
    
};

#endif