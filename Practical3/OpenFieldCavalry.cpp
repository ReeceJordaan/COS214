#include "OpenFieldCavalry.h"
#include <iostream>
using namespace std;

OpenFieldCavalry::OpenFieldCavalry(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void OpenFieldCavalry::move() {
    cout<<"OpenField Cavalry galloping across the open terrain."<<endl;
}

void OpenFieldCavalry::fight() {
    cout<<"OpenField Cavalry charging with devastating force."<<endl;
}
