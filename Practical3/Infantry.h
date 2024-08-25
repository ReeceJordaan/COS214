#ifndef INFANTRY_H
#define INFANTRY_H

#include "LegionUnit.h"
#include "UnitComponent.h"

using namespace std;
//Description: These classes inherit from LegionUnit and are tailored with specialised behaviors
//and attributes that reflect their respective roles on the battlefield.

class Infantry : public LegionUnit
{
	public:
		virtual void move() = 0;
        virtual void attack() = 0;
	//Optimized for close combat and defense operations.
};


#endif
