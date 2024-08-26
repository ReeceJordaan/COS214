#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H

//#include "LegionFactory.h"

using namespace std;
//Description: Serves as the common interface for all military units produced by the factories, ensuring
//standard functionality across different unit types.

class LegionUnit
{
	public:
		virtual void move() = 0;
        virtual void attack() = 0;
		virtual ~LegionUnit() = default;
};


#endif
