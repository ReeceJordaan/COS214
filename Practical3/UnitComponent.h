#ifndef UNITCOMPONENT_H
#define UNITCOMPONENT_H

//#include ".h"

using namespace std;

class UnitComponent
{
    public:
        void move();
        void fight();
        void add(UnitComponent* component);
        UnitComponent* remove(UnitComponent* componet);
};


#endif
