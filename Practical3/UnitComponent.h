#ifndef UNITCOMPONENT_H
#define UNITCOMPONENT_H

//#include ".h"

using namespace std;

class UnitComponent
{
    public:
        virtual void move() = 0;
        virtual void fight() = 0;
        virtual void add(UnitComponent* component) = 0;
        virtual void remove(UnitComponent* component) = 0;
        virtual UnitComponent* getChild(int param) = 0;
        virtual ~UnitComponent();
};


#endif
