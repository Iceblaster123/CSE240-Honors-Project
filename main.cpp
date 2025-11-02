#include <iostream>
#include "Character.hpp"
#include "Mage.hpp"
#include "Warrior.hpp"
#include <vector>

using namespace std;

int main(){
    Character* m1 = new Mage("Dumbledor", 2);
    Character* m2 = new Mage("Gandalf", 1);
    Character* w1 = new Warrior("Aurther", 4);
    Character* w2 = new Warrior("Foot Soilder", 1);

    vector<Character*> MyList;
    MyList.push_back(m1);
    MyList.push_back(m2);
    MyList.push_back(w1);
    MyList.push_back(w2);

    cout << "Your army: \n";

    for(Character* i : MyList){
        cout << i->getName() << i->getType() << "and has " << i->getHealth() << " hit points and is doing " << i->getDamage() << " damage points\n";
    }

    return 0;
}