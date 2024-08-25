#ifndef CAVALRY_H
#define CAVALRY_H

#include "LegionUnit.h"
#include "UnitComponent.h"

using namespace std;
//Description: These classes inherit from LegionUnit and are tailored with specialised behaviors
//and attributes that reflect their respective roles on the battlefield.

class Cavalry : public LegionUnit
{
    public:
		virtual void move() = 0;
        virtual void attack() = 0;
    //Provides mobility and impact in flanking maneuvers.
};


#endif
