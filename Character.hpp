#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

using namespace std;

class Character{
    public:
        virtual ~Character() = default;
        string getName() const {return this->name;};
        void setName(const string& name) {this->name = name;};
        virtual int attack() const = 0;
        int getHealth() {return this->health;};
        string getName() {return this->name;};
        int getDamage() {return this->damage;};
        virtual string getType() = 0;
        virtual void setDamage(int level) = 0;
        virtual void setHealth(int health) = 0;
    protected:
        string name;
        int health = 0;
        int damage = 0;
        int level;
};

#endif