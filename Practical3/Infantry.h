#ifndef INFANTRY_H
#define INFANTRY_H

#include "UnitComponent.h"

using namespace std;
//Description: These classes inherit from LegionUnit and are tailored with specialised behaviors
//and attributes that reflect their respective roles on the battlefield.

class Infantry : public UnitComponent
{
	public:
		virtual void move() = 0;
        virtual void attack() = 0;
		virtual ~Infantry() = default;
	//Optimized for close combat and defense operations.
};


#endif
