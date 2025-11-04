#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include "Character.hpp"

using namespace std;

// look at mage class comment

class Warrior : public Character{
    public:
    ~Warrior(){};
    Warrior(string name, int level){
        this->name = name;
        this->level = level;
        this->setDamage(level);
        this->setHealth(level);
    };

    int attack() const override{return this->damage;};
    string getType() override {return " is a Warrior ";};
    void setDamage(int level) override{this->damage = 6 * (level * 2);};
    void setHealth(int level) override{this->health = 35 * level;};
    
};

#endif