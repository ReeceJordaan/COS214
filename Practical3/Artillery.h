#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "LegionUnit.h"
#include "UnitComponent.h"

using namespace std;
//Description: These classes inherit from LegionUnit and are tailored with specialised behaviors
//and attributes that reflect their respective roles on the battlefield.

class Artillery : public UnitComponent
{
    public:
		virtual void move() = 0;
        virtual void attack() = 0;
    //Delivers long-range support and bombardment capabilities.
};


#endif
