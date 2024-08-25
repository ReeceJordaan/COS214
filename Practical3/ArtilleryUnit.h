#ifndef ARTILLERYUNIT_H
#define ARTILLERYUNIT_H

#include "UnitComponent.h"

using namespace std;

//A leaf, thus doesn't have children
class ArtilleryUnit : public UnitComponent {
    public:
        void move();
        void fight();
        //void add(UnitComponent* component);
        //void remove(UnitComponent* component);
};

#endif
