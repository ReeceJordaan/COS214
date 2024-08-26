#ifndef UNITCOMPONENT_h
#define UNITCOMPONENT_h

//#include "LegionFactory.h"

using namespace std;
//Description: Serves as the common interface for all military units produced by the factories, ensuring
//standard functionality across different unit types.

class UnitComponent
{
	public:
		virtual void move() = 0;
        virtual void attack() = 0;
		virtual ~UnitComponent() = default;
};


#endif
