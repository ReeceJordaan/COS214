#ifndef INFANTRYUNIT_H
#define INFANTRYUNIT_H

#include "UnitComponent.h"

using namespace std;

//A leaf, thus doesn't have children
class InfantryUnit : public UnitComponent {
    public:
        void move();
        void fight();
        //void add(UnitComponent* component);
        //void remove(UnitComponent* component);
};

#endif
