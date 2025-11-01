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

    int attack() const override{return this->damage;};
    void setDamage(int level) override {this->damage = 10 * (level * 2);};
    string getType() override {return " is a Mage ";};
    void setHealth(int level) override {this->health = 25 * level;};
    
};

#endif