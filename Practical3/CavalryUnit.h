#ifndef CAVALRYUNIT_H
#define CAVALRYUNIT_H

#include "UnitComponent.h"

using namespace std;

//A leaf, thus doesn't have children
class CavalryUnit : public UnitComponent {
    public:
        void move();
        void fight();
        //void add(UnitComponent* component);
        //void remove(UnitComponent* component);
};

#endif
