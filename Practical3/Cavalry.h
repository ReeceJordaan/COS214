#ifndef CAVALRY_H
#define CAVALRY_H

#include "UnitComponent.h"

using namespace std;
//Description: These classes inherit from LegionUnit and are tailored with specialised behaviors
//and attributes that reflect their respective roles on the battlefield.

class Cavalry : public UnitComponent
{
    public:
		virtual void move() = 0;
        virtual void attack() = 0;
        virtual ~Cavalry() = default;
    //Provides mobility and impact in flanking maneuvers.
};


#endif
